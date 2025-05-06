//array short korar jonno syntax:
// for(i){
//    for(j){
//       if(compair both array i & j){

//       }
//    }
// }



//assending order 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
   int arr[10], n, i, temp;
   cout<<"enter size of array: ";
   cin>>n;
   cout<<"Enter Array Element: ";
   for(i=0; i<n;i++){
       cin>>arr[i];
   }

   for(int i = 0; i<n; i++){
   	 for(int j=i+1; j<n; j++){    // here j = i+1 ata use kora hoije j array er index 0 and i er compair korar jonno
   	 	if(arr[i]>arr[j]){        // index 0--> index 1, 2 ,3,4    // index 1--> index 0, 2 ,3,4 //index 2--> index 0,1,3,4 ......
                                   // ai rokom compair korbe
   	 		temp = arr[i];
   	 		arr[i] = arr[j];
   	 		arr[j] = temp;
   	 	}
   	 }
   }
   cout<<"shorted array with accending order : "<<endl;
   for(int i = 0; i<n; i++){
   	cout <<arr[i]<<endl;
   }

	return 0;
}

//desending order  5 4 3 2 1

#include<iostream>
using namespace std;
int main(){
   int arr[10], n, i, temp;
   cout<<"enter size of array: ";
   cin>>n;
   cout<<"Enter Array Element: ";
   for(i=0; i<n;i++){
       cin>>arr[i];
   }

   for(int i = 0; i<n; i++){
   	 for(int j=i+1; j<n; j++){
   	 	if(arr[i]<arr[j]){
   	 		temp = arr[i];
   	 		arr[i] = arr[j];
   	 		arr[j] = temp;
   	 	}
   	 }
   }
   cout<<"shorted array with decending order : "<<endl;
   for(int i = 0; i<n; i++){
   	cout <<arr[i]<<endl;
   }

	return 0;
}