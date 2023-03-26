
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>arr, int n, long long k){
	
	if(k != 0){
		int i =0;
		int j =0;
		long long sum =0;
		while(j < arr.size()){
			sum += arr[j];
			
			if(sum > k){
				while(sum >k){
					sum = sum - arr[i];
					i++;
				}
			}
			if(sum == k){
				return {i+1 , j+1};
			}

			++j;
			
		}

	}
		return {-1};


}
   
int main(){

	int n ;
	long long k;
	cin >> n >> k ;


	vector<int >arr(n);
	const int mx = 1e9;



	for(int   i =0 ; i<n ; i++){
		cin >> arr[i];
	}

	vector<int> ans;

	ans = subarraySum(arr , n ,k);

	for(int i =0; i< ans.size() ; i++){
		cout << ans[i] << " ";
	}
	return 0;
}



