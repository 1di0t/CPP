//#include <iostream>
//using namespace std;
//
//int main() {
//	int startNumber,endNumber;
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
//		if (s < 2 or s % 2 == 0) {
//
//		}
//		else {
//			int i = 2;
//			while (i * i <= s) {
//				//for (int i = 2; i * i <= number; i++) {//i�� number ������ 1�� ����
//				if (s % i == 0) {//number/i�� �������� 0�̸�
//					isPrime = 0;//Prime�� �ƴ����� ����
//					break;//for�� Ż��
//				}
//				i++;
//			}
//			if (isPrime) { cout << s << "\t"; }
//			isPrime = 1;
//		}
//	}
//	return 0;
//}
////ctrl + k + c&u