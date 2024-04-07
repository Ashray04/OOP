//Write a program to print factorial of number in c++

#include <iostream>
using namespace std;

int main() {
    int i,f=1,n;

    cout<<"Enter the number: ";
    cin>>n;

    for(i=1;i<=n;++i) {
        f *= i;
    }

    cout<<"The factorial of "<<n<<" is: "<<f<<endl;

    return 0;
}
