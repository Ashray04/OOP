#include<iostream>
#include<cmath>

using namespace std;

class Triangle {
    private:
        float base, height, area;
    public:
        Triangle(float b, float h) {
            base = b;
            height = h;
            area = 0.5 * base * height;
        }
        ~Triangle() {
            cout << "The area of the triangle is " << area << endl;
        }
};

int main() {
    float b, h;
    cout << "Enter the base and height of the triangle: ";
    cin >> b >> h;
    Triangle t(b, h);
    return 0;
}
