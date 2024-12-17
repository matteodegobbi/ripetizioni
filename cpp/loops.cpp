#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    
    /*
    cout << "dimmi un numero:" << endl;
    std::cin >> n;
    while (n<=10)
    {

        cout<<n<<endl;
        n=n+2;
    }*/

    /*for (int i = 0; i < n; i++)
    {
        cout<<i<<endl;
    }*/

    do
    {
        cout << "dimmi un numero pari:" << endl;
        cin >> n;
    } while (n % 2 == 0);
    
}
