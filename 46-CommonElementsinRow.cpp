#include <bits/stdc++.h>
using namespace std;
void printCommonElements(vector<vector<int>>&mat , int M , int N)
{
    unordered_map<int, int> mp;
 
    // initialize 1st row elements with value 1
    for (int j = 0; j < N; j++)
        mp[mat[0][j]] = 1;
 
    // traverse the matrix
    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // If element is present in the map and
            // is not duplicated in current row.
            if (mp[mat[i][j]] == i)
            {
               // we increment count of the element
               // in map by 1
                mp[mat[i][j]] = i + 1;
 
                // If this is last row
                if (i==M-1 && mp[mat[i][j]]==M)
                  cout << mat[i][j] << " ";
            }
        }
    }
}
 
int main()
{
	int r;
      cout<<"number of rows  in matrix \n";
      cin>>r;
    int c;
      cout<<"number  cols in matrix \n";
      cin>>c;
      
     vector<vector<int>>mat;
     for(int i=0;i<r;i++)
     {
         vector<int>m;
         for(int j=0;j<c;j++)
         {
             int a;
             cin>>a;
             m.push_back(a);
         }
         mat.push_back(m);
     }
     cout<<"Common Elements in the every row are \n";
   printCommonElements(mat,r,c);
}
