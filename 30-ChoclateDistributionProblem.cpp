
#include <bits/stdc++.h>
using namespace std;
 long long findMinDiff(vector<long long> a, long long n, long long m){
  
          sort(a.begin(),a.end());
          if(n<m)
          return -1;
          int midif=INT_MAX;
          for(int i=0;i+m-1<n;i++)
          {
              int d = a[i+m-1]-a[i];
              midif= min(midif,d);
          }
          return midif;
    }  
int main()
{
vector<long long>A;

	int n1,n2,n3,a,k;
    cout<<"Enter number of students ";
    cin>>k;
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
   cout<<"Minimum difference is "<<findMinDiff(A,n1,k);
   
	
}
