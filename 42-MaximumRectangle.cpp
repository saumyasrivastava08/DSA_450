
#include <bits/stdc++.h>
using namespace std;

int mxarea(vector<int>v){
       stack<int>s_l;
       vector<int>l;
       int mx=0;
       for(int i=0;i<v.size();i++){
           while(!s_l.empty() && v[s_l.top()]>=v[i]) s_l.pop();
           if(s_l.empty()) l.push_back(-1);
           else l.push_back(s_l.top());
           s_l.push(i);
       }
       stack<int>s_r;
       vector<int>r;
       for(int i=v.size()-1;i>=0;i--){
           while(!s_r.empty() && v[s_r.top()]>=v[i]) s_r.pop();
           if(s_r.empty()) r.push_back(v.size());
           else r.push_back(s_r.top());
           s_r.push(i);
       }
       reverse(r.begin(),r.end());
       for(int i=0;i<v.size();i++){
           mx=max((r[i]-l[i]-1)*v[i],mx);
       }
       return mx;
   }
    int maxArea(vector<vector<int>>&matrix, int n, int m) {
        int mx=0;
       vector<int>v(m); 
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
           if(matrix[i][j]){
               v[j]++;
           }
           else v[j]=0;
           }
           mx=max(mxarea(v),mx);
       }
       return mx;
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
    cout<<"Maximum Area of Rectangle in Binary Matrix is \n";
    int ans = maxArea(matrix,r,c);
    cout<<ans;

}
