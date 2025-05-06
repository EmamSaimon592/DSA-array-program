#include<iostream>
using namespace std;
int main(){
   int arr[10], n,x,pos, i;
   cout<<"enter size of array: ";
   cin>>n;
   cout<<"Enter Array Element: ";
   for(i=0; i<n;i++){
       cin>>arr[i];
   }
   cout<<"enter the insertion location: ";
   cin>>pos;
   cout<<"enter the value to insert : ";
   cin>>x;
   for(int i = n-1; i>=pos -1; i--){  //i = n-1 = 5-1 =4;  4>= pos(3)-1{2}

      arr[i+1] = arr[i];  // arr[4+1= 5] = arr[4] mane holo 4 er index er element k 5 er index er shift korlam
                          // i--  arr[3+1= 4] = arr[3] mane holo 3 er index er element k 4 er index er shift korlam
                          //i--  arr[2+1= 3] = arr[2] mane holo 2 er index er element k 3 er index er shift korlam
   }

   arr[pos -1]= x;  // [pos - 1]= 3-1 = 2 index e new value add korchi 
   n++;  //new x value insert korle to array size 5 theke 6 hocche tai n++ korlam 
   for(int i=0; i<n;i++){
      cout<<arr[i]<<endl;
   }

	return 0;
}

// enter size of array: 5
// Enter Array Element: 5 10 20 25 30
// enter the insertion location: 3 => mane holo index 2 ---> 0 1 2
// enter the value to insert : 15
// 5
// 10
// 15
// 20
// 25
// 30
