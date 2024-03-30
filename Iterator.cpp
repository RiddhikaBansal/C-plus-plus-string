#include<iostream>
using namespace std;
int main()
{
    string str="today";
    //for(int i=0;str[i]!='\0';i++)
    //{
    //    str[i]=str[i]-32;
    //}
    string::iterator it;

    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
        *it=*it-32;
    }
    
    cout<<endl;
    cout<<str; 

    return 0;
}