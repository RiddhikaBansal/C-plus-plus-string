#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[10]="234";
    char s2[10]="23.56";

    int x=strtol(s1,NULL,10);
    float y=strtof(s2,NULL);

    cout<<x<<endl<<y<<endl;
    return 0;
}