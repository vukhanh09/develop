#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void check(char s[]){
      int n= strlen(s);
      for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
      }
      int tmp=1;
      for(int i=0;i<n;i++){
            if(s[i]==s[n-i-1]){
                  continue;
            }
            else{
                  tmp=0;
                  break;
            }
      }

      if(tmp){
            printf("La chuoi Palindrome");
      }
      else{
            printf("Khong la chuoi Palindrome");
      }
}


int main(){
      char s[20];
      cin>>s;
      check(s);
}