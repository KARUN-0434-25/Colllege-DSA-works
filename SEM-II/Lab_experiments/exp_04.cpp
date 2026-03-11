//Write a C++ program to implement Selection Sort and compare its best, average, and worst case complexity.
#include <iostream>
using namespace std;

int main() {

    cout << "OUTPUT : " << endl;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted elements:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nTime Complexity:\n";
    cout << "Best Case: O(n^2)\n";
    cout << "Average Case: O(n^2)\n";
    cout << "Worst Case: O(n^2)\n";

    return 0;
}