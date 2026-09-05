#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    for(int i = 0; i < n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
}