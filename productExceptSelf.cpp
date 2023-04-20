
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 vector<int> productExceptSelf(vector<int>& nums) {
       // brute force
/*
 	vector<int>output;
       int n = nums.size();
       for(int i =0 ; i<n ; i++){
           int maxi = 1;
           for(int j = 0 ; j<n ; j++){
               if(i != j){
                   maxi = maxi*nums[j];
               }
           }
           output.push_back(maxi);
       }
       return output;
*/
 	//better
 	/*
 	int n = nums.size();

 	vector<int> l(n),r(n);
 	l[0] = 1;
 	r[n-1] = 1;

 	for(int i = 1 ; i< n ; i++){
 		l[i] = l[i-1]*nums[i-1];
 	}
 	for(int i = n-2 ; i>=0 ; i--){
 		r[i] = r[i+1] * nums[i+1];
 	}
 	for(int i = 0 ; i<n ; i++){
 		nums[i] = l[i] * r[i];
 	}
 	return nums;
 	*/
 	// OPTIMAL

 	int n = nums.size();

 	vector<int>ans(n);
 	ans[0] =1;

 	for(int i =1 ; i< n ; i++){
 		ans[i] = ans[i-1] * nums[i-1];
 	}

 	int R =1;
 	for(int i = n-1 ; i>=0 ; i--){
 		ans[i] = ans[i] *R;
 		R = R*nums[i];
 	}

 	return ans;

 }
   
int main(){

	int n ;
	cin >> n ;
	vector<int>arr(n);


	for(int i =0 ; i<n ; i++){
		cin >> arr[i];
	}

	vector<int> ans;

	ans = productExceptSelf(arr);

	for(int i =0 ; i< n ; i++){
		cout << ans[i] <<" " ;
	}
	return 0;

}



