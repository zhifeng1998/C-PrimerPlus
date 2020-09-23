#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters; use \'#\' to quit: ";
    // cin.get(ch);
    // while (cin.fail() == false)
    // {
    //     cout << ch;
    //     ++count;
    //     cin.get(ch);
    // }
    while (cin.get(ch))
    {
        cout << ch;
        ++count;
    }
    // int ch;
    // ch = cin.get();
    // while (ch != EOF)
    // {
    //     cout.put(ch);
    //     ++count;
    //     ch = cin.get();
    // }

    cout << count << " characters!";
    return 0;

}