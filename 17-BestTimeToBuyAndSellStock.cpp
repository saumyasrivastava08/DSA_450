#include <bits/stdc++.h>
using namespace std;
  int maxProfit(vector<int>& prices) {
        int m=0;
        int mi=INT_MAX;
          for(auto x:prices)
          {
              if(x<mi)
                  mi=x;
             if(x-mi>m)
              {
                  m= max(m,x-mi);
              }
          }
        return m;
        
    }
int main()
{
	vector<int>nums;
	int n,a,k;
    cout<<"No. of elements in array"<<"\n";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a;
		nums.push_back(a);
	}
int ans= maxProfit(nums);
cout<<"Maximum Profit from the transaction "<<ans;
}
