#include <iostream>
using namespace std;

char* reverseReturn(char* original) {
	int n = strlen(original);
	char* reverse_texts = new char[n+1];
	for (int i = 0; i < n; i++) {
		reverse_texts[i] = original[n-1-i];
	}
	reverse_texts[n] = 0;
	return reverse_texts;
}

int main() {
#include <iostream>
	using namespace std;
	char univ[] = "DaelimUniversity";


	//cout << strlen(univ) << "\n";//except null in end

	cout << univ << "\n";
	char* copy_univ = reverseReturn(univ);
	cout << copy_univ << "\n";

	delete copy_univ;
	copy_univ = nullptr;

	//const char* univ = "Daelim";
	//cout << univ << "\n";
	/*char univ[] = { 'd','a','\0', 'e', 'l'};
	cout << univ << "\n";*/
	//char univ[] = { 'd','a',0, 'e', 'l' };//in ASCII Code 0 is null
	//cout << univ << "\n";
	return 0;
	

}
