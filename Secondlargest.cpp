// Given an array Arr of size N, print second largest distinct element
 // from an array.

// Example 1:

// Input: 
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the 
// array is 35 and the second largest element
// is 34.
// Example 2:

// Input: 
// N = 3
// Arr[] = {10, 5, 10}
// Output: 5
// Explanation: The largest element of 
// the array is 10 and the second 
// largest element is 5.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int secondLargerst(int arr[] , int n){
	if(n ==1 || n ==0){
		return -1;
	}

	int largest = INT_MIN;
	int secondLargerst = INT_MIN;


	for(int i =0 ; i< n ; i++){
		largest = max(largest , arr[i]);

	}

	for(int i =0 ; i< n ; i++){
		if(arr[i] > secondLargerst && arr[i] != largest){
			secondLargerst = arr[i];
		}
	}
	if(secondLargerst != INT_MIN){
		return secondLargerst;
	}
	return -1;
}

int main(){

	int n ;
	cin >> n;

	int arr[n];

	for(int i =0 ; i<n ; i++){
		cin >> arr[i];
	}

	int ans =secondLargerst(arr  ,n );
	cout  << ans;

	// return 0;
}

