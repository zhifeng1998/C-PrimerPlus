#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Please input area:" << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "side:" << side;
    return 0;
}