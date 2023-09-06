#include<ipostream>
using namespace std;
int main()
{
int large;
int small;
cout<<"enter small number";
cin>>small;
cout <<"enter large number";
cin>>large;
while(small>=0){
cout<<large<<endl;
large-=1;
}
    return 0;
}