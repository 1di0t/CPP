//#include <iostream>
//using namespace std;
//
//int main() {
//	int totalPrice = 0;
//	int numOfPeople;
//
//	
//	cout << "몇 분이세요?";
//	cin >> numOfPeople;
//	int* ages = new int[numOfPeople]; //assign heap memory
//
//	for (int i = 0; i < numOfPeople; i++) {
//		cout << i+1 <<"번째 분 " << "나이가 어떻게 되세요? 동환이는 ㄴㄱ";
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
//	cout << "총 금액 : " << totalPrice <<"원 입니다";
//	delete[] ages; //free heap memory
//	ages = nullptr;
//	return 0;
//}
