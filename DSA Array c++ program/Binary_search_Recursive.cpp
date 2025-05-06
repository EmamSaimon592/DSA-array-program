#include<iostream>
using namespace std;

int arr[10], n, x;
int BinarySearch(int low, int high){
	if(low>high){
		return -1;
	}
	else{
		int mid = (low+high)/2;
		   if(arr[mid] == x){
		   	   return mid;	
		   	 }
		   	else if(){
		   	 	return BinarySearch (low, mid-1);
		   	 }
		   	else{
		   	 	return BinarySearch (mid+1, high);
		   	 }
	}

}
int main(){

 cout<<"enter size of array: ";
 cin>>n;
 cout<<"Enter Array Element in ascending order:";
 for(int i = 0; i<n; i++){
 	cin>>arr[i];
 }
 cout<<"enter a number to search in array:";
 cin>>x;
 int result = BinarySearch(0, n-1); 
 if(result ==-1){
	cout<<"Element not found in array";
}
else{
	cout<<"Element found at index:"<<result;
}



	return 0;
}