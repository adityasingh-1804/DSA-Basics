#include<iostream>
using namespace std;
int main(){
    int digit[]={1,4,9};
    int n = sizeof(digit)/sizeof(digit[0]);
    if(digit[n-1]!=9){
        digit[n-1]++;

    }
    else {
        digit[n-2]++;
        digit[n-1]=0;

    }
    for(int i = 0; i < n; i++){
        cout<<digit[i]<< " ";
    }

    }
