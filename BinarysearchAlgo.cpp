// N = 5
// arr[] = {1 2 3 4 5} 
// K = 4
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int BinarySearchAlgo(int arr[] , int n , int k){
	int start = 0 ; 
	int end = n-1;

	while(start <= end){
		int mid = start + (end -start) /2;

		if(arr[mid] == k){
			return mid;
		}
		else if(arr[mid] > k){
			end = mid - 1;
		}
		else{
			start = mid +1;
		}
	}
	return -1;
}

int main(){

	int n , k ;
	cin >> n >> k;

	int arr[n];

	for(int i =0 ; i<n ; i++){
		cin >> arr[i];
	}

	int ans = BinarySearchAlgo(arr ,n , k);
	

	cout << ans;
	// return 0;
}

