#include <iostream>
using namespace std;

class Pokemon {
private:

public:
	double* points;
	Pokemon() {
		points = new double[0xffff];
		cout << &points << "\n";
	}
	Pokemon(int size){
		points = new double[size];
		cout << &points << "\n";
	}
	~Pokemon()
	{
		cout << &points << "\n";
		delete[] points;
		points = nullptr;
	}
};

int main() {
	Pokemon p1;
	
	p1.points[0] = 999.9;
	p1.points[1] = 954.9;
	cout << "=======================\n";
	cout << p1.points[1] << "\n";
	int in;
	cin >> in;
	Pokemon p2(in);

	return 0;
}
