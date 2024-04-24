#include <iostream>
using namespace std;

char* reverseReturn(char* original) {
	int n = 0;

	for (int k=0; original[k]!=NULL; k++) {
		n++;
	}
	char* reverseTexts = new char[n + 1];
	for (int i = 0; i < n; i++) {
		reverseTexts[i] = original[n - 1 - i];
	}
	reverseTexts[n] = 0;
	return reverseTexts;
}

int main() {
#include <iostream>
	using namespace std;
	char univ[] = "Daelim";


	//cout << strlen(univ) << "\n";//except null in end

	cout << univ << "\n";
	char* copyUniv = reverseReturn(&univ[0]);
	cout << copyUniv << "\n";

	delete copyUniv;
	copyUniv = nullptr;

	//const char* univ = "Daelim";
	//cout << univ << "\n";
	/*char univ[] = { 'd','a','\0', 'e', 'l'};
	cout << univ << "\n";*/
	//char univ[] = { 'd','a',0, 'e', 'l' };//in ASCII Code 0 is null
	//cout << univ << "\n";
	return 0;


}
