#include <iostream>
using namespace std;

int main()
{
  int small;
  int large;
  int small1;
  int large1;
  cout << "Write No.1:";
  cin >> small;
  cout << "Write No.2:";
  cin >> large;
  if (small > large)
  {
    large1 = small;
    small1 = large;
  }
  else
  {
    large1 = large;
    small1 = small;
  }
  cout << "small number is : " << small1 << " large number is : " << large1;
  for (;large1 >= 10; large1 = large1 / small1)
      cout << large1 << " ";

  return 0;
}