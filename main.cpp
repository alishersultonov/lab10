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

// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i])
//             return false;
//     }
//     return true;
// }
//
// int main() {
//     int n;
//     cout << "Enter size of arrays: ";
//     cin >> n;
//
//     int list1[n], list2[n];
//     cout << "Enter first array: ";
//     for (int i = 0; i < n; i++) cin >> list1[i];
//
//     cout << "Enter second array: ";
//     for (int i = 0; i < n; i++) cin >> list2[i];
//
//     if (strictlyEqual(list1, list2, n))
//         cout << "Two lists are strictly identical" << endl;
//     else
//         cout << "Two lists are not strictly identical" << endl;
//
//     return 0;
// }

//Problem 6

// int main() {
//     int freq[26] = {0};
//     char ch;
//
//     cout << "Enter characters (end with '0'): ";
//     while (cin >> ch && ch != '0') {
//         if (ch >= 'a' && ch <= 'z') {
//             freq[ch - 'a']++;
//         }
//     }
//
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > 0) {
//             cout << char('a' + i) << ": " << freq[i] << endl;
//         }
//     }
//
//     return 0;
// }

// //Problem 7

// #include <algorithm>
//
// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     sort(arr, arr + n);
//
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//
//     return 0;
// }

// //Problem 8

// #include <cstdlib>
// #include <ctime>
//
// int main() {
//     srand(time(0));
//     int count[6] = {0};
//
//     for (int i = 0; i < 10000; i++) {
//         int roll = rand() % 6 + 1;
//         count[roll - 1]++;
//     }
//
//     for (int i = 0; i < 6; i++) {
//         cout << "Number " << (i + 1) << ": " << count[i] << " times" << endl;
//     }
//
//     return 0;
// }

// //Problem 9

// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     reverseArray(arr, 0, n - 1);
//
//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//
//     return 0;
// }

// //Problem 10

// bool isSorted(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < arr[i - 1])
//             return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//
//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) cin >> arr[i];
//
//     cout << (isSorted(arr, n) ? "YES" : "NO") << endl;
//     return 0;
// }
