#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	int r(0);
	cin >> r;
	cout<< fixed<< setprecision(6) << 2 * M_PI*r<<"\n";
	return 0;
}