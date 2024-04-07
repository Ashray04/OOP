#include<iostream>
#include<math.h>
using namespace std;

class area 
{
    float ar;
    public:
    area(float a,float b)
    {
        ar=(a*b)/2.0;
    }
    void display()
    {
        cout<<"\nArea of Triangle : "<<ar;
    }
};
int main()
{
    float x,y;
    cout<<"\nEnter sides of Triangle : ";
    cin>>x>>y;
    area a1(x,y);
    a1.display();
    return 0;
}