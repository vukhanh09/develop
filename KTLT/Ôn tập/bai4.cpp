#include<iostream>
using namespace std;

int main(){
      int i=10;
      int j=20;
      const int*ptr=&i;
      cout<<*ptr<<endl;
      //*ptr=100;
      cout<<*ptr;


}
