
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(int arr[] ,int n){
	if(n == 1){
		return 1;
	}

	int res = 0;

	for(int i =0 ; i< n ; i++){
		res += arr[i];
	}

	int ls=0;

	for(int i =0 ; i< n ; i++){
		res -= arr[i];

		if(ls == res){
			return i+1;

		}
		ls += arr[i];
	} 

	return -1;
}
   

   
int main(){

	int n;
	cin >>n;
	int arr[n];

	for(int i =0 ; i< n ; i++){
		cin >> arr[i];
	}

	int ans = equilibriumPoint(arr ,n);

	cout << ans;

	

}



