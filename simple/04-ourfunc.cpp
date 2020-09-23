#include <iostream>

void simon(int); //function prototype

int main()
{
    using namespace std;
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!";
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon says " << n << " times.\n";
}