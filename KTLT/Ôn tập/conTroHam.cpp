#include<iostream>

using namespace std;

void swaP(int &a,int &b){
      int tmp = a;
      a = b;
      b = tmp;
}

void Parent(void (*p)(int &,int&)){
       int a = 5,b=10;
      p(a,b);
      cout<<a<<b;

}
int main(){
      void (*p)(int &,int &) =  swap;
      int a = 5,b=10;
      (*p)(a,b);
      cout<<a<<b<<endl;
        p(a,b);
      cout<<a<<b;

}