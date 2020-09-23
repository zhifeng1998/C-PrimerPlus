#include<iostream>
#include<climits>

#define ZERO 0

int main()
{
    using namespace std;
    short sam=SHRT_MAX;
    unsigned short sue=sam;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposites."<<endl
        <<"Add 1 to each count."<<endl<<"Now ";
    sam+=1;
    sue+=1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
    cout<<" dollars deposite.\nPoor Sam!"<<endl;
}