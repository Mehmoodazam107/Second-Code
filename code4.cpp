#include <iostream>
using namespace std;

int main()
{

  // int 1st;
  // int 2nd;
  int num1;

  int num2;

  cout << "enter 1st no?";
  cin >> num1;
  cout << "enter 2nd no?";
  cin >> num2;
  int small;
  int large;
  if (num1 < num2)
  {
    cout << "num1 is small";
    large = num2;
    small = num1;
  }
  else if (num1 == num2)
  {
    cout << "they are equal";
  }
  else
  {
    cout << "num2 is large";
    small = num2;
    large = num1;
  }
  cout << endl;
  cout << "small number is " << small << " large number is : " << large;
  return 0;
}
