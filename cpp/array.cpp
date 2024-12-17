#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{    
    int array[5];
    //char stringa[32] = "ciao";
    
    for (int i = 0; i < 5; i++)
    {
        array[i]=(i+1)*2;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
}

