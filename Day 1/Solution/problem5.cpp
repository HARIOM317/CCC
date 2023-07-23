#include <iostream>

using namespace std;

int binarySearch(int arr[], int key, int size){
    int low = 0;
    int high = size;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,3,4,5,7,9,11,23,34,45,56,67,78,89,100};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cout<<"Enter key : ";
    cin>>key;

    cout<<binarySearch(arr, key, size);

    return 0;
}