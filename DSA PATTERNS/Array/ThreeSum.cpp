#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,4,-1,-7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(i!=j!=k){
               if(arr[i]+arr[j]+arr[k]==target){
                cout<< arr[i]<< endl << arr[j]<< endl << arr[k];
                break;
                return 0;
               }
              
               }
             
            }
               }

            }

        }
    


