/*

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

*/

//Time Complexity : O(n)
//Space Complexity : O(n)


#include<iostream>
using namespace std;


int rob(vector<int>& nums) {
        
        if(nums.size()==0)
        {
            return 0;
        }
        
        if(nums.size()==1)
        {
            return nums[0];
        }
        
        int dp[nums.size()+1];
        dp[0] = 0;
        dp[1] = nums[0];
        
        int i;
        for(i=1; i<nums.size(); i++)
        {
            dp[i+1] = max(dp[i], dp[i-1]+nums[i]); 
        }
        
        return dp[nums.size()];
    }
    
    
 int main()
 {
 
 	int n;
 	cin>>n;
 	vector<int> v(n);
 	
 	for(int i = 0; i<n; i++)
 	{
 	   cin>>v[i];
 	}
 	
 	cout<<"Maximum amount of money that can be robbed : "<<rob(v);
 	
 	
 }
