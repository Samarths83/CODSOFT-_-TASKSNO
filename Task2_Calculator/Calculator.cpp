#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	int choose;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << "choose an operation: "<<endl;
	cout << " 1: for +" << endl;
	cout << " 2: for -" << endl;
	cout << " 3: for *" << endl;
	cout << " 4: for division /" << endl;
	cin >> choose;

	//Calculations
	if (choose == 1) {
		
			float addition = num1 + num2;
			cout << "Addition: " << addition << endl;
		
	}
	else if (choose == 2) {
		
			float substraction = num1 - num2;
			cout << "Substraction: " << substraction << endl;
		
	}
	else if (choose == 3) {
		
		float multi = num1 * num2;
		cout << "Multiplication: " << multi << endl;
		
		
	}
	else if (choose == 4) {
		if (num2 != 0) {
		float division = num1 / num2;
		cout << "divison: " << division << endl;
		}else
		{cout<<"Cannot divide by zero: " << num1; }
	}
	else
	{
		cout << "invalid number: " << choose;
	}

	return 0;


}
