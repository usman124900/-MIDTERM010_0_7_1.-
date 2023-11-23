#include<iostream>
using namespace std;
int main() {

	int initial_quantity;
	cout << "Enter the initial quantity of the product in stock:";
	cin >> initial_quantity;

	int threshold = 10;
	int current_stock = initial_quantity;

	while (true)
	{
		cout << "Current Stock:" << current_stock << endl;
		char action;
		cout << "Enter 'S' for sale, 'R' for restocking, or 'E' to exit ",
			cin >> action;

		if (action == 'S' || action == 's') {
			int sold_quantity;
			cout << "Enter the quantity sold";
			cin >> sold_quantity;
			if (sold_quantity > current_stock) {
				cout << "Not enough stock available for sale" << endl;
			}
			else {
				current_stock -= sold_quantity;
				sold_quantity;
				cout << sold_quantity << "units sold.Remaining stock:" << current_stock << endl;
			}
		}
		else if (action == 'R' || action == 'r') {
			int restocked_quantity;
			cout << "Enter the quantity restocked:";
			cin >> restocked_quantity;
			current_stock += restocked_quantity;
			cout << restocked_quantity << "units restocked.Remaining stock:" << current_stock << endl;

		}
		else if (action == 'E' || action == 'e') { break; }
		if (current_stock < threshold) { cout << "Warning: Stock is below threshold(" << threshold << ").Restock immediately!" << endl; }
	}
	cout << "Exiting program. Final stock:" << current_stock << endl;
	return 0;
}


		
