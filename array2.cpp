#include <iostream>
using namespace std;
template <typename T>
T min_element (T arr[], int n) {
    T min = arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int n;
    int arr[n];
    cin >> n;
    cout << min_element(arr, n) << endl;
}