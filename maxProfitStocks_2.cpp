
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfitStocks_2(vector<int>& prices){
	int totalProfit = 0;

	int buy =0 ; 
	int sell =0;

	for(int i =0 ; i< prices.size()-1 ; i++){
			if(prices[i+1] > prices[i]){
				sell++;

			}
			else{
				if(sell > buy){
					totalProfit += prices[sell] - prices[buy];
				}

				buy= i+1;
				sell =i+1;
			}

	}
	if(sell > buy){
		totalProfit += prices[sell] - prices[buy];
	}

	return totalProfit;
	
	
}

   
int main(){

	int n ;
	cin >> n;

	vector<int>ans(n);

	for(int i =0 ; i< n ; i++){
		cin >> ans[i];
	}

	int res = maxProfitStocks_2 (ans);

	cout << res;
	

}



