#include <iostream>
using namespace std;


bool isPrimeNumber(int number){
	if (number < 2 or number % 2 == 0) {
		return false;
	}
	else if (number == 2) {
		return true;
	}
	else {
		int i = 2;
		while (i * i <= number) {
			//for (int i = 2; i * i <= number; i++) {//i를 number 전까지 1씩 증가
			if (number % i == 0) {//number/i의 나머지가 0이면
				return false;//Prime이 아님으로 변경
				break;//for문 탈출
			}
			i++;
		}
		return true;
	}
}

int main() {
	int startNumber, endNumber;
	bool isPrime = 1;

	cout << "시작 수를 입력 : ";
	cin >> startNumber;

	cout << "끝 수를 입력 : ";
	cin >> endNumber;


	for (int s = startNumber; s <= endNumber; s++) {
		if (isPrimeNumber(s)) { cout << s << "\t"; }
	}
	return 0;
}
//ctrl + k + c&u
