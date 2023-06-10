#include <bits/stdc++.h>
#include <vector>

int findMajorityElement(int arr[], int n)
{

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    // for(int i=0; i<n; i++){
    // 	int count =0;
    // 	for(int j=i; j<n; j++){
    // 		if(arr[i]==arr[j]) count++;
    // 		if(count>n/2) return arr[j];
    // 	}
    // }
    for (auto i : mpp)
    {
        if (i.second > n / 2)
            return i.first;
    }
    return -1;
}