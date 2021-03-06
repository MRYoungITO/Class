#include "Toy.h"

Toy::Toy() {
	name = "";
	price = 0;
	origin = "";
}

Toy::Toy(string name, int price, string origin) {
	this->name = name;
	this->price = price;
	this->origin = origin;
}

Toy::~Toy() {

}

string Toy::getName() const {
	return name;
}

int Toy::getPrice() const {
	return (int)(price * discount);
}

string Toy::getOrigin() const {
	return origin;
}

void Toy::setDiscount(float discount) {
	this->discount = discount;
}