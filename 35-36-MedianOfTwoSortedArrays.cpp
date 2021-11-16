
#include <bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(vector<int> nums1, vector<int>nums2) {
        if(nums2.size()<nums1.size())
            return findMedianSortedArrays(nums2,nums1);
        
        int l=0,h=nums1.size();
        while(l<=h){
        int c1= (l+h)/2;
        int c2=  (nums1.size()+nums2.size()+1)/2-c1 ;
         int l1 =  (c1==0) ? INT_MIN : nums1[c1-1]; 
         int l2 = (c2==0) ? INT_MIN  : nums2[c2-1];
            
          int r1 = (c1==nums1.size()) ? INT_MAX : nums1[c1] ;
          int r2 = (c2==nums2.size()) ? INT_MAX : nums2[c2] ;
            
            if(l1<=r2 && l2<=r1)
            {
                if((nums1.size()+nums2.size())%2==0)
                {
                    int k = max(l1,l2);
                    int kk = min(r1,r2);
                    return ((k+kk)/2.0);
                }
                else
                {
              
                    return (max(l1,l2));
                }
                    
            }
            else if(l1>r2)
            {
                h= c1-1;
            }
            else
                l=c1 + 1;
        }
        return 0.0;
    }
int main()
{
vector<int>arr,brr;

	int n1,n2,n3,a,k;
  
    cout<<"Enter the number of elements in array1"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		arr.push_back(a);
	}
   cout<<"Enter the number of elements in array2"<<"\n";
	cin>>n2;
	for(int i=0;i<n2;i++)
	{
		cin>>a;
		brr.push_back(a);
	}
      
	cout<<"Median of Two Sorted Arrays is "<<findMedianSortedArrays(arr,brr);
}
