#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr;
	int n,a;
	cout<<"No. of elements in array"<<"\n";
	cin>>n;
    int k;
    cout<<"Kth smallest element\n";
    cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
	
	priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);     
        if(pq.size()>k)
          {
              pq.pop();
          }
    }
	cout<<"Kth Smallest Element is "<<pq.top()<<"\n";

}
