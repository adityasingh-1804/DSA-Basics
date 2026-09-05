#include<iostream>
using namespace std;
int main(){
    int arr[4]={2,7,11,15};
    int target = 9;
    for(int i = 0; i<4 ; i++){
        if(arr[i]+arr[i+1]==target){
            cout<< arr[i]<< endl;
            cout<< arr[i+1];
        }
    }

}