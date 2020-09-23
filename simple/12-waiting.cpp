#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Enter waiting time in seconds:";
    int seconds;
    cin >> seconds;
    clock_t delay = seconds * CLOCKS_PER_SEC;
    clock_t start = clock();
    cout << "start waiting!\n";
    while (clock() - start < delay)
        ;
    cout<<"END!\a\n";
}