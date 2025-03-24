#pragma once
#include <cmath>
#include <iostream>

class Electric_Field {
private:
	double *E;

public: 
	Electric_Field() {
		E = new double[3]{0.0, 0.0, 0.0};
	}

	Electric_Field(double Ex, double Ey, double Ez) {
		E= new double[3]{Ex, Ey, Ez};
	}

	~Electric_Field() {
		delete[] E;
	}

	double calculateMagnitude() const {
		return std::sqrt(E[0] * E[0] + E[1] * E[1] + E[2] * E[2]);
	}

	double getX() const { return E[0]; }
	double getY() const { return E[1]; }
	double getZ() const { return E[2]; }

	void setX(double Ex) { E[0] = Ex; }
	void setY(double Ey) { E[1] = Ey; }
	void setZ(double Ez) { E[2] = Ez; }

	double calculateInnerProduct(const Electric_Field& other) const {
		return E[0] * other.getX() + E[1] * other.getY() +E[2] * other.getZ();
	}

	void printInnerProduct(const Electric_Field& other) const {
		std::cout << "Inner Product: " << calculateInnerProduct(other) << std::endl;
	}
};
