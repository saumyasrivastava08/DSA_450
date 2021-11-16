//Cyclically Rotate Array by one
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
	int l =arr[n-1];
	for(int i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
		
	}
	arr[0]=l;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
