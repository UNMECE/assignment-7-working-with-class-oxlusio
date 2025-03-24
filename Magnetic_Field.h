#pragma once
#include <cmath>
#include <iostream>

class Magnetic_Field {
private:
	double *B;

public:
	Magnetic_Field() {
		B = new double[3]{0.0, 0.0, 0.0};
	}

	Magnetic_Field(double Bx, double By, double Bz) {
		B = new double[3]{Bx, By, Bz};
	}

	~Magnetic_Field() {
		delete[] B;
	}

	double calculateMagnitude() const {
		return std::sqrt(B[0] * B[0] + B[1] * B[1] + B[2] * B[2]);
	}

	double getX() const { return B[0]; }
	double getY() const { return B[1]; }
	double getZ() const { return B[2]; }

	void setX(double Bx) { B[0] = Bx; }
	void setY(double By) { B[1] = By; }
	void setZ(double Bz) { B[2] = Bz; }

	void calculateUnitVector(double &ux, double &uy, double &uz) const {
		double magnitude = calculateMagnitude();
		if (magnitude != 0) {
			ux = B[0] / magnitude;
			uy = B[1] / magnitude;
			uz = B[2] / magnitude;
		} else {
			ux = uy = uz = 0;
		}
	}

	void printUnitVector() const {
		double ux, uy, uz;
		calculateUnitVector(ux, uy, uz);
		std::cout << "Unit Vector: (" << ux << ", " << uy << ", " << uz << ")" << std::endl;
	}
};
