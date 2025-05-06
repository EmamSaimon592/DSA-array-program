#include<iostream>
using namespace std;
int main(){
   int arr[10], n,x;
   cout<<"enter size of array: ";
   cin>>n;
   cout<<"Enter Array Element: ";
   for(int i=0; i<n;i++){
       cin>>arr[i];
   }
   cout<<"enter the element at the beginning:";
   
   cin>>x;
   
   for(int i=n; i>0; i--){
       arr[i] = arr[i-1];
   }
   
   arr[0] = x;
   n++;
   cout<<"array elements are: ";
   for(int i =0 ; i<n; i++){
    cout<<arr[i]<<endl;
   }
   
 return 0;   
}

// enter size of array: 5 
// Enter Array Element: 5 8 2 7 1
// enter the element at the beginning:10
// array elements are:
// 10
// 5
// 8
// 2
// 7
// 1