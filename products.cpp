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

	for (int city = 0; city < CITY_COUNT; city++){
		cout << "Sales for: " << CITIES[city] << endl;
		for (int product = 0; product < PRODUCT_COUNT; product++){
			cout << "\t" << PRODUCTS[product] << ": ";
			cin >> sales[city][product];
		}
	}

	for (int city = 0; city < CITY_COUNT; city++){
		for (int product = 0; product < PRODUCT_COUNT; product++){
			cout << setw(12) << setprecision(2) << fixed << sales[city][product];
		}
		cout << endl;
	}


	return 0;
}

