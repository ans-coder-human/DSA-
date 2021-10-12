/*

 Give a binary string S, find the number of operations required to make it zero.

 Operations allowed :
   1. if the number representing the binary string is even, divide it by 2
   2. if the number representing the binary strind is odd, subtract 1 from it.

*/

int Makeitzero(string &S)
{
    if(S.size()==0)
    {
        return 0;
    }
    if(S.size()==1)
    {
        if(S=="0")
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    
    int st = 0;
    while(S[st]=='0')
    {
        st++;
    }
    int one = 0, zero = 0;
    for(int i = st; i<S.size(); i++)
    {
        if(S[i]=='1')
        {
            one++;
        }
        else if(S[i]=='0')
        {
            zero++;
        }
    }
    int ans = 2*(one-1) + zero + 1;
    return ans;
}

int main() {
    string S;
    cin>>S;
    cout<<Makeitzero(S);
}
