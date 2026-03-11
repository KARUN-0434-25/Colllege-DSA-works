#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1]) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}










// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter no. of Elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " Elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     cout << "Sorted array is: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }










// Slection Sort
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     for(int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for(int j = i + 1; j < n; j++) {  
//             if(arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         if(minIndex != i) {
//             int temp = arr[i];      
//             arr[i] = arr[minIndex];
//             arr[minIndex] = temp;
//         }
//     }
    
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {

//     int arr[] = {10, 15, 7, 14, 99, 3};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int key = 14;

//     int index = -1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             index = i;
//             break;
//         }
//     }

//     if (index != -1) {
//         cout << "Number found at " << index + 1 << " position";
//     } else {
//         cout << "Not found";
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {

//     int arr[] = {3, 7, 10, 14, 15, 99};   // Binary search requires sorted array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int key = 14;
//     int index = -1;
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key) {
//             index = mid;
//             break;
//         }
//         else if (arr[mid] < key) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     if (index != -1) {
//         cout << "Found at position " << index + 1;
//     } 
//     else {
//         cout << "Not Found";
//     }

//     return 0;
// }