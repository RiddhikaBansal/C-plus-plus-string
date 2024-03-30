#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char s1[20];
    char s2[20];
    cout<<"enter string 1 here:"<<endl;
    cin.getline(s1,20);
    cout<<"enter string 2 here:"<<endl;
    cin.getline(s2,20);
    strncat(s1,s2,4);
    cout<<s1<<endl;
    strncat(s1,s2,10);
    cout<<s1<<endl;
    return 0;
}
