
#include <bits/stdc++.h>
using namespace std;
 long long trappingWater(vector<int>arr, int n){
        
        long long l=0,r=n-1;
       long long maxl=0,maxr=0;
       long long ans=0;
       while(l<=r)
       {
           if(arr[l]<=arr[r])
           {
               if(arr[l]>=maxl)
               maxl=arr[l];
               else
               ans+=maxl-arr[l];
               l++;
           }
           else
           {
               if(arr[r]>=maxr)
               maxr=arr[r];
               else
               ans+=maxr-arr[r];
               r--;
           }
       }
       return ans;
    }
int main()
{
vector<int>A;

	int n1,n2,n3,a,k;
  
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
   cout<<"Maximum Water that can be trapped is "<<trappingWater(A,n1);
   
	
}
