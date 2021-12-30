#include <iostream>
using namespace std;

int main() {
	//earth to mars weight calculator

	float weight, weightMars;

	cout << "Enter item weight in pounds: ";
	cin >> weight;
	weightMars = 0.38 * weight;
	cout << "The item will weigh " << weightMars << " pounds on Mars!";

	system("pause");
	return 0;
}