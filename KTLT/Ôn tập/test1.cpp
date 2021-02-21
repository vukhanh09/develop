#include<bits/stdc++.h>

using namespace std;

int a=5,b=12;
void swap(int a,int b){
      a=a+b;b=a-b;a=a-b;
}
int main(){
      int a=3,b=0;
      b=a++;
      b=a++;
      cout<<b;
      
}