
#include <bits/stdc++.h>
using namespace std;

 int doUnion(vector<int>a, int n, vector<int>b, int m)  {
       
       unordered_set<int> set;
       for(int i =0;i <n;i++)
       {
           set.insert(a[i]);
       }
       for(int i=0;i<m;i++)
       {
           set.insert(b[i]);
       }
       
       return set.size();
    }
int main()
{
vector<int>arr,brr;

	int n,n2,n3,a,k;
    
    cout<<"Enter the number of elements in array1"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
   cout<<"Enter the number of elements in array2 "<<"\n";
	cin>>n2;
	for(int i=0;i<n2;i++)
	{
		cin>>a;
		brr.push_back(a);
	}
  cout<<"Number of elements after the union of two arrays \n"<<doUnion(arr,n,brr,n2);
      
	
}
