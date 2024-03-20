#include <iostream>
#include <cmath>
double log_with_base_a(double x, double a)// 밑변환 공식을 이용하여 밑을 a로 가지는 log 함수 구현 
{
	return log(x) / log(a);
}
using namespace std;
void main()
{

	double a, b, c, dt, t, d_num, d_anal;
	//differentiation
	cout << " In the form of b*loga(ct), please type value for b,a,c  ? = ";
	cin >> b >> a >> c;
	cout << "t dt ? = ";
	cin >> t >> dt;
	d_anal = (b / t) / log(a);
	d_num = (b * (log_with_base_a(c * (t + dt), a) - log_with_base_a(c * t, a))) / dt;
	cout << "Numerical differentiation result: " << d_num << " Analytical differentiation result:	 " << d_anal << endl;
	cout << "error = " << (abs((d_num - d_anal)) * 100) / d_anal << "%" << endl;



	// integration
	double r1, r2, i_num, i_anal;
	i_num = 0;
	int N;

	cout << "Range of Integration r1,r2 : ";
	cin >> r1 >> r2;
	cout << "How many times you want to divide the area N : ";
	cin >> N;

	// 해석적 적분 계산
	double term1 = (-r2 + r2 * log(c * r2)) / log(a); // 정적분 첫번째 값
	double term2 = (-r1 + r1 * log(c * r1)) / log(a); // 정적분 두번째 값
	i_anal = b * (term1 - term2);

	dt = (r2 - r1) / N;
	for (int i = 0; i < N; i++)
	{
		i_num += b * dt * (log(c * (r1 + dt * i))) / log(a);

	}

	cout << "Numerical integration result: " << i_num << " Analytical integration result: " << i_anal << endl;
	cout << "error = " << (abs((i_num - i_anal)) * 100) / d_anal << "%" << endl;








}
