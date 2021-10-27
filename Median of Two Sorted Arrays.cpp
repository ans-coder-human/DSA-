/*

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

Time complexity : O(nlogn)
Space complexity : O(n)

*/


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
       vector<int> total;
        if(nums1.size() == 0 && nums2.size()==0)
        {
            return 0;
        }
        
        if(nums1.size() == 0)
        {
         total = nums2;
             if(total.size()==2)
        {
            
            double med =  (total[0]+total[1]);
                 med = med/2;
                 return med;
        }
            goto x;
            
        }
        if(nums2.size() == 0)
        {
         total = nums1; 
             if(total.size()==2)
        {
            
            double med =  (total[0]+total[1]);
                 med = med/2;
                 return med;
        }
            
            goto x;
            
        }
        if(total.size()==2)
        {
            
            return (total[0]+total[1])/2;
        }
        
        total = nums1;
        
        
        total.insert(total.end(),nums2.begin(), nums2.end());
        
        sort(total.begin(), total.end());
        
        x:
        
        if(total.size()%2==0)
        {
            
            
            double median = (total[total.size()/2] + total[(total.size()/2)-1]);
            median = median/2;
            return median;
        }
        
        
        return total[total.size()/2];
        
        
}

int main()
{
    vector<int> ar1, ar2;
    int m, n;
    cout<<"Enter size of the first array : ";
    cin>>m;
    cout<<"Enter the first array : ";
    for(int i = 0; i<m; i++)
    {
        int x;
        cin>>x;
        ar1.push_back(x);
    }
    
    cout<<"Enter size of the second array : ";
    cin>>n;
    cout<<"Enter the second array : ";
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        ar2.push_back(x);
    }
    
    sort(ar1.begin(), ar1.end());
    sort(ar2.begin(), ar2.end());
    cout<<"Median of the merged array : "<<findMedianSortedArrays(ar1, ar2);
    
}
    
