#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str="how you";
    string st1="hello ld";
    
    str.insert(3," area",4);
    st1.insert(6,"wor");
    
    string st2="hello ld";
    st2.replace(3,4,"hdi");
    cout<<str<<endl;
    cout<<st1<<endl;
    cout<<st2<<endl;

    str.swap(st1);

    cout<<str<<endl;
    cout<<st1<<endl;
    
    return 0;
}