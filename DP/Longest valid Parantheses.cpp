int longestValidParentheses(string s) {
        
        stack<int>st;
        int ans=0,curr=0;
        int n=s.size();
        int i=0;
        
        while(i<n){
            if(s[i]=='('){
                st.push(curr);
                curr=0;
            }
            
            else{
                if(st.empty())
                {  curr=0; }
                    
                else
                {curr=curr+st.top()+2;
                    st.pop();
                    ans=max(ans,curr);}
            }
            i++;
        }
        
        return ans;        
    }
