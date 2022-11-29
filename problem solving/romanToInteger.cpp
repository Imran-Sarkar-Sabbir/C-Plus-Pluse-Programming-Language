#include <iostream>
#include <unordered_map>

std::unordered_map<std::string, int> romanValues = {
    {"I", 1},
    {"IV", 4},
    {"V", 5},
    {"IX", 9},
    {"X", 10},
    {"XL", 40},
    {"L", 50},
    {"XC", 90},
    {"C", 100},
    {"CD", 400},
    {"D", 500},
    {"CM", 900},
    {"M", 1000},
};

int getValue(std::string token) {
    
    if(token == "I") return 1;
    else if(token == "IV") return 4;
    else if(token == "V") return 5;
    else if(token == "IX") return 9;
    else if(token == "X") return 10;
    else if(token == "XL") return 40;
    else if(token == "L") return 50;
    else if(token == "XC") return 90;
    else if(token == "C") return 100;
    else if(token == "CD") return 400;
    else if(token == "D") return 500;
    else if(token == "CM") return 900;
    else if(token == "M") return 1000;

    return 0;
}


int romanToInt(std::string s)
{

    int index = 0,
        end = s.size(),
        result = 0;

    auto map_end = romanValues.end();

    for (; index < end; index++)
    {
        auto value = getValue(s.substr(index, 2));

        if (value != 0)
        {
            result += value;
            index++;
        }
        else
        {
            auto value = getValue(s.substr(index, 1));
            result += value;
        }
    }

    return result;
}

int main()
{

    std::string roman = "MCMXCIV";

    std::cout << romanToInt(roman) << std::endl;
    std::getchar();
}
