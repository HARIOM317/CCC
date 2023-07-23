#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            sum += arr[i];
        }
    }

    cout<<"\nSum = "<<sum<<endl;

    return 0;
}