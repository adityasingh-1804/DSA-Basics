#include <iostream>
using namespace std;

int main() {
   int arr[9]={1,1,1,2,2,3,3,3,3};
   int i=0;
   for(int j = 1; j<9;j++){
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }
}
    cout<<"Array after sorting";
    for(int j = 0;i<=i;j++){
        cout<<arr[j]<<" ";
    }
return 0;
   
   
}