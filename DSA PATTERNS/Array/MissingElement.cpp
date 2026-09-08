#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 5};
    int n = 5;

    int sum = n * (n + 1) / 2;
    int sum2 = 0;

    for(int i = 0; i < n - 1; i++) {
        sum2 = sum2 + arr[i];
    }

    cout << sum - sum2;

    
}