#include<iostream>
using namespace std;
int main()
{
       string str="how many   WORDS-7";
       int vowels=0,consonants=0,space=0;

       for(int i=0;str[i]!='\0';i++)
       {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
         vowels++;

        else if(str[i]==' ')
        space++;

        else
        consonants++;

       }
       cout<<vowels<<endl;
       cout<<space<<endl;
       cout<<consonants<<endl;
 
 return 0;
}