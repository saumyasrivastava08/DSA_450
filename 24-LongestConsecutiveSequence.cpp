#include <bits/stdc++.h>
using namespace std;
  int findLongestConseqSubseq(vector<int>arr, int N)
    {
       unordered_set<int>s(arr.begin(),arr.end());
       int ans=INT_MIN;
       for(int i=0;i<N;i++)
       {
           if(s.find(arr[i]-1)==s.end())
           {
               int c=1;
               while(s.find(arr[i]+c)!=s.end())
                 c++;
                  ans= max(ans,c);
             
           }
           
       }
    return ans;
    }
int main()
{
	vector<int>A;
   
	int n1,n2,n3,a;
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
     long long int  ans =  findLongestConseqSubseq(A,n1);
     
       cout<<"Longest consecutive sequence in array is "<<ans;
}
