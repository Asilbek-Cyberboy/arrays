#include <iostream>
using namespace std;
/*template <typename T>
T indexOfLargest(T arr[], int n) {
    T largest = arr[0];
    int index = 0;
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
            index = i;
        }
    }

}
int main() {
    int n;
    int arr[n];
    cin>>n;
    indexOfLargest(arr, n)<<endl;
}*/
int indexOfLargest(double array[], int size){
if(size<0) {
return -1;
};
    double max = array[0];
    int max_index = 0;
    for(int i=1;i<size;i++) {
        cin>>array[i];
        if(array[i]>max) {
            max = array[i];
            max_index = i;
        }
    }
    return max_index;
}
int main() {
    int size;
    double arr[size];
    cin>>size;
    cout<<indexOfLargest(arr, size)<<endl;
}

