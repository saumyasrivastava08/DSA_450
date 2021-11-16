// C++ code to find elements whose
// frequency yis more than n/k
#include<bits/stdc++.h>
using namespace std;

void morethanNbyK(vector<int>arr, int n, int k)
{
	int x = n / k;
	
	// unordered_map initialization
	unordered_map<int, int> freq;

	for(int i = 0; i < n; i++)
	{
		freq[arr[i]]++;
	}
	
	// Traversing the map
	for(auto i : freq)
	{
		
		// Checking if value of a key-value pair
		// is greater than x (where x=n/k)
		if (i.second > x)
		{
			
			// Print the key of whose value
			// is greater than x
			cout << i.first << endl;
		}
	}
}

int main()
{
	vector<int>A;
   
	int n1,n2,n3,a,k;
    cout<<"Enter the value of k \n";
    cin>>k;
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
	
	morethanNbyK(A, n1, k);

}


