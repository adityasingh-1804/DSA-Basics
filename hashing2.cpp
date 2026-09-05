#include<iostream>
using namespace std;

int main() {
    int arr[7] = {2, 1, 2, 3, 3 , 4, 5};
    char found = false;

    for(int i = 0; i < 7; i++) {
        for(int j = i + 1; j < 7; j++) {

            if(arr[i] == arr[j]) {
                cout << "Common element: " << arr[i] << endl;
                found = true;
            }
        }
    }

    if(found == false) {
        cout << "No element is common";
    }

    
}


