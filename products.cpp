#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;
using std::string;


int main(int argc, char* argv[]){
	const size_t CITY_COUNT = 2;
	const size_t PRODUCT_COUNT = 3;

	const string CITIES[] = {"Seattle", "Portland"};
	const string PRODUCTS[] = {"Milk", "Meat", "Bread"};

	double sales[CITY_COUNT][PRODUCT_COUNT];
	double salesPerProduct[PRODUCT_COUNT];
	double salesPerCity[CITY_COUNT];

	for (int city = 0; city < CITY_COUNT; city++){
		cout << "Sales for: " << CITIES[city] << endl;
		for (int product = 0; product < PRODUCT_COUNT; product++){
			cout << "\t" << PRODUCTS[product] << ": ";
			cin >> sales[city][product];
		}
	}
	for (int product = 0; product < PRODUCT_COUNT; product++){
		salesPerProduct[product] = 0;
		for (int city = 0; city < CITY_COUNT; city++){
			salesPerProduct[product] += sales[city][product];
		}
	}
	cout << setw(12) << " ";
	for (int product = 0; product < PRODUCT_COUNT; product++)
		cout << setw(12) << PRODUCTS[product];
	cout << endl;

	for (int city = 0; city < CITY_COUNT; city++){
		cout << setw(12) << CITIES[city];
		for (int product = 0; product < PRODUCT_COUNT; product++){
			cout << setw(12) << setprecision(2) << fixed << sales[city][product];
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "Total sales per Product ===== " << endl;
	for (int product = 0; product < PRODUCT_COUNT; product++){
		cout << PRODUCTS[product] << ": " << salesPerProduct[product] << endl;
	}

	return 0;
}

