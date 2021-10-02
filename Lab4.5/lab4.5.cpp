#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

int main() {
	double x, y, R;
	int i;
	string res;

	cout << "R = "; cin >> R;
	cout << endl;

	cout << "Choose x, y" << endl;
	cout << endl;
	
	for (i = 0; i < 10; i += 1) {

		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((x >= -R && x <= 0) && (y >= -R && y <= 0)) ||
			(x >= 0 && x <= R) && (y >= 0 && y <= R) ||
			(((x >= -R && x <= 0)) && (y >= 0 && y <= R) && ((y - R) * (y - R) >= R * R - (x + R) * (x + R))) ||
			((x >= 0 && x <= R) && (y <= 0 && y >= -R) && ((y + R) * (y + R) >= R * R - (x - R) * (x - R))))
			res = "yes";
		else
			res = "no";
		
		cout << fixed;
		cout << "---------------------------" << endl;
		cout << "|" << setw(7) << "x" << " |"
			 << setw(7) << "y" << " |"
			 << setw(7) << "result" << " |" << endl;
		cout << "---------------------------" << endl;

		cout << "|" << setw(7) << setprecision(2) << x
			 << " |" << setw(7) << setprecision(2) << y
			 << " |" << setw(7) << res
			<< " |" << endl;
		
		cout << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << "Random x,y" << endl;

	srand((unsigned) time(NULL));

	for (i = 0; i < 10; i += 1) {

		x = -2 * R + rand() * (2*R - (-2*R)) / RAND_MAX;
		y = -2*R + rand() * (2*R - (-2*R)) / RAND_MAX;

		if (((x >= -R && x <= 0) && (y >= -R && y <= 0)) ||
			(x >= 0 && x <= R) && (y >= 0 && y <= R) ||
			(((x >= -R && x <= 0)) && (y >= 0 && y <= R) && ((y - R) * (y - R) >= R * R - (x + R) * (x + R))) ||
			((x >= 0 && x <= R) && (y <= 0 && y >= -R) && ((y + R) * (y + R) >= R * R - (x - R) * (x - R))))
			res = "yes";
		else
			res = "no";

		cout << fixed;
		cout << "---------------------------" << endl;
		cout << "|" << setw(7) << "x" << " |"
			<< setw(7) << "y" << " |"
			<< setw(7) << "result" << " |" << endl;
		cout << "---------------------------" << endl;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(2) << y
			<< " |" << setw(7) << res
			<< " |" << endl;
		cout << endl;

	}

	cin.get();
	return 0;
}