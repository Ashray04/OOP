//Implemention of single level inheritance in c++
#include<iostream>
using namespace std;

class B {
    public:
        int x;
        void getData()
        {
            cout<<"Enter value of x: ";
            cin>>x;
        }
};
class D:public B {
    private:
        int y;
    public:    
        void readData()
        {
            cout<<"Enter value of y: ";
            cin>>y;
        }
        void product(){
            cout<<"Product = "<<x*y;
        }
};

int main()
{
    D obj;

    obj.getData();
    obj.readData();
    obj.product();

    return 0;
}