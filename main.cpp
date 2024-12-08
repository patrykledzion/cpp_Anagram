// Day3_Anagram.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Anagram.h"

int main()
{
    std::cout << "Hello World!\n";
    Anagram* a = new Anagram("aA");
    std::cout << "Is anagram: " << a->isAnagram();
    return 0;
}