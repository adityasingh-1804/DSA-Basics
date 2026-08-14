#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>> n;
    for(int i=0;i<n;i++){
        //spacing
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        //print
        for(int j=0; j<2*n-(2*i+1);j++){
            cout<<"*";

        }
       for(int j=0;j<0;j++){
            cout<<" ";

        }
        cout<< endl;

    }
}