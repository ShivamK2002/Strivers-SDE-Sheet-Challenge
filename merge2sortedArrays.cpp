#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    // 	int left = m-1;
    // 	int right = 0;

    // 	while(left>right){
    // 		if(arr1[left]<=arr2[right]) {
    // 			swap(arr1[left],arr2[right]);
    // 			left--;
    // 			right++;
    // 		}
    // 	}
    // 	sort(arr1.begin(),arr1.end());

    // 	sort(arr2.begin(),arr2.end());
    // 	int j=m;
    // 	for(int i=0; i<n; i++){
    // 		arr1[j++]=arr2[i];
    // 	}
    // 	return arr1;
    int j = m;
    for (int i = i; i < n; i++)
    {
        arr1[j++] = arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    return arr1;
}