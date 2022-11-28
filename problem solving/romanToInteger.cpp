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

int romanToInt(std::string s)
{

    int index = 0,
        end = s.size(),
        result = 0;

    auto map_end = romanValues.end();

    for (; index < end; index++)
    {
        auto value = romanValues.find(s.substr(index, 2));

        if (value != map_end)
        {
            result += value->second;
            index++;
        }
        else
        {
            auto value = romanValues.find(s.substr(index, 1));
            result += value->second;
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
