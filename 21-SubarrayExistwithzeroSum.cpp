#include <bits/stdc++.h>
using namespace std;
  bool subArrayExists(vector<int>arr, int n)
    {
        unordered_set<int> s;
       int preSum=0;
       for(int i=0; i<n ;i++)
       {
           preSum+=arr[i];
           if(preSum==0)   //  corner case
           return true;
           if(s.find(preSum)!=s.end())
           return true;
           else
           s.insert(preSum);
       }
       return false;
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
     bool ans = subArrayExists(A,n1);
     
       cout<<ans;
}
