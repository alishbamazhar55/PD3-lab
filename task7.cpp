#include <iostream>
using namespace std;
main()
{
string movie;
int adult_ticket;
int child_ticket;
int number1;
int number2;
int percentage;
int genrated_amount;
int after_donation;
int donation;
cout << "enter movie name: ";
cin >> movie;
cout << "enter adult ticket price: ";
cin >> adult_ticket;
cout << "enter child ticket price: ";
cin >> child_ticket;
cout << "enter number of adult ticket sold: ";
cin >> number1;
cout << " enter number of child ticket sold: ";
cin >> number2;
cout << "enter percentage to donate: ";
cin >> percentage;
genrated_amount=(number1*adult_ticket)+(number2*child_ticket);
cout << " total amount genrated: " << genrated_amount << endl;
donation=(genrated_amount*10)/100;
after_donation=genrated_amount-donation;
cout << "amount after donation: " << after_donation;
}
