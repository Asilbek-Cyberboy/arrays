#include <iostream>
using namespace std;
template <typename T>
T min_element (T arr[], int n) {
    T min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
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
void printArray(T arr[], int n) {
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    }
template <typename T>
void inputArray(T arr[], int n) {
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
    }
double average(int arr[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return double(sum)/n;
}
int main() {
    int N;
    cin>>N;
    int arr[N];
    inputArray(arr, N);
    sortArray(arr, N);
    //printArray(arr, N);
    //cout<<average(arr, N)<<endl;
    //cout<<min_element(arr, N)<<endl;
    return 0;
}