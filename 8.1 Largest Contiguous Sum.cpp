//Find Largest Contiguous Sum (Kadane's Algorithm)
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	int sum=0,maxx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		maxx=max(sum,maxx);
		if(sum<0)
		sum=0;
	}
	cout<<maxx<<" ";
}
