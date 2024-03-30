#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char s3[100]="x=1&y=3&z=9";
    char *token2=strtok(s3,"=&");

    while(token2!=NULL)
    {
        cout<<token2<<endl;
         
        token2=strtok(NULL,"=&");
}
return 0;
}