
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>nums){
	int start = 0;
	int end = nums.size()-1;

	while(start < end){
		int mid = start +(end - start )/2;

		if(nums[mid] < nums[mid+1]){
			start = mid + 1;

		}
		else{
			end = mid;
		}
	}
	return start;
}

   
int main(){

	int n ;
	cin >> n;

	vector<int>ans(n);

	for(int i =0 ; i< n ; i++){
		cin >> ans[i];
	}

	int res = findPeakElement(ans);

	cout << res;
	

}



