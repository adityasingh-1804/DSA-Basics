#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    for(int i = 1; i < 5; i++) {
        if(arr[i-1] > arr[i]) {
            cout << "array is not sorted";
            return 0;
        }
    }

    cout << "array is sorted";
}