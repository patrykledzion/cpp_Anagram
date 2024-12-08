#pragma once
#include <iostream>
#include <sstream>
#include <cctype>

class Anagram
{
private:
	std::string phrase;
	std::string _fixString();
	bool ret;
	void _checkAnagram();
public:
	Anagram(std::string phrase);
	bool isAnagram();
};

