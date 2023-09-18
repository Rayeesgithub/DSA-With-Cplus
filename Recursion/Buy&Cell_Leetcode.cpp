#include<iostream>
#include<vector>
using namespace std;

    class Solution {
public:
void maxprofitFinder(vector<int>& prices,int i,int &minprice,int &maxProfit){
    // base case
    if(i==prices.size()){
        return;
    }
    // ek case solve karna hai
    if(prices[i]<minprice)
    minprice=prices[i];
    int todayprofit=prices[i]-minprice;
    if(todayprofit>maxProfit)
    maxProfit=todayprofit;
    //baki recursion sambhal lega
    maxprofitFinder(prices,i+1,minprice,maxProfit);
}
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxProfit=INT_MIN;
        int i=0;
        maxprofitFinder(prices,i,minprice,maxProfit);
     return maxProfit;
    }   
};