// C++ program to find maximum
// possible profit with at most
// two transactions
#include <bits/stdc++.h>
using namespace std;

// Returns maximum profit with
// two transactions on a given
// list of stock prices, price[0..n-1]
int maxProfit(vector<int>price, int n)
{
	// Create profit array and
	// initialize it as 0
	int* profit = new int[n];
	for (int i = 0; i < n; i++)
		profit[i] = 0;

	/* Get the maximum profit with
	only one transaction
	allowed. After this loop,
	profit[i] contains maximum
	profit from price[i..n-1]
	using at most one trans. */
	int max_price = price[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		// max_price has maximum
		// of price[i..n-1]
		if (price[i] > max_price)
			max_price = price[i];

		// we can get profit[i] by taking maximum of:
		// a) previous maximum, i.e., profit[i+1]
		// b) profit by buying at price[i] and selling at
		// max_price
		profit[i]
			= max(profit[i + 1], max_price - price[i]);
	}

	/* Get the maximum profit with two transactions allowed
	After this loop, profit[n-1] contains the result */
	int min_price = price[0];
	for (int i = 1; i < n; i++) {
		// min_price is minimum price in price[0..i]
		if (price[i] < min_price)
			min_price = price[i];

		// Maximum profit is maximum of:
		// a) previous maximum, i.e., profit[i-1]
		// b) (Buy, Sell) at (min_price, price[i]) and add
		// profit of other trans. stored in profit[i]
		profit[i] = max(profit[i - 1],
						profit[i] + (price[i] - min_price));
	}
	int result = profit[n - 1];

	
	return result;
}
int maxProfiit(int price[], int n)  //Method2
{
 
    // buy1 - Money lent to buy 1 stock
    // profit1 - Profit after selling
    // the 1st stock buyed.
    // buy2 - Money lent to buy 2 stocks
    // including profit of selling 1st stock
    // profit2 - Profit after selling 2 stocks
    int buy1, profit1, buy2, profit2;
 
    // Set initial buying values to
    // INT_MAX as we want to minimize it
    buy1 = buy2 = INT_MAX;
 
    // Set initial selling values to
    // zero as we want to maximize it
    profit1 = profit2 = 0;
 
    for (int i = 0; i < n; i++) {
 
        // Money lent to buy the stock
        // should be minimum as possible.
        // buy1 tracks the minimum possible
        // stock to buy from 0 to i-1.
        buy1 = min(buy1, price[i]);
 
        // Profit after selling a stock
        // should be maximum as possible.
        // profit1 tracks maximum possible
        // profit we can make from 0 to i-1.
        profit1 = max(profit1, price[i] - buy1);
 
        // Now for buying the 2nd stock,
        // we will integrate profit made
        // from selling the 1st stock
        buy2 = min(buy2, price[i] - profit1);
 
        // Profit after selling a 2 stocks
        // should be maximum as possible.
        // profit2 tracks maximum possible
        // profit we can make from 0 to i-1.
        profit2 = max(profit2, price[i] - buy2);
    }
 
    return profit2;
}
int main()
{
vector<int>A;
   
	int n1,n2,n3,a,k;
   
    cout<<"Enter the number of elements in array"<<"\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		A.push_back(a);
	}
	cout << "Maximum Profit = " << maxProfit(A, n1);
	return 0;
}
