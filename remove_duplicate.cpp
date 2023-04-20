
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int arr[] , int n){
	if(n==0){
		return 0;
	}

	int i =0;

	for(int j =1 ; j<n ; j++){
		if(arr[j] != arr[i]){
			i =i+1;
			arr[i]=arr[j];
		}
	}

	return i+1;
	
}
   
int main(){

	int n ;
	// int d;
	cin >> n;

	// vector<int>ans(n);
	int arr[n];

	for(int i =0 ; i< n ; i++){
		cin >> arr[i];
	}

	int ans = remove_duplicate(arr , n);

	cout << ans;
	

}



