//#include <iostream>
//using namespace std;
//
//
//bool isPrimeNumber(int number){
//	if (number < 2 or number % 2 == 0) {
//		return false;
//	}
//	else if (number == 2) {
//		return true;
//	}
//	else {
//		int i = 2;
//		while (i * i <= number) {
//			//for (int i = 2; i * i <= number; i++) {//i�� number ������ 1�� ����
//			if (number % i == 0) {//number/i�� �������� 0�̸�
//				return false;//Prime�� �ƴ����� ����
//				break;//for�� Ż��
//			}
//			i++;
//		}
//		return true;
//	}
//}
//
//int main() {
//	int startNumber, endNumber;
//	bool isPrime = 1;
//
//	cout << "���� ���� �Է� : ";
//	cin >> startNumber;
//
//	cout << "�� ���� �Է� : ";
//	cin >> endNumber;
//
//
//	for (int s = startNumber; s <= endNumber; s++) {
//		if (isPrimeNumber(s)) { cout << s << "\t"; }
//	}
//	return 0;
//}
////ctrl + k + c&u