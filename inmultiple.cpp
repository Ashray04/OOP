//Implementation of multiple inheritance in c++
#include <iostream>
using namespace std;

class A {
public:
    int x;
    void getX() {
        cout<<"Enter value of x: ";
        cin>>x;
    }
};

class B {
public:
    int y;
    void getY() {
        cout<<"Enter value of y: ";
        cin>>y;
    }
};

class C : public A, public B {
public:
    void product() {
        cout<<"Product = "<<x*y<<endl;
    }
};

int main() {
    C obj;
    obj.getX();
    obj.getY();
    obj.product();
    return 0;
}
