#include <iostream>

struct infaltable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;

    infaltable *ps = new infaltable;
    cout << "Enter name of inflatable: ";
    cin.get(ps->name, 20);
    cout << "Enter volume ofcubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price:$";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price: " << ps->price << endl;

    delete ps;
    return 0;
}
