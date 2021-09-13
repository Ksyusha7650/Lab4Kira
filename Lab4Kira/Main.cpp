#include "Main.h"
#include "Interface.h"
#include "StringAlghotithms.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	greetings();
	bool end = false;
	Lines text, resText;
	string name = "";
	do {
		int textSize = 0, mode = 0, resSizeText = 0;
		userInput(text, textSize);
		//if (test_or_try()) run_tests();
		//else {
		//	input_types(text, text_size, name, mode);
		//	check_string(text, text_size, resText, resSizeText);
		results(text, textSize);
		cout << text[0].length() << endl;
		//}
		end = end_program();
	} while (end != true);
}

