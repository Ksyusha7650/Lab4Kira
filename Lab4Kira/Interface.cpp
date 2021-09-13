#include "Interface.h"
#include "Main.h"
#include "StringAlghotithms.h"

using namespace std;
using namespace filesystem;

double get_double() {
	double input = 0;
	cin >> input;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "������� �����." << endl;
		cin >> input;
	}
	return input;
}

int get_int() {
	int input = 0;
	cin >> input;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "������� �����." << endl;
		cin >> input;
	}
	return input;
}

//void output_file(string_convert& text, int& textSize, string& name) {
//	textSize = 0;
//	cout << "������� ���� ����� � �������." << endl
//		<< "�������: C:\\\\�����1(���� ����������)\\\\�����2(���� ����������)\\\\...\\\\�������� �����.txt " << endl
//		<< "���� ������� ������ �������� �����, ���� �� � ����� ����� �������."
//		<< endl;
//	while (true) {
//		cin >> name;
//		ofstream output_file_text(name, ofstream::app);
//		error_code ec;
//		if (!is_regular_file(name, ec)) {
//			cout << "����� �������� ������������ ��������. ��������� ����." << endl;
//			ec.clear();
//		}
//		else break;
//		output_file_text.close();
//	}
//	ifstream output_file_text(name);
//	string temporary_line;
//	int quality_lines = 0;
//	while (getline(output_file_text, temporary_line))
//	{
//		if (!(temporary_line == ""))
//			textSize++;
//		quality_lines++;
//	}
//
//	text.setSize(textSize);
//	ifstream read_text(name);
//	const int DASH_1 = -30;
//	const int DASH_2 = -106;
//	const int FIRST_EMPTY_ELEMENT = 1;
//	const int SECOND_EMPTY_ELEMENT = 2;
//	const int DASH = 45;
//	int current_index = 0;
//	for (int index = 0; index < quality_lines; index++) {
//		getline(read_text, temporary_line);
//		if (temporary_line != "") {
//			if (temporary_line[0] != DASH)
//				if (temporary_line[0] == DASH_1) {
//					temporary_line[0] = DASH;
//					temporary_line.erase(FIRST_EMPTY_ELEMENT, SECOND_EMPTY_ELEMENT);
//				}
//			if (temporary_line[0] == DASH_2)
//				temporary_line[0] = DASH;
//			text[current_index] = temporary_line;
//			current_index++;
//		}
//	}
//	output_file_text.close();
//	read_text.close();
//}
//

void userInput(Lines& text, int& textSize) {
	cout << "������� �����." << endl
		<< "��� ���������� ����� ������� ������ �� ����� ����� (.)" << endl;
	Lines textTemporary;
	string line = "";
	textSize = 0;
	text.setSize(textSize);
	bool end = false;
	bool repeat = false;
	int new_text_size = 0;
	while (!(end)) {
		repeat = false;
		getline(cin, line);
		if (line[0] != '.') {
			if (line != "") {
					new_text_size = textSize;
					new_text_size++;
					textTemporary.setSize(new_text_size);
					for (int index = 0; index < textSize; index++)
					{
						textTemporary[index] = text[index];
					}
					textTemporary[new_text_size - 1] = line;
					textSize = new_text_size;
					text.setSize(textSize);
					for (int index = 0; index < textSize; index++)
					{
						text[index] = textTemporary[index];
					}
			}
		}
		else end = true;
	}
	cout << "��o� ��������" << endl;
}

void results(Lines& resText, int& resSizeText) {
	cout << "��������� ���������: " << endl;
	for (int index = 0; index < resSizeText; index++) {
		cout << resText[index] << endl;
	}
	cout << "- - - - - - - - - -" << endl;
}

//void input_types(string_convert& text, int& textSize, string& name, int& mode) {
//	cout << "�������� ������ ����� ������." << endl
//		<< "�������� ����� ����: " << endl << "[1] - ��� ����� �������" << endl
//		<< "[2] - ��� ����� ������ �� �����" << endl;
//	while (true) {
//		mode = get_int();
//		if (mode == MANUAL) {
//			user_input(text, textSize);
//			cout << "- - - - - - - - - - - -" << endl;
//			break;
//		}
//		if (mode == FILE_INPUT) {
//			output_file(text, textSize, name);
//			cout << "- - - - - - - - - - - -" << endl;
//			break;
//		}
//		else cout << "������� ���� 1, ���� 2." << endl;
//	}
//}
//


bool test_or_try(void) {
	cout << "�������� ����� ����:" << endl;
	cout << "[1] - �������� �����" << endl;
	cout << "[2] - ��������� ���������" << endl;
	int mode = 0;
	while (!((mode == TEST) || (mode == TRY))) {
		mode = get_int();
		switch (mode) {
		case TEST: return true;
			break;
		case TRY: return false;
			break;
		default: cout << "������� ���� 1, ���� 2." << endl;
		}
	}
	return true;
}


void greetings() {
	cout << "��������� �������� ������� ������ ���������." << endl << "������: 404." << endl << "�������: 30." << endl <<
		"������ ����� 12:" << endl <<
		"����� � ������ ��� ������������������ ������ ������ ���������� �������� � �������� �� ����������{ ������, ���������� }. " << endl
		<< "����������� ������ ������������������, ������� ����� ������������ ������, �������� �������������." << endl
		<< "������������� ����� �������������� ������������� ������." << endl
		<< "������: ����� ����������� �������� ������ ���� �����e� ������� ��������{ e, 3 } ��������."<< endl;
}


bool end_program() {
	cout << "��������� ���������? " << endl;
	cout << "�������� ����� ����:" << endl
		<< "[1] - ��������� ���������" << endl << "[2] - ��������� ���������" << endl;
	while (true) {
		int end = get_int();
		switch (end) {
		case END:
			cout << "��������� �����������..." << endl;
			return true;
			break;
		case CONTINUE:
			cout << "�� ������� ��������� ���������: " << endl;
			return false;
			break;
		default:
			cout << "������� ���� 1, ���� 2." << endl;
		}
	}
}

