#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,3,4,5,6,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,3,3,5,6,6,7};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int i=0;
    int j=0;
    while(i<n && i<m){
        if(arr1[i]==arr2[j]){
            cout<< arr1[i]<< " ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }


}


