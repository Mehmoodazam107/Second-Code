#include <iostream>
using namespace std;

int main()
{
    int input1;
    int input2 = 10;
    int small;
    int limit = 10;
    int large = 0;
    cout << "Write No.1:";
    cin >> input1;
    cout << "Write No.2:";
    cin >> input2;

    if (input1 > input2)
    {
        large = input1;
        small = input2;
    }
    else
    {
        large = input2;
        small = input1;
    }
    int result = large;
    for (; result >= 10; result = result / small)
    {
        // cout << result << endl;
    }
    cout << result << endl; // 7

    large = (result + small) * large;
    for (; ((result + small) % 9 == 0) || (large >= 0); large -= (result + small))
    {
        cout << large << endl;
    }

    return 0;
}