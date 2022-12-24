#include <iostream>
using namespace std;
main()
{
int i_velocity;
int f_velocity;
int accerlation;
int time;
cout << " enter i_velocity: ";
cin >> i_velocity;
cout << " enter accerlation: ";
cin >> accerlation;
cout << " enter time: ";
cin >> time;
f_velocity=(accerlation*time)+i_velocity;
cout << " f_velocity is: " << f_velocity;
}