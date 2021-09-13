#pragma once
#include <iostream>
#include <string>

class Lines {
private:
	std::string* text;
	int text_size;

public:
	std::string& operator[] (const int index) {
		return text[index];
	}
	int getSize() {
		return text_size;
	}
	void setSize(int size) {
		text_size = size;
		text = new std::string[text_size];
	}

	~Lines() {
		delete[] text;
	}
};

class Letters {
private:
	char* text;
	int text_size;

public:
	char& operator[] (const int index) {
		return text[index];
	}
	int getSize() {
		return text_size;
	}
	void setSize(int size) {
		text_size = size;
		text = new char[text_size];
	}

	~Letters() {
		delete[] text;
	}
};



