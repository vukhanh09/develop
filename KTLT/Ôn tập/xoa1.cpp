#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;


int main(){
      char str[]="";
      int i=0;
      while(str[i]!='\0')
            i++;
      str[--i]='\0';
      cout<<str;
}