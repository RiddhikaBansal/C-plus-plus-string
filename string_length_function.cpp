#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"type string here:";
    getline(cin,str);
    
    cout<<str.length()<<endl;
    cout<<str.capacity()<<endl;
    str.resize(30);
    cout<<str.capacity()<<endl;
    
    cout<<str.max_size()<<endl;
   
    if(str.empty())
    cout<<"empty";
    else
    cout<<str<<endl;

    str.clear();
    cout<<str.length()<<endl;
    return 0;

}