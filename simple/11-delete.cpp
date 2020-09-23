#include <iostream>
#include <cstring>

using namespace std;

char *getName(void);

int main()
{
    char *name;
    name = getName();
    cout << name << " at " << (int *)name << endl;
    delete[] name;

    return 0;
}

char *getName()
{
    char temp[80];
    cout << "Enter name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}