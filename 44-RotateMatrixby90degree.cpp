#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>mat,int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}
}
void rotate90clockwise(vector<vector<int>> &mat,int n)
{
	// Transpose of matrix
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			swap(mat[i][j], mat[j][i]);
	// Reverse individual rows
	for (int i = 0; i < n; i++) {
		int low = 0, high = n - 1;
		while (low < high) {
			swap(mat[i][low], mat[i][high]);
			low++;
			high--;
		}
	}
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

	rotate90clockwise(mat,r);
	print(mat,r);
}
