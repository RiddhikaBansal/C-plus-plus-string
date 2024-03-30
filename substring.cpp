#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="prgramming";
    char s2[10]="m";
    char s3[10]="k";

    cout<<strstr(s1,s2)<<endl;
    
    cout<<strstr(s1,s3)<<endl;
    return 0;

}