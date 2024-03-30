#include<iostream>

#include<cstring>

using namespace std;

int main()

{
    char s[100];

    cout<<"enter a string"<<endl;

    cin.getline(s,100);

    cout<<strlen(s)<<endl;

    return 0;

}