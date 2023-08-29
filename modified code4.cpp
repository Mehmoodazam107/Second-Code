#include <iostream>
using namespace std;

int main()
{

    int small;

    int large;
    cout<<"small no is?";
    cin>>small;
    cout<<"large no is?";
    cin>>large;
    for(;large>small;large--)if(large % small !=0)
    {
        cout<<large;
    }
<<<<<<< HEAD
;
    return 0;
}
=======
  }

  return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
    int i = 17;
    cout << "Enter Number : ";
    cin >> i;
    for (; i >= 1; i--) {
        cout << " ";
        if (i % 2 != 0) {//odd number only
            cout << i;
        }
    }
    cout << ".";
    return 0;
}

*/
>>>>>>> 4733f474f4c0ca4f4803d21c24a19bd689b41d7f
