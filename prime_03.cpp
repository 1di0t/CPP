#include <iostream>
using namespace std;

int main() {
	int number;
	bool isPrime = 1;

	cout << "������ �Է� : ";
	cin >> number;

	for (int i = 2; i < number; i++) {//i�� number ������ 1�� ����
		if (number % i == 0) {//number/i�� �������� 0�̸�
			isPrime = 0;//Prime�� �ƴ����� ����
			break;//for�� Ż��
		}
	}
	if (isPrime && number > 1) {//isPrime�� 1�̰� number�� 1���� ũ��
		cout << number << " = �Ҽ�";
	}else{
		cout << number << " = �Ҽ��� �ƴ�";}
	return 0;}
//ctrl + k + c&u