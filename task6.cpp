#include <iostream>
using namespace std;
main()
{
int size;
int cost;
int area;
int cost_fertilizer;
int perarea;
cout << "enter bag size in pounds: ";
cin >> size;
cout << " enter cost of bag: ";
cin >> cost;
cout  << " enter area covered by each bag in square feet: ";
cin >> area;
cost_fertilizer=cost/size;
cout << "cost of fertilizer per pound: " << cost_fertilizer << endl;
perarea=size*area;
cout << "cost of fertilizing the area per square feet: " << perarea;
}