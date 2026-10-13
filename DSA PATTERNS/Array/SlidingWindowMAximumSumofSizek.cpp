#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={100,200,300,400};
    int k =2;
    int n = sizeof(arr)/sizeof(arr[0]);
    int res=0;
    int sum = 0;
    int low = 0;
    int high = k-1;
    for(int i = low; i <= high; i++){
        sum = sum + arr[i];
    }
    while(high<n){
        res = max(res,sum);
        low++;
        high++;
        if(high==n){
            break;
        }
        else{
        sum = sum - arr[low-1];
        sum = sum + arr[high];
        }
    }

    
    cout<< res<< endl;
}