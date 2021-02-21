#include<iostream>
using namespace std;

void check(int *a,int n,int k){
      if(k>n/2){
            return;
      }
      else{
            int tmp =  a[n-k];
            a[n-k] = a[k];
            a[k] = tmp;
            check(a,n,k+1);
      }
}


int main(){
      int a[]={1,2,3,4,5,6,7,8,9};
      int n =  sizeof(a)/sizeof(int);
      check(a,n-1,0);

      for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
      }
}