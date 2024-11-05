#include <iostream>
using namespace std;
void sortArray(int arr[], int n) {
    int t;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}
template <typename T>
void inputArray(T arr[], int n) {
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    inputArray(arr, n);
    sortArray(arr, n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}