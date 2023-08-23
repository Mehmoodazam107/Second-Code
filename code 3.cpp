#include <iostream>
using namespace std;

int main()
{

    int i = 7;

    cout << "Enter Number ";

    cin >> i;

    for (; i >= -2; i--)
    {
        if (i != 0)
        {
            cout << i<<endl;
        }
    }

    return 0;
}
