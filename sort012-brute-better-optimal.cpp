#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    // sort(arr,arr+n);
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        if (ele == 0)
            count0++;
        else if (ele == 1)
            count1++;
        else if (ele == 2)
            count2++;
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < count0 + count1 + count2; i++)
    {
        arr[i] = 2;
    }

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);

            high--;
        }
    }