#include <iostream>
using namespace std;

int main() {
	long* l = new long;
	int i = 7;
	float f = 1.12;
	double d = 3.14;
	int* pi = &i;
	float* pf;
	//double* pd = NULL;
	double* pd = nullptr;
	pf = &f;
	pd = &d;
	*l = 100000;

	cout << *l << " , " << l;
	cout << *pi << " " << i << "\n";
	cout << *pf << " " << f << "\n";
	cout << *pd << " " << d << "\n";

	delete l;//delete object
	cout << l <<"\n";//0000000000008123//because address is steel exist
	l = nullptr;//delete address
	cout << l;//00000000000000
	return 0;
}
