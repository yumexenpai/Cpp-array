
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<long long>& arr, int n, int k){
	for(int i = 0 ; i< n ; i+=k){
		int start = i;
		int end;

		if(i+k-1 < n-1){
			end = i +k-1;
		}
		else{
			end = n-1;
		}

		while(start < end){
			swap(arr[start], arr[end]);
			start++;
			end--;
		}

	}

}
int main(){

	int n , k ;
	cin >> n >> k;

	vector<long long > arr;


	for(long long  i =0 ; i<n ; i++){
		long long x;
		cin >> x;
		arr.push_back(x);
	}

	 reverseInGroups(arr ,n , k);
	
	for(long long  i =0 ; i< n ; i++){
			cout << arr[i] << " ";
	}

	// cout << ans;
	return 0;
}

