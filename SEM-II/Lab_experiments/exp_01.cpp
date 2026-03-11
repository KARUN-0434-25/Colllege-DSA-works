//Write a C++ program to perform Linear Search on a given list of elements and display whether the element is found or not along with its position.
#include <iostream>
using namespace std;

int main() {

    cout << "OUTPUT : " << endl;


    int n, key, pos = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Element found at position: " << pos + 1;
    else
        cout << "Element not found";

    return 0;
}