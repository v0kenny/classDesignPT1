#include "SectionCHeader.h"
using namespace std;

Item::Item(string name, long id, double price, int stock)
	:itemName{ name }, ID{ id }, p{ price }, s{ stock }{}

Store::Store()
	: inStock() {}

void Store::addStock(Item item) {
	inStock.push_back(item);
}

vector<Item> Store::getStock() {
	return inStock;
}
void printTotalItemStock(Store store) {
	vector<Item> itemList = store.getStock();
	cout << "Store: " << "\n";
	for (int count = 0; count < itemList.size(); count++) {
		cout << (itemList.at(count)).itemName << " x " << (itemList.at(count)).s << "\n";
	}
}


Order::Order()
	: currentList(){}

vector<Item> Order::getCurrentList() {
	return currentList;
}


void Order::addItem(Item item) {
	if (currentList.size() >= 10) {
		cout << "You can't exceed 10 items in your order." << "\n";
	}
	else {
		return currentList.push_back(item);
	}
	
}


double Order::getTotalPrice() {
	vector<Item> currentList = getCurrentList();
	for (int i = 0; i < currentList.size(); i++) {
		 total += (currentList.at(i)).p;
	}
	return total;
}


