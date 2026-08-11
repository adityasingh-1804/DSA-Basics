#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the value ";
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the values in array";
       cin >>  arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=hash[arr[i]]+1;
    }
    int q;
    cout<<"enter the number queries";
    cin>> q;
    while(q--){
        int numbers;
        cout<<"enter the number";
        cin>> numbers;
        
        cout<< hash[numbers]<<" times this number is" << endl;
    }


      



}
