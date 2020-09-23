#include <iostream>

unsigned int c_in_str(const char *str, char ch);

int main()
{
    using namespace std;
    char mm[14] = "minimum";

    char *wail = "ululate";

    unsigned ms = c_in_str(mm, 'm');
    unsigned us = c_in_str(wail, 'u');

    cout << ms << " m characters in" << mm << endl;
    cout << us << " u characters in" << wail << endl;

    return 0;
}

// unsigned int c_in_str(const char *str, char ch)
// {
//     int i = 0;
//     unsigned int count = 0;
//     while (str[i]!='\0')
//     {
//         if(str[i]==ch)
//             ++count;
//         i++;
//     }
//     return count;
// }
unsigned int c_in_str(const char *str, char ch)
{
    unsigned count = 0;
    while (*str)
    {
        if (*str == ch)
            ++count;
        str++;
    }
    return count;
}
