
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(vector<int>&arr, int n, int k) {
       sort(arr.begin(), arr.end());
       int res=arr[n-1]-arr[0];
       int large=arr[n-1]-k, small=arr[0]+k;
       int min_, max_;
       
       for(int i=0; i<n-1; i++){
           
               max_ = max(arr[i]+k,large);
               min_ = min(arr[i+1]-k,small);
               if(min_<0)
                   continue;
               else
                   res = min(res, max_-min_);
           
       }
       return res;
    }
int main()
{
vector<int>arr;

	int n,n2,n3,a,k;
    cout<<"Enter the value of k ";
    cin>>k;
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
  
  cout<<"Minimum Difference between the heights  \n"<< getMinDiff(arr,n,k);
      
	
}
