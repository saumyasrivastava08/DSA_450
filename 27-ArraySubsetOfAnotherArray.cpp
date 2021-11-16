
#include <bits/stdc++.h>
using namespace std;
bool isSubset(vector<int>a1, vector<int>a2, int n, int m) {
     unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        mp[a1[i]]++;
    }
    for(int i = 0;i<m;i++){
        if(mp.find(a2[i])==mp.end())
            return "No";
    }
    return "Yes";
}

int main()
{
vector<int>A;
   vector<int>B;
	int n1,n2,n3,a,k;
   
    cout<<"Enter the number of elements in array1"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
     cout<<"Enter the number of elements in array2 "<<"\n";
	cin>>n2;
	for(int i=0;i<n2;i++)
	{
		cin>>k;
		B.push_back(k);
	}
    if(isSubset(A,B,n1,n2))
    cout<<"Yes ";
    else
    cout<<"No";
	cout << "Array 2 is subset of array1 ";
	return 0;
}
