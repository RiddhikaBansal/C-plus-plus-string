#include<iostream>
using namespace std;
int main()
{
    string email="john123@gmail";

    int i=email.find('@');

    string name=email.substr(0,i);

    cout<<"user name is "<<name<<endl;

    return 0;
}