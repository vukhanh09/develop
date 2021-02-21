#include<iostream>
using namespace std;
int main(){
      int n=0,m=0;

      auto func = [=](int a)mutable{
            m=++n+a;
      };
      func(4);
      cout<<m<<" "<<n;
}