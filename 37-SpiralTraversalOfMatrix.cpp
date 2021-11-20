
#include <bits/stdc++.h>
using namespace std;
 vector<int> spirallyTraverse(vector<vector<int> > &matrix, int r, int c) 
    {

       int top=0, left=0, right=c-1, bottom= r-1;
       vector<int> res;
       while (top <= bottom && left <= right)
       {
           for (int i=left; i<=right; i++)
           res.push_back(matrix[top][i]);
           top++;
           
           for (int i=top; i<=bottom; i++)
           res.push_back(matrix[i][right]);
           right--;
           
           if(top<=bottom){
               for (int i=right; i>=left; i--)
               res.push_back(matrix[bottom][i]);
               bottom--;
           }
           if(left<=right){
               for (int i= bottom; i>=top; i--)
               res.push_back(matrix[i][left]);
               left++;
           }
       }
       return res;
    }
int main()
{
      int r,c;
      cout<<"number of rows in matrix \n";
      cin>>r;
      cout<<"number of columns in matrix \n";
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
      
	cout<<"After the spiral traversal of matrix the value ";
    vector<int>answer=spirallyTraverse(matrix,r,c);
    for(auto x:answer)
    cout<<x<<" ";
}
