// Dutch National flag algo
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 void sort012(int arr[], int n){
 		int low = 0 ; 
 		int high = n-1;
 		int mid =0;
 		int temp ;

 		while(mid <=high){
 			switch(arr[mid]){
 				case 0:{
 					temp = arr[low];
 					arr[low] = arr[mid];
 					arr[mid] = temp;
 					low++;
 					mid++;
 					break;
 				}
 				case 1:{
 					mid++;
 					break;
 				}
 				case 2 :{
 					temp = arr[mid];
 					arr[mid] = arr[high];
 					arr[high] = temp;
 					high--;
 					break;
 				}
 			}
 		}


 }
   

   
int main(){

	int n;
	cin >>n;
	int arr[n];

	for(int i =0 ; i< n ; i++){
		cin >> arr[i];
	}

	sort012(arr , n);

	for(int i =0 ; i <n ; i++){
		cout << arr[i] << " ";
	}

}



