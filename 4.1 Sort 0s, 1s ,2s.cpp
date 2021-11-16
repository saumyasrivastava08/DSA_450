//Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. 
//The functions should put all 0s first, then all 1s and all 2s in last.

//(Dutch National Flag Algorithm
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
	int l=0,m=0,h=n-1;
	while(m<=h)
	{
		switch(arr[m])
		{
			case 0: swap(arr[l++],arr[m++]);
			   break;
			case 1: m++;
			   break;
			case 2: swap(arr[m++],arr[h--]);
			break;
			   
			   
		}
	}
	 for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
	
}
