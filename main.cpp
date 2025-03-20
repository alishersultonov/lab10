#include <iostream>
using namespace std;

//Problem 1

// int main() {
//     int n, sum = 0;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//
//     cout << "Sum = " << sum << endl;
//     return 0;
// }


//Problem 2

// double average(int arr[], int size) {
//     double sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum / size;
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     cout << "Average = " << average(arr, n) << endl;
//     return 0;
// }


//Problem 3

// int findMin(int arr[], int size) {
//     int minVal = arr[0];
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < minVal)
//             minVal = arr[i];
//     }
//     return minVal;
// }
//
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     cout << "Min = " << findMin(arr, n) << endl;
//     return 0;
// }

//Problem 4

// int indexOfLargestElement(double arr[], int size) {
//     if (size <= 0) return -1;
//
//     int maxIndex = 0;
//     for (int i = 1; i < size; i++) {
//         if (arr[i] >= arr[maxIndex])
//             maxIndex = i;
//     }
//     return maxIndex;
// }
//
// int main() {
//     double arr[15];
//     cout << "Enter 15 numbers: ";
//     for (int i = 0; i < 15; i++) {
//         cin >> arr[i];
//     }
//
//     cout << "Index of largest element: " << indexOfLargestElement(arr, 15) << endl;
//     return 0;
// }

//Problem 5

bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i])
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    int list1[n], list2[n];
    cout << "Enter first array: ";
    for (int i = 0; i < n; i++) cin >> list1[i];

    cout << "Enter second array: ";
    for (int i = 0; i < n; i++) cin >> list2[i];

    if (strictlyEqual(list1, list2, n))
        cout << "Two lists are strictly identical" << endl;
    else
        cout << "Two lists are not strictly identical" << endl;

    return 0;
}
