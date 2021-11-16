
#include <bits/stdc++.h>
using namespace std;
 long long int merge (long long  arr[],long long temp[],long long l,long long mid, long long r)
   {
       long long  start=l;
       long long  count=0;
       long long j=mid+1,k=l;
       while(  (l<=mid) &&   (r>=j) )
       {
           if(arr[l]<=arr[j])temp[k++]=arr[l++];
           else
           {  count+=  mid+1-l;
              temp[k++]=arr[j++];
           }
       }
       while(l<=mid)temp[k++]=arr[l++];
       while(j<=r)temp[k++]=arr[j++];
       
       for(long long p=start;p<=r;p++)arr[p]=temp[p];
         return count;
   }

long long int mergesort(long long  arr[],long long  temp[],long long  l,long long  r)
  {
      long long  count=0,mid;
      if(l<r)
      {
          long long mid=(l+r)/2;
          count += mergesort( arr,temp, l, mid);
          count += mergesort(arr,temp, mid+1, r);
          count += merge ( arr,temp,l, mid, r);
      }
      return count;
  }
    long long int inversionCount(long long arr[], long long N)
    {
       
          long long  temp[N];
      return mergesort(arr,temp,0,N-1 );
    }

int main()
{
    

	int n,n2,n3,a,k;
     
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n;
     long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
  
  cout<<"Number of inversion counts  \n"<< inversionCount(arr,n);
      
	
}
