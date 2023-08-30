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
    if(large % 2==0)
    large--;
   { for(;large>=small;large-=4)
    cout<<large<<" ";
   }
    return 0;
}