#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the array: ";
    for(int i=0;i<6;i++){
        cin>> arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<6;i++){
        for(int j = i;j<6;j++){
        
            if (arr[i]> largest){
                largest=arr[i];
            }

        
        }
       
        
    }
    cout<< "largest number is : ";
    cout<< largest;
     
}