
#include <bits/stdc++.h>
using namespace std;
  int findDuplicate(vector<int>nums) {
        map<int ,int>m;
        for(int i=0;i<nums.size();i++)
        {
                 m[nums[i]]++;
        
        }
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            
            if(it->second>1)
                return it->first;
        }
        
        return -1;
    }
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	int dp = findDuplicate(arr);
	cout<<"Duplicate Number in the array is\n"<<dp;
}
