/*Write a program to count the minimum number of notes in a given amount 
using the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1*/
#include <iostream>

using namespace std;

int main() {
int amount, notes500, notes100, notes50, notes20, notes10;

cout << "Enter the amount: ";
cin >> amount;

notes500 = notes100 = notes50 = notes20 = notes10 = 0;

switch (amount / 500) {
case 1:
  notes500 = 1;
  amount -= 500;
  break;
default:
  break;
}

switch (amount / 100) {
case 1:
  notes100 = 1;
  amount -= 100;
  break;
default:
  break;
}

switch (amount / 50) {
case 1:
  notes50 = 1;
  amount -= 50;
  break;
default:
  break;
}

switch (amount / 20) {
case 1:
  notes20 = 1;
  amount -= 20;
  break;
default:
  break;
}

switch (amount / 10) {
case 1:
  notes10 = 1;
  amount -= 10;
  break;
default:
  break;
}

if (notes500 > 0) {
  cout << "notes of '500' = " << notes500 << " and ";
}

if (notes100 > 0) {
  cout << "notes of '100' = " << notes100 << " and ";
}

if (notes50 > 0) {
  cout << "notes of '50' = " << notes50 << " and ";
}

if (notes20 > 0) {
  cout << "notes of '20' = " << notes20 << " and ";
}

if (notes10 > 0) {
  cout << "notes of '10' = " << notes10;
}

return 0;
}