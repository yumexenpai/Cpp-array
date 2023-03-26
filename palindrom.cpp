// Given a Integer array A[] of n elements. Your task is 
// to complete the function PalinArray. Which will return 1 if
//  all the elements of the Array are palindrome otherwise it will 
//  return 0.
// Input:
// 5
// 111 222 333 444 555

// Output:
// 1
#include<iostream>
using namespace std;

int palindromeArray(int arr[] ,int n){
		for(int i =0 ; i< n ; i++){
			int temp = arr[i];

			int sum =0;

			while(temp > 0){
				int rem = temp%10;
				sum = (sum*10) + rem;
				temp = temp/10;
			}

			if(sum != arr[i]){
				return 0;
			}
		}
		return 1;
}

int main(){

	int n ;
	cin >> n;

	int arr[n];

	for(int i =0 ; i<n ; i++){
		cin >> arr[i];
	}

	int ans = palindromeArray(arr ,n);
	// return ans;

	cout  << ans;

	// return 0;
}

