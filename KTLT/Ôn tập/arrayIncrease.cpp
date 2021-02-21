#include<iostream>
using namespace std;

int check(int a[],int n){
      if(n==0){
            return 1;
      }
      if(a[n]<=a[n-1]){
            return check(a,n-1);
      }
      else{
            return 0;
      }
}

int main(){
      int a[]= {10,9,8,0,6,5,4};
      int n = 6;
      cout<<check(a,n);
}