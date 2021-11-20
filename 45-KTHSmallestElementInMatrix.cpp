#include <bits/stdc++.h>
using namespace std;

int kthsmallest(vector<vector<int>> &mat,int n,int k)
{
 priority_queue<int,vector<int>,greater<int>>pq;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
              pq.push(mat[i][j]);
           }
       }
       while(k>1)
       {
           pq.pop();
           k--;
       }
       return pq.top();
}
int main()
{
	int r;
      cout<<"number of rows & cols in matrix \n";
      cin>>r;
  
      
     vector<vector<int>>mat;
     for(int i=0;i<r;i++)
     {
         vector<int>m;
         for(int j=0;j<r;j++)
         {
             int a;
             cin>>a;
             m.push_back(a);
         }
         mat.push_back(m);
     }
   cout<<"Enter the Kth Smallest element ";
   int k;
   cin>>k;
	int ans = kthsmallest(mat,r,k);
    cout<<"The kth smallest element in the given matrix is \n"<<ans;
}
