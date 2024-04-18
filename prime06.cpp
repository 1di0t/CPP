//#include <iostream>
//using namespace std;
//
//int main() {
//	int startNumber,endNumber;
//	bool isPrime = 1;
//
//	cout << "시작 수를 입력 : ";
//	cin >> startNumber;
//
//	cout << "끝 수를 입력 : ";
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
//				//for (int i = 2; i * i <= number; i++) {//i를 number 전까지 1씩 증가
//				if (s % i == 0) {//number/i의 나머지가 0이면
//					isPrime = 0;//Prime이 아님으로 변경
//					break;//for문 탈출
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