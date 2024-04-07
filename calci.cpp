//Create a class of calculator 
#include <iostream>

using namespace std;
class calci
{
    public:
    void getinfo();
};
void calci::getinfo()
{
    int a, b, i;
    cout<<"Enter Number 1 : ";
    cin>>a;
    cout<<"\nEnter Number 2 : ";
    cin>>b;
    do
    {
        cout<<"\nEnter 1 for 'Addition'  ";
        cout<<"\nEnter 2 for 'Subtraction'  ";
        cout<<"\nEnter 3 for 'Multiplication'  ";
        cout<<"\nEnter 4 for 'Division'  \n";
        cout<<"Enter 0 for Exit ";
        cout<<"\nEnter your choice : ";
        cin>>i;
        switch(i)
        {
            case 0:
                break;
            case 1:
                cout<<endl<<a<<"+"<<b<<"="<<a + b;
                break;
            case 2:
                cout<<endl<<a<<"-"<<b<<"="<<a - b;
                break;
            case 3:
                cout<<endl<<a<<"*"<<b<<"="<<a * b;
                break;
            case 4:
                cout <<endl<<a<<"/"<<b<<"="<<a / b;
                break;
            default:
                cout<<"\nEnter valid option";
        }
    } while(i != 0);
 }

int main()
{
    calci c1;
    c1.getinfo();
    return 0;
}