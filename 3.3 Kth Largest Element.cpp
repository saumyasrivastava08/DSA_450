#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
    int k;
    cout<<"Kth Largest element\n";
    cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	
   priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0;i<k;i++)
            pq.push(nums[i]);
        for(int i=k;i<nums.size();i++)
        {
            if(pq.top()<nums[i])
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
	cout<<"Kth Largest Element is "<<pq.top()<<"\n";

}
