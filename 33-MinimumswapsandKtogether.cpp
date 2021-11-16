
#include <bits/stdc++.h>
using namespace std;
 
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
  int lower = 0;
   for (int i = 0; i < n; ++i)
   {
   if (arr[i] <= k)
   {
       lower++;
   }
 
   }
   int higher = 0;
   for (int i = 0; i < lower; ++i)
   {
   if (arr[i] > k)
   {
       higher++;
   }
   }
   
   int ans = higher;
   
   for (int i = 0, j = lower; j < n; i++, j++) {
   
   if (arr[i] > k)
   {
       higher--;
   }
 
   
   if (arr[j] > k)
   {
       higher++;
   }
   ans = min(ans, higher);
   }
   cout<<"Minimum number of swaps to bring k elements together "<<ans;
      
	
}
