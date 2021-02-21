#include<iostream>
using namespace std;

void check(int n){
      cout<<n%10<<endl;
      if(n>10){
            check(n/10);
      }
}


int main(){
      int n;
      cin>>n;
      check(n);
}