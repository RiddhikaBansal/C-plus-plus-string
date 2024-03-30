#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1="programming";
    
    char str[10];
    
    str1.copy(str,3);
    str[3]='\0'; 
    cout<<str<<endl;
    cout<<str1.find("ra")<<endl;
    cout<<str1.find_first_of("a")<<endl;
    cout<<str1.find_last_of("a")<<endl;
    return 0;
}