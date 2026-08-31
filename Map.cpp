#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>> arr[i];

    }
    map<int, int>mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;

    }
    int q;
    cout<<"enter the queries";
    
    cin>> q;
    while(q--){
        int number;
        cin>> number;
        cout<< mpp[number]<< endl;
    }
}