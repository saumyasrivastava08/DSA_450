
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row_num = matrix.size();
	int col_num = matrix[0].size();
	
	int begin = 0, end = row_num * col_num - 1;
	
	while(begin <= end){
		int mid = (begin + end) / 2;
		int mid_value = matrix[mid/col_num][mid%col_num];
		
		if( mid_value == target){
			return true;
		
		}else if(mid_value < target){
			
			begin = mid+1;
		}else{
			end = mid-1;
		}
	}
	
	return false;
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
      cout<<"enter value to find in the matrix \n";
      cin>>k;
      if(searchMatrix(matrix,k))
      cout<<"Yes it is present";
      else
      cout<<"Not Present";

}
