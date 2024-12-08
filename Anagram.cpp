#include "Anagram.h"

std::string Anagram::_fixString()
{
    if (this->phrase.empty())return "";

    std::string alphanum;

    for (auto& c : this->phrase)
    {
        alphanum += [](char _c)->std::string {return isalnum(_c) ? std::string(1,std::tolower(_c)) : ""; }(c);
    }
    std::cout << "Fixed: "<<alphanum<<std::endl;
    return alphanum;
}

void Anagram::_checkAnagram()
{
    this->ret = false;
    if (this->phrase.empty())return;
    std::string fixedString = this->_fixString();
    this->ret = std::equal(fixedString.begin(), fixedString.begin() + fixedString.size() / 2, fixedString.rbegin());
     
}

Anagram::Anagram(std::string phrase) : phrase(std::move(phrase))
{
    this->_checkAnagram();
}

bool Anagram::isAnagram()
{
    return this->ret;
}
