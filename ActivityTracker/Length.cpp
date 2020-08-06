#include "Length.hpp"

Length::Length() {
	this->inches = 0;
}

Length::Length(int feet, int inches) {
	if (feet < 0)
		feet = 0;
	if (inches < 0)
		inches = 0;
	this->inches = feet * 12 + inches;
}

int Length::getFeet() const {
	return inches / 12;
}

int Length::getInches() const {
	return inches % 12;
}

int Length::asInches() const {
	return inches;
}

void Length::addFeet(int feet) {
	addInches(12*feet);
}

void Length::addInches(int inches) {
	if (inches > 0)
		this->inches += inches;
}

void Length::subtractFeet(int feet) {
	subtractInches(feet*12);
}

void Length::subtractInches(int inches) {
	if (inches > 0 && inches <= this->inches)
		this->inches -= inches;
}

void Length::add(const Length &other) {
	addInches(other.asInches());
}

void Length::subtract(const Length &other) {
	subtractInches(other.asInches());
}

void Length::average(Length &other) {
	int total = this->inches += other.inches;
	this->inches = total/2;
	other.inches = total/2;
}

Length::~Length() {
}
