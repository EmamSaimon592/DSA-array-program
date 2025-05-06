#include<iostream>
using namespace std;
int arr[10], n, x;
int BinarySearch(int low, int high){
   while(low<=high){   // step 3-6
   	 int mid = (low+high)/2;
   	 if(arr[mid] == x){
   	   return mid;	
   	 }
   	 else if(arr[mid]>x){
   	 high = mid-1;
   	 }
   	 else{
   	 	low = mid+1;
   	 }
   }
   return -1; // array te element present na thakle return -1 
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


int result = BinarySearch(0, n-1);  // fuction call kora hocche index 0 theke last , so 
									// so , you have 7 elements that means index [n-1 = 7-1 = 6]
									// tar mane 0  theke 6
if(result ==-1){
	cout<<"Element not found in array";
}
else{
	cout<<"Element found at index:"<<result;
}
	
	return 0;
}

// enter size of array: 7
// Enter Array Element in ascending order: 2 3 4 6 8 9 10
// enter a number to search in array:8
// Element found at index:4