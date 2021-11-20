
#include <bits/stdc++.h>
using namespace std;
 vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
      vector<int>v;
        //store in vector
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                v.push_back(Mat[i][j]);
            }
        }
        //sort with vector
        sort(v.begin(),v.end());
        int index = 0;
        
        //populate the matrix
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                Mat[i][j] = v[index];
                index++;
            }
        }
        
        return Mat;
    }
int main()
{
      int r,c,k;
      cout<<"number of rows & colmuns in matrix \n";
      cin>>r;
     
      
     vector<vector<int>>matrix;
     for(int i=0;i<r;i++)
     {
         vector<int>m;
         for(int j=0;j<r;j++)
         {
             int a;
             cin>>a;
             m.push_back(a);
         }
         matrix.push_back(m);
     }
   cout<<"After  Sorting The matrix is \n";
         matrix=sortedMatrix(r,matrix);
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<r;j++)
         cout<<matrix[i][j]<<" ";
         cout<<"\n";
   }
}
