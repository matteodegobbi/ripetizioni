#include <iostream>
int main(int argc, char const *argv[])
{
    int n;
    std::cout << "dimmi la tua eta':" << std::endl;
    std::cin >> n;
    if (n>=18) 
    {
        std::cout << "maggiorenne" << std::endl;
    }
    else
    {
        std::cout << "minorenne" << std::endl;
    }
    std::cout << n << 
    std::endl;
    return 0;
}




