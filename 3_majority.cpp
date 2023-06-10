#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int majority = n / 3;
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for (auto i : mpp)
    {
        if (i.second > majority)
            ans.push_back(i.first);
    }

    return ans;
}

// morre's voting algo - optimum
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int majority = n / 3;

    int count1 = 0;
    int count2 = 0;
    int ele1;
    int ele2;

    for (int i = 0; i < n; i++)
    {

        if (count1 == 0 && arr[i] != ele2)
        {
            count1++;
            ele1 = arr[i];
        }

        else if (count2 == 0 && arr[i] != ele1)
        {
            count2++;
            ele2 = arr[i];
        }

        else if (arr[i] == ele1)
        {
            count1++;
        }
        else if (arr[i] == ele2)
        {
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    int freq1 = 0;
    int freq2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele1)
            freq1++;
        if (arr[i] == ele2)
            freq2++;
    }
    if (freq1 > n / 3)
        ans.push_back(ele1);
    if (freq2 > n / 3)
        ans.push_back(ele2);

    return ans;
}