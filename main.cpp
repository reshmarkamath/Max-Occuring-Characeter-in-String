#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
char getMaxOccChar(char* str)
{

 int n=strlen(str);
 int max=0;
 char result;
 int count[ASCII_SIZE]={0};

 for(int i=0;i<n;i++)
 {
   count[str[i]]++;
   if(max<count[str[i]])
   {
      max=count[str[i]];
      result=str[i];
   }

   }

return result;
}
int main()
{
    char s[100];
    cout<<"Enter the string:";
    cin>>s;
    cout<<"The Maximum Occuring Character of the given string is:"<<getMaxOccChar(s);
    return 0;
}
