
#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int i=0, j=m-1, count=0, maxcount=INT_MIN, res=-1;
    while(i<n && j>=0){
        if(arr[i][j] == 1){
            count++;
            j--;
            res=i;
        }
        else if(arr[i][j]==0){
          
            i++;
        }
    }
    return res;
	}
int main()
{
      int r,c,k;
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
    cout<<"Row With Maximum Number of Ones "<<rowWithMax1s(matrix,r,c);

}
