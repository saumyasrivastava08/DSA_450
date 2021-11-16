#include <bits/stdc++.h>
using namespace std;
 
vector<int> factorial(int N){
      vector<int> res;
       res.push_back(1);
       for(int x=2;x<=N;x++)
       {
           int car=0;
           for(int i=0;i<res.size();i++){
               int val=res[i]*x+car;
               res[i]=val%10;
               car=val/10;
           }
           while(car!=0)
           {
               res.push_back(car%10);
               car/=10;
           }
       }
       reverse(res.begin(),res.end());
       return res;
 
    }
int main()
{
	vector<int>A;
   
	int n1,n2,n3,a;
    cout<<"Enter the number whose factorial is to find "<<"\n";
	cin>>n1;
	
     vector<int>ans = factorial(n1);
     for(auto x:ans)
       cout<<x;
}
