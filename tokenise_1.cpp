#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s2[100]="x=1y=3z=9";
    char *token1=strtok(s2,"=;");
    while(token1!=NULL)
    {
    cout<<token1<<endl;
    token1=strtok(NULL,"=;");}
    return 0;
    }