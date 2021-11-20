
#include <bits/stdc++.h>
using namespace std;
int median(vector<vector<int>> &matrix, int r, int c){
      int min = matrix[0][0];
    int max = matrix[0][c-1];
    
     for(int i=0;i<r;i++){
            if(matrix[i][0]<min)    min=matrix[i][0];
            if(matrix[i][c-1]>max)  max=matrix[i][c-1];
        }
        int desired_count = (r*c+1)/2;
      while(min<max)
    {
        int counter=0;
        int mid = (max+min)/2;
        for(int i= 0;i<r;i++)
        {
            counter += upper_bound(matrix[i].begin(), matrix[i].begin()+c, mid) -  matrix[i].begin();
        }
        if(counter < desired_count)
            min = mid+1;
        else
            max = mid;
    }
    return min;
    }
int main()
{
      int r,c,k;
      cout<<"number of rows in matrix \n";
      cin>>r;
      cout<<"number of coulums in matrix \n";
      cin>>c;
      
     vector<vector<int>>matrix;
     for(int i=0;i<r;i++)
     {
         vector<int>m;
         for(int j=0;j<c;j++)
         {
             int a;
             cin>>a;
             m.push_back(a);
         }
         matrix.push_back(m);
     }
   cout<<"Median in a  sorted matrix is\n";
   int ans = median(matrix,r,c);
   cout<<ans;
  
}
