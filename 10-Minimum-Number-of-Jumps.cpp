#include <bits/stdc++.h>
using namespace std;
int minJumps(vector<int>nums, int n){
        int step= nums[0];
        int maxR = nums[0];
        int jump=1;
       
        for(int i=1;i<n;i++)
        {
             if(i==n-1 && step)
            {
                return jump;
            }
            maxR = max(maxR,i+nums[i]);
            step--;
            if(step<0)
            return -1;
           
            if(step==0)
            {
                jump++;
                if(i>maxR)
                {
                      return -1;
                } 
                  
                step = maxR-i;
            }
           
        }
        return 0;
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
	int jumps = minJumps(arr,n);
	cout<<"Minimum Number of Jumps to reach End\n"<<jumps;
}
