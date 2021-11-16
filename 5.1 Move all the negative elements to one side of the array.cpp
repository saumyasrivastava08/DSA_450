//Move all negative elements left side

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
	int l=0,h=n-1,m=0;
	while(l<=h)
	{
		if(arr[l]<0)
		{
			swap(arr[l],arr[m]);
			l++;
			m++;
		}
		else
		{
			l++;
		}
	}
		 for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
}

