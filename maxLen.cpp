
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int>& arr , int n){

	unordered_map<int , int> map;

	int sum =0;
	int len =0;

	for(int i =0 ; i< n ; i++){
		sum += arr[i];
		if(sum == 0){
			len = i+1;
		}

		else{
			if(map.find(sum) != map.end()){
				len = max(len ,i - map[sum]);
			}
			else{
				map[sum] = i;
			}
		}
	}

	return len;

}
   
int main(){

	int n ;
	// int d;
	cin >> n;

	vector<int>ans(n);
	// int arr[n];

	for(int i =0 ; i< n ; i++){
		cin >> ans[i];
	}

	int res =  maxLen(ans ,n);

	cout << res;

}



