
#include <bits/stdc++.h>
using namespace std;
 string longestPalin (string S) {
        
        int l,h;
        int start=0,end=1;
        for(int i=1;i<S.size();i++)
        {
            l= i-1; //oddsubstring
            h=i;
            while(l>=0&& h<S.size() && S[l]==S[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
            l= i-1;//even substring
            h=i+1;
            while(l>=0&& h<S.size() && S[l]==S[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                }
                l--;
                h++;
            }
            
        }
        string ans="";
        for(int i=start;i<=start+end-1;i++)
          ans=ans+S[i];
          return ans;
        
    }
 
int main()
{
        
        string s;
        cin>>s;
        
      
	cout<<"Longest Palindrome in a string is "<<longestPalin(s);
}
