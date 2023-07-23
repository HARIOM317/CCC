#include <iostream>

using namespace std;

int main(){
    int arr1[] = {4,6,7,8,10};
    int arr2[] = {11,2,34,5,67,90,100,21,34,50};

    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);

    int newArray[m+n];

    for(int i = 0; i < m+n; i++){
        if (i<m){
            newArray[i] = arr1[i];
        } else {
            newArray[i] = arr2[i-m];
        }
    }

    cout<<"After concatenation \n";
    for(int i = 0; i < m+n; i++){
        cout<<newArray[i]<<" ";
    }

    return 0;
}