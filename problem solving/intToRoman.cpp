#include <iostream>


std::string getRoman(int &num) {
    if(num >= 900) {
        if(num >= 1000) {
            num -= 1000;
            return "M";
        }
        else {
            num -= 900;
            return "CM";
        }
    } else if(num >= 400) {
        if(num >= 500) {
            num -= 500;
            return "D";
        }
        else {
            num -= 400;
            return "CD";
        }
    }else if(num >= 90) {
        if(num >= 100) {
            num -= 100;
            return "C";
        }
        else {
            num -= 90;
            return "XC";
        }
    } else if(num >= 40) {
        if(num >= 50) {
            num -= 50;
            return "L";
        }
        else {
            num -= 40;
            return "XL";
        }
    } else if(num >= 9) {
        if(num >= 10) {
        num -= 10;
            return "X";
        }
        else {
            num -= 9;
            return "IX";
        }
    } else if(num >= 4) {
        if(num >= 5) {
            num -= 5;
            return "V";
        }
        else {
            num -= 4;
            return "IV";
        }
    } else {
        num -= 1;
        return "I";
    };
}

std::string intToRoman(int num) {

    std::string roman = "";
    while(num > 0) {
        roman = roman + getRoman(num);
    }

    return roman;
}

int main() 
{

    int n = 1994;

    std::cout << intToRoman(n) << std::endl;


    std::getchar();
}

