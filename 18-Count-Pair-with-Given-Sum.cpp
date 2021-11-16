#include <bits/stdc++.h>
using namespace std;
 int getPairsCount(vector<int>arr, int n, int k) {
       int count = 0;
       unordered_map<int,int> m;
       for(int i=0;i<n;i++)
       {
           if(m.find(k-arr[i]) != m.end())
           {
               
               count += m[k-arr[i]];
           }
           m[arr[i]]++;
       }
       return count;
    }
int main()
{
	vector<int>nums;
	int n,a,k;
    cout<<"No. of elements in array"<<"\n";
	cin>>n;
	cout<<"No. whose element is equal to "<<"\n";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		nums.push_back(a);
	}
int ans= getPairsCount(nums , n , k);
cout<<"Number of pairs whose sum is equal to k is "<<ans;
}
