//write a program to find the mean value of a class Sample contains x and y variable by passing object to friend function 
#include <iostream>
using namespace std;

class Sample {
    int x,y;
public:
    Sample(int x,int y) {
        this->x=x;
        this->y=y;
    }
    friend void mean(Sample s);
};

void mean(Sample s) {
    float mean=(s.x + s.y)/2.0;
    cout<<"Mean value of x and y is: "<<mean<<endl;
}

int main() {
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    Sample s(x,y);
    mean(s);
    return 0;
}
