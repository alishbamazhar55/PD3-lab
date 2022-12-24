#include <iostream>
using namespace std;
main()
{
float vegetables;
float fruits;
int cost_vege;
int cost_fruit;
float earnings;
float total_earnings;
cout << "vegetable price per kilogram: ";
cin >> vegetables;
cout << " fruit price per kilogram: ";
cin >> fruits;
cout << " total kilograms of vegetables: ";
cin >> cost_vege;
cout << "total kilograms of fruits: ";
cin >> cost_fruit;
earnings=(vegetables*cost_vege)+(fruits*cost_fruit);
total_earnings=earnings/1.94;
cout << " total earnings in rupees: " << total_earnings;
}