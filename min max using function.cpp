#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    int min = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    return min;
}

int findMax(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int arr[] = {7, 2, 9, 3, 5, 1, 8};  
    int size = sizeof(arr) / sizeof(arr[0]); 

    int min = findMin(arr, size); 
    int max = findMax(arr, size); 

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}