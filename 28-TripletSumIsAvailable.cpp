
#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(vector<int>&A, int n, int X)
    {
        int ans=0;
        sort(A.begin(),A.end());
       for(int i=0;i<n-2;i++)
       {
           int l=i+1,h=n-1;
           while(l<h)
           {
               if(A[i]+A[l]+A[h]==X)
               {
                   return true;
               }
              else if(A[i]+A[l]+A[h]<X)
               {
                   l++;
                   
               }
               else
               {
                   h--;
               }
           }
         
       }
       return false;
    }
int main()
{
vector<int>A;

	int n1,n2,n3,a,k;
   cout<<"Enter number to find triplet sum ";
   cin>>k;
    cout<<"Enter the number of elements in array1"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
   
    if(find3Numbers(A,n1,k))
    cout<<"Yes ";
    else
    cout<<"No";
	cout << "There are 3 numbers sum in array ";
	
}
