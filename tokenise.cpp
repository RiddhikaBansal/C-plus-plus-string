#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[100]="x=1;y=3;z=9";
    
    char *token=strtok(s1,"=;");

    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
       
    }
    return 0;
}



