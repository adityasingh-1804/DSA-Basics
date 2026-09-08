#include<iostream>
using namespace std;
int main(){
int val;
cout<< "Enter the Value of to remove from the array";
cin>> val;
int arr[]={1,2,2,4,3,6,8,9};
int n = sizeof(arr)/sizeof(arr[0]);
int temp;
for(int i = 0; i < n; i++){
     if(arr[i]==val){
       arr[i]=arr[n-1];
       n--;i--;
    }
   
}
 for(int i = 0; i < n; i++){
        cout<< arr[i]<< " ";
    }

}
   
    
    



