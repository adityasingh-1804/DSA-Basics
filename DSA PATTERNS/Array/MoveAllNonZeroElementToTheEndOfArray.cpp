#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int j=-1;
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i = j+1; i < n; i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
       

    }
    for(int i = 0; i < n; i++){
    cout<< arr[i]<< " ";
    }
   

}