#include <iostream>
#include <cmath>
using namespace std;

void main() {
   float a, b, t, dt, num, anal; //differentiation
   cout << "a*cos(bt)" << endl;
   cout << "what is a,b ?" << endl;
   cin >> a >> b;
   cout << "what is t, dt?" << endl;
   cin >> t >> dt;
   anal = -1 * a * b * sin(b * t);
   num = a * (cos(b * (t + dt)) - cos(b * t)) / dt;
   cout << "num " << num << endl;
   cout << "anal " << anal << endl;
   cout << "error= " << abs((num - anal)) / anal * 100 << "%" << endl;

   //integration
   float c, d;
   int N;
   cout << "c, d, N ?" << endl;
   cin >> c >> d >> N;
   anal = a * (sin(b * d) - sin(b * c));
   dt = (d - c) / N;
   num = 0;
   for (int i = 0; i < N; i++) {
      num += a * cos(b * (c + dt * i)) * dt;
   }
   cout << "num " << num << endl;
   cout << "anal " << anal << endl;
   cout << "error= " << abs((num - anal)) / anal * 100 << "%" << endl;

}
