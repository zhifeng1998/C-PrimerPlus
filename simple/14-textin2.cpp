#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    cout << "Enter characters; use \'#\' to quit: ";
    int ch;
    while ((ch = cin.get()) != EOF)
    {
        cout.put(ch);       // cout.put(char(ch));
        ++count;
    }

    cout << endl
         << count << " characters!";
    return 0;
}