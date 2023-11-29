#include<iostream>
using namespace std;
int area(int, int);
float area(int);
int main()
{
	int r;
	cout << "enter radius of circle\n";
	cin >> r;
	float A = area(r);
	cout << "area of cicle" << A;
	int l, b, a;
	cout << "enter length and width of rectangle\n";
	cin >> l >> b;
	a = area(l, b);
	cout << "area of rectangle " << a;
	return 0;
}
float area(int radius)
{
	return 3.14 * radius * radius;
}
int area(int L, int B)
{
	return L * B;
}


