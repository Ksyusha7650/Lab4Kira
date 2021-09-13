#pragma once
#include "StringAlghotithms.h"

enum Actions {
	END = 1, CONTINUE,
	MANUAL = 1, FILE_INPUT,
	YES = 1, NO,
	TEST = 1, TRY,
	REWRITE = 0, REPEAT,
	SAME = 1, ANOTHER = 2
};

int get_int();
double get_double();
void greetings();
bool end_program();
bool test_or_try(void);
void userInput(Lines& text, int& text_size);
//void input_types(string_convert& text, int& text_size, string& name, int& mode);
void results(Lines& resText, int& resSizeText);

