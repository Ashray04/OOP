//Write a program to print sum of element present in array in c++
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, sum = 0;

    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter the elements for arrray: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<< "The sum of the elements is: "<<sum<<endl;
    return 0;
}
