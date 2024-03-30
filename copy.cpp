#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20];
    char s2[20];
    cout<<"enter a string"<<endl;
    cout<<"s1 is"<<endl;
    cin.getline(s1,20);
    
    strncpy(s2,s1,4);
    cout<<"s2 is\n"<<s2<<endl;
    return 0;
}