#include <iostream>
using namespace std;

int main()
{

  int i = 17;

  cout << "Enter Number ";
  // cout<<" ";

  cin >> i;

  for (; i >= 1; i--)
  {
    if (i % 2 != 0)
    {//odd number only
      cout << i;
    }{
      if(i==1){
        cout<<".";}
      else
      {cout<<" ";}
    

    }
  }

  return 0;
}