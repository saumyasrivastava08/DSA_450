
#include <bits/stdc++.h>
using namespace std;

int smallestSubWithSum(vector<int>&arr, int n, int x)
{
    // Initialize current sum and minimum length
    int curr_sum = 0, min_len = n + 1;
 
    // Initialize starting and ending indexes
    int start = 0, end = 0;
    while (end < n) {
        // Keep adding array elements while current sum
        // is smaller than or equal to x
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];
 
        // If current sum becomes greater than x.
        while (curr_sum > x && start < n) {
            // Update minimum length if needed
            if (end - start < min_len)
                min_len = end - start;
 
            // remove starting elements
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
int main()
{
vector<int>arr;

	int n,n2,n3,a,k;
    cout<<"Enter the value of k ";
    cin>>k;
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
  
  cout<<"Smallest Subarray with sum greater than given value \n"<<smallestSubWithSum(arr,n,k);
      
	
}
