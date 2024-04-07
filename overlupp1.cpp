#include <iostream>
using namespace std;

class Sample {
    int x, y;
public:
    Sample(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void operator++() {
        ++x;
        ++y;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    Sample s(x, y);
    cout << "Before overloading:\n";
    s.display();
    ++s;
    cout << "After overloading:\n";
    s.display();
    return 0;
}
