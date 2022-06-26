#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{

public:
    string reverseWords(string s)
    {
        string result = "";
        string word = "";
        for (auto s_i = s.begin(); s_i < s.end(); s_i++)
        {
            if (*s_i == ' ')
            {
                reverse(word.begin(), word.end());
                result += word;
                result += " ";
                s_i++;
                word = "";
            }
            word += *s_i;
        }
        reverse(word.begin(), word.end());
        result += word;
        return result;
    }
};

int main()
{

    string s = "hello world, bangladesh";

    Solution ss;
    cout << ss.reverseWords(s) << "-end" << endl;

    system("pause");
    return 0;
}
