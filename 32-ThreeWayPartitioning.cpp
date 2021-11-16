
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
vector<long long>array;

	int n1,n2,n3,a,k;
    cout<<"Enter the range a-b ";
    cin>>n2>>n3;
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		array.push_back(a);
	}
  
       int low=0,mid=0,high=n1-1;
        while(mid<=high)
       {
           if(n2>array[mid])
           {
               swap(array[mid],array[low]);
               mid++;
               low++;
           }
           else if(array[mid]>n3)
           {
               swap(array[mid],array[high]);
               high--;
           }
           else
               {
                  mid++; 
               }
       }
       cout<<"Array After Partitioning ";
       for(int i=0;i<n1;i++)
	{
		 cout<<array[i]<<" ";
	}
   
	
}
