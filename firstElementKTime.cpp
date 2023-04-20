
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int firstElementKTime(int a[] , int n , int k){
	unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
            if(mp[a[i]] == k)
             return a[i];
        }
        return -1;
}

   
int main(){

	int n ,k;
	cin >> n >>k ;
	// vector<int>arr(n);
	int arr[n];


	for(int i =0 ; i<n ; i++){
		cin >> arr[i];
	}

	// vector<int> ans;
	int ans;

	ans = firstElementKTime(arr ,n ,k);
	cout << ans;

}



