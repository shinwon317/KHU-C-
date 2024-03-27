#include <fstream>
#include <iostream>
using namespace std;
int main() {
	ofstream dataFile("data.txt");
	if (!dataFile) {
		cout << " can't create data file";
		return -1;
	}
	double t, dt, T;
	const double pi = 3.141592;
	t = 0.0;
	dt = 1.0 / 110 / 20 ; 
	T =  132.0/1320.0 ; 
	for (t = 0.0; t < T; t += dt) {
		dataFile << t << " " << 100 * cos(20 * pi * t) * cos(220 * pi * t) << " " << 60 * sin(240 * pi * t) + 80 * sin(220 * pi * t) << endl;
	}
	dataFile.close();
	return 0;
}