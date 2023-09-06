#include<iostream>
using namespace std;
int main()
{
int small;
int large;
int input1;
int input2;
cout<<"enter small number ";
cin>>small;
cout <<"enter large number ";
cin>>large;
if(input1>input2){
small=input2;
large=input1;
}
else{
    small=input1;
    large=input2;
}
int result=large;
while(result>=small){if( result % 5==0 && result % 3==0 && result % 2!=0 ){
cout<<result<<" ";
}
result-=1;
}
    return 0;
}