#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,3,4,4,4,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[10]={};
    int j=0;
    for(int i = 0; i<n;i++){
        if(i==0 || arr[i]!=arr[i+1]){
            temp[j]=arr[i];
           
            j++;


        }
        for( i = 0; i < j; i++  )
    
        cout<< temp[i]<< " ";
      
      
    }
      cout<< j<< endl;
      
}