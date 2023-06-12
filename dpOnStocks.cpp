#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // int maxi = INT_MIN;
    // int index =-1;
    // for(int i=0; i<prices.size();i++){
    //     if(prices[i]>maxi) index++;
    //     maxi=max(maxi,prices[i]);
    // }
    // int mini = INT_MAX;
    // for(int i=0; i<index;i++){
    //     mini=min(mini,prices[i]);
    // }
    //    while(prices[index]!=maxi){
    //        index++;
    //    }
    // return maxi-mini;

    int mini = prices[0];
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        mini = min(mini, prices[i]);
        profit = max(profit, prices[i] - mini);
    }

    return profit;
}