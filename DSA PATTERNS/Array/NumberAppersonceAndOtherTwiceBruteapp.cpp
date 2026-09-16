#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count =0;
    for(int i = 0; i < n; i++){
        int nums=arr[i];
        count = 0;
    for(int j = 0; j < n; j++ ){
        if(arr[j]==nums){
            count++;
        }
 
    }   
    if(count==1){
        cout<< nums;

    }
    }
   

    }
   

