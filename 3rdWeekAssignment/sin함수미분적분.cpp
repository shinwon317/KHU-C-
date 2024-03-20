#include <iostream>
#include <cmath>

using namespace std;

void main()
{
    // f(x)=C*cos(ct)
    float C, c, t, dt, num, anal;

    // differentiation
    cout << " C c ? = ";
    cin >> C >> c;
    cout << " t dt ? = ";
    cin >> t >> dt;
    anal = C * c * cos(c * t);
    num = (C * (sin(c * (t + dt)) - sin(c * t))) / dt;
    cout << " num " << num << " anal " << anal << endl;
    cout << " error = " << (num - anal) / anal * 100 << "%" << endl;

    // integration
    float a, b;
    int N;
    cout << " a b N = ";
    cin >> a >> b >> N;
    anal = C * (cos(c * a) - cos(c * b)) / c;
    dt = (b - a) / N;
    num = 0;
    for (int i = 0; i < N; ++i)
    {
        num += C * sin(c * (a + dt * i)) * dt;
    }

    cout << " num " << num << " anal " << anal << endl;
    cout << " error = " << (num - anal) / anal * 100 << "%" << endl;
}
