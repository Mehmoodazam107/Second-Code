#include <iostream>
using namespace std;
int main()
{
    int credithours;
    cout << " if the credit hours are ? ";
    cin >> credithours;
    
    if (credithours < 12)
    {
        cout << "you have to select at least 12 credit hours";
    }
    else if (credithours >= 12) {cout << "he is register";
    }
    else if(credithours<0){cout<<"he is not register";
        }
    return 0;
}