#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>nums;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		nums.push_back(a);
	}
	int i = nums.size() - 2;
        while (i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }
        if (i >= 0) {
            int j = nums.size() - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin()+i+1, nums.end());
        for(int i=0;i<n;i++)
	{
		  cout<<nums[i]<<" ";
	}
}
