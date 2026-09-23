#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,7,2,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        
            if(arr[i]+arr[j]==target){
                cout<< "true";
               return 0;
              
            }
             
        }
       
    }
    cout<< "false";
    return 0;
   
}
