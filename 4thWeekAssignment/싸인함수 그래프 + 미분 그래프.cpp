#include <fstream>
#include <iostream>
using namespace std;
int main() {
	ofstream dataFile("SinFunction.txt");
	if (!dataFile) {
		cout << " can't open file\n";
		return -1;
	}
	float t, dt, T, pi = 3.141592;
	t = 0.0;
	dt = 1.00 /20.00;
	T = 5;
	for (t = 0.0; t < T; t += dt) {
		dataFile << t << " " << 2 * sin(2 * pi * t) << " " << 4 * pi * cos(2 * pi * t)  << endl;
	}
	dataFile.close();
	return 1;
}
