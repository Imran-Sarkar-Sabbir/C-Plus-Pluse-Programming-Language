#include <iostream>

int main()
{

    int a = 10;
    int *p = &a;
    *p = 67;

    std::cout << a << std::endl;
    system("pause");
    return 0;
}