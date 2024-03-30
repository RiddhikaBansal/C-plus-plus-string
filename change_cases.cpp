#include<iostream>
using namespace std;
int main(){
    string str="WeLcome7";
    for(int i=0;str[i]!='0';i++)
    {
        if(str[i]>65 && str[i]<=90)//if(str[i]>=97 && str[i]<=122)

        str[i]=str[i]+32;
    }
    cout<<str<<endl;
    return 0;
}