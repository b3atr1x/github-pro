#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;

cout << "Hello World!\nEnter your number:\n"; 
cin >> number;
for (int i = 1; i <= number; i++) {
	cout << i << endl;
}
return 0;
}