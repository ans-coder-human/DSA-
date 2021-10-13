/*

Give an array containing lengths of different ropes. 
The cost of joining 2 ropes a and b is a+b;
Find the minimum cost of joining all the ropes.

*/

// Time Compexity : O(nlogn)
// Space Complexity : O(n)

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int minjoincost(vector<int> len)
{
    priority_queue<int, vector<int>, greater<int>> mnlen;
    
    for(int i = 0; i<len.size(); i++)
    {
        mnlen.push(len[i]);
    }
    int cost = 0;
    
    while(mnlen.size()>1)
    {
        int a = mnlen.top();
        mnlen.pop();
        int b = mnlen.top();
        mnlen.pop();
        
        cost += (a+b);
        
        mnlen.push(a+b);
    }
    
    return cost;
    
}



int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    
    cout<<"Minimum cost of joining the ropes : "<<minjoincost(v);
}
