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
;
    return 0;
}
