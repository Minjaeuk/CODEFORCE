#include <iostream>
using namespace std;

int main()
{
    int w = 0;

    std::cin >> w;

    if (w == 2)
    {
        std::cout << "No" << std::endl;
    }
    else if (w % 2 == 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}