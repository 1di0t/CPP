//#include <iostream>
//using namespace std;
//
//int main() {
//	int number;
//	bool isPrime = 1;
//
//	cout << "정수를 입력 : ";
//	cin >> number;
//
//
//	if (number < 2 or number % 2 == 0) {
//		cout << number << "는 소수가 아님";
//	}
//	else {
//		int i = 2;
//		while(i*i<=number){
//		//for (int i = 2; i * i <= number; i++) {//i를 number 전까지 1씩 증가
//			if (number % i == 0) {//number/i의 나머지가 0이면
//				isPrime = 0;//Prime이 아님으로 변경
//				break;//for문 탈출
//			}
//			i++;
//			cout << (i);
//
//		}
//	}
//	if (isPrime && number > 1) {//isPrime이 1이고 number가 1보다 크면
//		cout << number << " = 소숭";
//	}
//	else {
//		cout << number << " = 소수가 아님";
//	}
//	return 0;
//}
////ctrl + k + c&u