
#include <bits/stdc++.h>
using namespace std;
 vector<vector<int>> merge(vector<vector<int>>a) {
          sort(a.begin(),a.end());
        vector<vector<int>> ans;
        ans.push_back({a[0][0],a[0][1]});
        for(int i=1;i<a.size();i++)
        {
            int n = ans.size()-1;
            if(a[i][0]<=ans[n][1]){
                int Min = min(ans[n][0],a[i][0]);
                int Max = max(ans[n][1],a[i][1]);
                ans.pop_back();
                ans.push_back({Min,Max});
            }
            else
                ans.push_back({a[i][0],a[i][1]});
        }
        return ans;
    }
int main()
{
	vector<vector<int>>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
   
	for(int i=0;i<n;i++)
	{
		vector<int>a;
          int x,y;
          cout<<"Enter the starting and ending Time \n";
          cin>>x>>y;
          a.push_back(x);
           a.push_back(y);
           
		arr.push_back(a);

	}
    vector<vector<int>>answer = merge(arr) ;
for(int i=0;i<n;i++)
	{
            cout<<answer[i][0]<<" ";
              cout<<answer[i][1]<<" \n";
          

	}
}
