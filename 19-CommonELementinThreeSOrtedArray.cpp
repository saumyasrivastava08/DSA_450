#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	vector<int>A;
    vector<int>B;
    vector<int>C;
	int n1,n2,n3,a;
    cout<<"No. of elements in array1"<<"\n";
	cin>>n1;
	
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
      cout<<"No. of elements in array2"<<"\n";
	cin>>n2;
	
	for(int i=0;i<n2;i++)
	{
		cin>>a;
		B.push_back(a);
	}
      cout<<"No. of elements in array3"<<"\n";
	cin>>n3;
	
	for(int i=0;i<n3;i++)
	{
		cin>>a;
		C.push_back(a);
	}
    int i=0,j=0,k=0,c=1;
            while(i<n1  && j<n2 && k<n3)
            {
                if(A[i]==B[j] && A[i]==C[k])
                 {
                      cout<<c<<" Common Element is "<<A[i]<<endl;
                      i++;
                      j++;
                      k++;
                      c++;
                 }
                 else if(A[i]<B[j])
                 {
                     i++;
                 }
                 else if(B[j]<C[k])
                   j++;
                 else 
                 k++;
                 while((i>0 && i<n1) && (A[i-1]==A[i]))i++;
                 while((j>0 && j<n2) && (B[j-1]==B[j]))j++;
                 while((k>0 && k<n3) && (C[k-1]==C[k]))k++;
                 
            }

}
