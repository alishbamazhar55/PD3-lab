#include <iostream>
using namespace std;
main()
{
int value;
int output;
int output3; 
int output5;
int output7;
int output8;
cout << " if user enters: ";
cin >>  value;
output=value%10;
value=value/10;
output3=value%10;
value=value/10;
output5=value%10;
value=value/10;
output7=value%10;
output8=output+output3+output5+output7;
cout << "output8 would be: " << output8;
}

