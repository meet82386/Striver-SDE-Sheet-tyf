#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mp = INT_MAX,sum =0;
    for(int i : prices){
        if (i < mp) mp = i;
        sum = max(sum,i-mp);
    }
    return sum;
}