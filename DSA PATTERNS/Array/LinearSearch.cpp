#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num;
    cout<<"enter the number";
    cin>> num;
    for(int i = 0; i < n; i++){
        if(arr[i]==num){
            cout<< i;

        }
    }

}