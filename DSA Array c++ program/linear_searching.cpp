#include<iostream>
using namespace std;
int main(){
	 int arr[10], n, i, x;
   cout<<"enter size of array: ";
   cin>>n;
   cout<<"Enter Array Element: ";
   for(i=0; i<n;i++){
       cin>>arr[i];
   }
   
    cout<<"Enter a number to search in array:";
    cin>>x;
    for(int i = 0; i<n; i++){
   		if(arr[i] == x){
   			cout<<"Element found at index : "<<i;
   			break;  //break use korle jodi element khuje pai tahole for loop theke bahir hoi jabo
   		}
    }
  // tumi j element k search korteso , ata jodi array er modde na 
  // thake tahole
    if(i==n){
    	cout<<"Element is not found";
    }

	return 0;
}