#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
	Item(string name, long id, double price, int stock);
	string itemName;
	long ID;
	double p;
	int s;
};

class Store {
public:
	Store();
	vector<Item> inStock;
	vector<Item> getStock();

	void addStock(Item item);
};

void printTotalItemStock(Store store);

class Order {
public:
	Order();

	vector<Item> getCurrentList();

	void addItem(Item item);
	double getTotalPrice();

private:
	vector<Item> currentList;
	double total = 0;
};