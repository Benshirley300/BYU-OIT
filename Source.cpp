#include <iostream>
#include <string>

int main() {
	std::string romanNumerals;
	unsigned int j = 0;
	const int M = 1000;
	const int D = 500;
	const int C = 100;
	const int L = 50;
	const int X = 10;
	const int V = 5;
	const int I = 1;
	
	while (romanNumerals != "quit") {
		int numericalVal = 0;

		std::cin >> romanNumerals;

		for (j = 0; j < romanNumerals.size(); ++j) {
			if (romanNumerals.at(j) == 'M') {
				numericalVal += M;
			}
			else if (romanNumerals.at(j) == 'D') {
				numericalVal += D;
			}
			else if (romanNumerals.at(j) == 'C' && j < romanNumerals.size() - 1) {
				if (romanNumerals.at(j + 1) == 'D') {
					numericalVal = numericalVal + (D - C);
					++j;
				}
				else if (romanNumerals.at(j + 1) == 'M') {
					numericalVal = numericalVal + (M -C);
					++j;
				}
				else {
					numericalVal += C;
				}
			}
			else if (romanNumerals.at(j) == 'C') {
				numericalVal += C;
			}
			else if (romanNumerals.at(j) == 'L') {
				numericalVal += L;
			}
			else if (romanNumerals.at(j) == 'X' && j < romanNumerals.size() - 1) {
				if (romanNumerals.at(j + 1) == 'L') {
					numericalVal = numericalVal + (L - X);
					++j;
				}
				else if (romanNumerals.at(j + 1) == 'C') {
					numericalVal = numericalVal + (C - X);
					++j;
				}
				else {
					numericalVal += X;
				}
			}
			else if (romanNumerals.at(j) == 'X') {
				numericalVal += X;
			}
			else if (romanNumerals.at(j) == 'V') {
				numericalVal += V;
			}
			else if (romanNumerals.at(j) == 'I' && j < romanNumerals.size() - 1) {
				if (romanNumerals.at(j + 1) == 'X') {
					numericalVal = numericalVal + (X - I);
					++j;
				}
				else if (romanNumerals.at(j + 1) == 'V') {
					numericalVal = numericalVal + (V - I);
					++j;
				}
				else {
					numericalVal += I;
				}
			}
			else if (romanNumerals.at(j) == 'I') {
				numericalVal += I;
			}
		}

		std::cout << numericalVal << std::endl;

	}
	system("pause");

	return 0;
}