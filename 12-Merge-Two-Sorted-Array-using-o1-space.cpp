#include <bits/stdc++.h>
using namespace std;
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

int main()
{
	vector<int>arr1;
    vector<int>arr2;
	int n,m;
	cout<<"No. of elements in array one "<<"\n";
	cin>>n;
    cout<<"Enter the Elements \n";
    for(int i=0;i<n;i++)
	{
        int aa;
		cin>>aa;
		arr1.push_back(aa);
	}
    cout<<"No. of elements in array two "<<"\n";
	cin>>m;
	 for(int i=0;i<m;i++)
	{
        int bb;
		cin>>bb;
	    arr2.push_back(bb);
	}
     int i, j, gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
     for(int i=0;i<n;i++)
	{
	       cout<<arr1[i]<<" ";
	}
     for(int i=0;i<m;i++)
	{
	       cout<<arr2[i]<<" ";
	}
}
