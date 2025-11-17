#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n-1);
}

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int findMax(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(findMax(arr, n-1), arr[n-1]);
}

int evenCount(int arr[], int n) {
    if (n == 1) return arr[0] % 2 == 0 ? 1 : 0;
    return evenCount(arr, n-1) + (arr[n-1] % 2 == 0 ? 1 : 0);
}

int main() {
    int first_array[] = {1, 2, 3, 4, 5};
    int second_array[] = {6, 7, 8, 9, 10};

    cout << "Sum: " << sum(5) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "Max: " << findMax(first_array, 5) << endl;
    cout << "Even Total: " << evenCount(second_array, 5) << endl;
}