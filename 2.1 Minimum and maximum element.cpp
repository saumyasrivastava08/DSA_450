//Find minimum and maximum element in the array
#include<bits/stdc++.h>
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
	int maxx=INT_MIN,minn=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxx)
		{
			maxx=arr[i];
		}
		else if(arr[i]<minn)
		{
			minn=arr[i];
		}
	}
	cout<<"Maximum element in the array is "<<maxx<<" and minimum element is "<<minn;
}
