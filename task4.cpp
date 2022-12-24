#include <iostream>
using namespace std;
main()
{ 
string name;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
float percentage;
cout << " enter name: ";
cin >> name;
cout << "enter sub1: ";
cin >> sub1;
cout << "enter sub2: ";
cin >> sub2;
cout << " enter sub3: ";
cin >> sub3;
cout << "enter sub4: ";
cin >> sub4;
cout << " enter sub5: ";
cin >> sub5;
percentage=(sub1+sub2+sub3+sub4+sub5)/500.0*100.0;
cout << "enter percentage: " << percentage;
}