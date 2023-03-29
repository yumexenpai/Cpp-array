
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool findTriplets(int arr[], int n){

	int left,right;

	for(int i =0 ; i< n-2 ; i++){
		left = i +1;
		right = n-1;

		while(left < right){
			if(arr[i] + arr[left] + arr[right] == 0){
				return true;
			}
			else if( arr[i] + arr[left] + arr[right] < 0){
				left++;
			}
			else{
				right--;
			}
		}
	}

	return false;



}

   
int main(){

	int n ;
	cin >> n;

	// vector<int>ans(n);
	int arr[n];

	for(int i =0 ; i< n ; i++){
		cin >> arr[i];
	}

	int res =  findTriplets(arr ,n);

	if(res == true){
		cout << 1;
	}
	
	else{
		cout << 0;
	}
	

}



