#include<iostream>
using namespace std;
int main()
{
    char s[]="h";
    //if we write *s="h" then it will print h but with problems
    char s1[100];
    cout<<s<<endl;

    
    cin.getline(s1,100);
    cout<<s1;
    
    return 0;
}