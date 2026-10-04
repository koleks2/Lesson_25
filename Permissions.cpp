#include <iostream>
#include "Permissions.h"


Permissions operator|(const Permissions& p1, const Permissions& p2) {
	return Permissions(p1.mask | p2.mask);
}

Permissions operator&(const Permissions& p1, const Permissions& p2) {
	return Permissions(p1.mask & p2.mask);
}

void Permissions::print() const {
	std::cout << "Mask: " << mask << std::endl;
}

bool Permissions::operator!() const {
	return mask == None;
}