#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    // brute
    //  sort(arr.begin(),arr.end());
    //  for(int i=0; i<n-1; i++){
    //  	if(arr[i]==arr[i+1]) return arr[i];
    //  }

    // better
    //  unordered_map<int,int>mpp;
    //  for(int i=0; i<n; i++){
    //  	mpp[arr[i]]++;
    //  }
    //  for(auto i:mpp){
    //  	if(i.second>1) return i.first;
    //  }
    //  return -1;
}
