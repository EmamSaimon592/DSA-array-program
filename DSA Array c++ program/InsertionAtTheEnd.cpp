#include<iostream>
using namespace std;
int main(){
   int arr[10], n,x, i;
   cout<<"enter size of array: ";
   cin>>n;
   cout<<"Enter Array Element: ";
   for(i=0; i<n;i++){
       cin>>arr[i];
   }
   cout<<"enter the element at the end:";
   cin>>x;

   // After the previous loop, i will be equal to n.
   // This line assigns the value of x to the n-th position in the array 
   // (which is effectively the end of the array).
    arr[i] =x;  

   // n++ =>Increments the size of the array n by 1 to account for the new element added at the end. 
   n++;
   for(int i =0; i<n; i++){
   	cout<<arr[i]<<endl;
   }

	return 0;
}

// enter size of array: 5
// Enter Array Element: 5 8 2 7 1 
// enter the element at the end:10
// 5
// 8
// 2
// 7
// 1
// 10


//another example with Vector STL
#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> arr;
   int n, x;

   cout << "enter size of array: ";
   cin >> n;

   cout << "Enter Array Element: ";
   for(int i = 0; i < n; i++){
       cin >> x;
       arr.push_back(x);
   }

   cout << "enter the element at the end:";
   cin >> x;
   arr.push_back(x);

   for(int i = 0; i < arr.size(); i++){
       cout << arr[i] << endl;
   }

   return 0;
}