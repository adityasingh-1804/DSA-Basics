#include<iostream>
using namespace std;
int main(){
    int arr[6]={15,5,8,2,10,15};
    int largest = arr[0];
    int slargest= -1;
    for(int i = 1; i<6; i++){
        if(arr[i]> largest){
            slargest = largest;
            largest = arr[i];

        }
    else if(arr[i]< largest && arr[i] > slargest ){
        slargest = arr[i];
    }
    
    }
cout<<"second largest is= "<< slargest<< endl;
cout<<" largest is= "<<largest;
}
