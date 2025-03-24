#include <iostream>
#include "Electric_Field.h"
#include "Magnetic_Field.h"

int main() {
	Electric_Field E_default;
	Electric_Field E_components(1e5, 10.9, 1.7e2);

	std::cout << "Electric Field Magnitude (Default): " << E_default.calculateMagnitude() << std::endl;
	std::cout << "Electric Field Magnitude (Components): " << E_components.calculateMagnitude() << std::endl;

	Electric_Field E1(1.0, 2.0, 3.0);
	Electric_Field E2(4.0, 5.0, 6.0);
	E1.printInnerProduct(E2);

	Magnetic_Field B_default;
	Magnetic_Field B_components(3.0, 4.0, 0.0);

	std::cout << "Magnetic Field Magnitude (Default): " << B_default.calculateMagnitude() << std::endl;
	std::cout << "Magnetic Field Magnitude (Components): " << B_components.calculateMagnitude() << std::endl;

	B_components.printUnitVector();

	return 0;
}
