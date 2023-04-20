
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>& nums , int num){

	for(int i = 0 ; i< nums.size() ; i++){
		if(nums[i] == num){
			return true;
		}
	}
	return false;
}


int longestConsecutive(vector<int>& nums){
	// brute force 
	int n = nums.size();
	int longest = 1 ;
	
	for(int i =0 ; i< n ; i++){
		int x = nums[i];
		int count = 1;
		while(linearSearch(nums , x+1) == true){
			x = x +1 ; 
			count++;
		}

		longest = max(longest , count);
	}
	return longest;
}


int main(){

	int n ;
	cin >> n  ;
	vector<int>arr(n);
	// int arr[n];


	for(int i =0 ; i<n ; i++){
		cin >> arr[i];
	}

	// vector<int> ans;
	int ans;

	ans = longestConsecutive(arr);
	cout << ans;

}



