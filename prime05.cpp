//#include <iostream>
//using namespace std;
//
//int main() {
//	int number;
//	bool isPrime = 1;
//
//	cout << "������ �Է� : ";
//	cin >> number;
//
//
//	if (number < 2 or number % 2 == 0) {
//		cout << number << "�� �Ҽ��� �ƴ�";
//	}
//	else {
//		int i = 2;
//		while(i*i<=number){
//		//for (int i = 2; i * i <= number; i++) {//i�� number ������ 1�� ����
//			if (number % i == 0) {//number/i�� �������� 0�̸�
//				isPrime = 0;//Prime�� �ƴ����� ����
//				break;//for�� Ż��
//			}
//			i++;
//			cout << (i);
//
//		}
//	}
//	if (isPrime && number > 1) {//isPrime�� 1�̰� number�� 1���� ũ��
//		cout << number << " = �Ҽ�";
//	}
//	else {
//		cout << number << " = �Ҽ��� �ƴ�";
//	}
//	return 0;
//}
////ctrl + k + c&u