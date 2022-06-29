#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split_string(std::string &str, char delemeter = ' ')
{
    std::vector<std::string> list_of_sub_string;
    std::string sub_str = "";

    for (char c : str)
    {
        if (c == delemeter)
        {
            list_of_sub_string.push_back(sub_str);
            sub_str = "";
            continue;
        }
        sub_str += c;
    }
    list_of_sub_string.push_back(sub_str);
    return list_of_sub_string;
}

int main()
{

    std::string str = "Hello world!, Bangladesh";
    std::vector<std::string> sub_strings = split_string(str, ',');

    for (auto s : sub_strings)
        std::cout << s << std::endl;

    system("pause");
    return 0;
}