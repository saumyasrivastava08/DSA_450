#include <bits/stdc++.h>
using namespace std;
  	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long mx= 1, mi=1,ans=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        swap(mx,mi);
	        mx = max(mx*arr[i],(long long )arr[i]);
	        mi = min(mi*arr[i],(long long )arr[i]);
	        ans = max(ans,mx);
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
     long long int  ans = maxProduct(A,n1);
     
       cout<<"Maximum Product of the Subarray is "<<ans;
}
