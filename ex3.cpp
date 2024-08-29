/**Program to find the no of characters in  char array and string**/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 char name[ ]="Hello";
 char *display=name;// inital address of the array
string mystring="Hello";
int counter=0;
cout<<"The Size of Character array is "<<sizeof(name)<<"\n";
while(*display)
{
    display++;
    counter ++;
}
cout<<"The Size of Character array is "<<counter<<"\n";
cout<< "The size of string is "<<mystring.size()<<"\n";
}
