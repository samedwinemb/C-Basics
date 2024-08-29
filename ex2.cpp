#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int number1,choice;
    cin>>number1;
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"The Entered Number is "<<number1<<"\n";
        break;
    case 2:
        cout<<"The double of the Number is  "<<number1*2<<"\n";
    case 3:
        cout<<"Hello World\n";

     case 4:
        cout<<"Welcome to C++\n";
        break;
    }
    return 0;
}
