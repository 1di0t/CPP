//#include <iostream>
//using namespace std;
//
//int main() {
//	int totalPrice = 0;
//	int numOfPeople;
//
//	
//	cout << "�� ���̼���?";
//	cin >> numOfPeople;
//	int* ages = new int[numOfPeople]; //assign heap memory
//
//	for (int i = 0; i < numOfPeople; i++) {
//		cout << i+1 <<"��° �� " << "���̰� ��� �Ǽ���? ��ȯ�̴� ����";
//		cin >> *(ages + i);
//	}
//	for (int i = 0; i < numOfPeople; i++) {
//		if (*(ages+i) < 8) {
//			totalPrice += 5000;
//		}
//		else if(*(ages+i) < 65)
//		{
//			totalPrice += 15000;
//		}
//		else {
//			totalPrice += 9000;
//		}
//	}
//
//	cout << "�� �ݾ� : " << totalPrice <<"�� �Դϴ�";
//	delete[] ages; //free heap memory
//	ages = nullptr;
//	return 0;
//}
