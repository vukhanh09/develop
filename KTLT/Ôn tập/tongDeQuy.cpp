#include<bits/stdc++.h>
using namespace std;

int F(int n){
      if(n<=3){
            return n;
      }
      return F(n-1)+F(n-2)+F(n-3);
}

int sum1(int n){
      int res=0;
      for(int i=1;i<=n;i++){
            res+=F(i);
      }
      return res;
}
int main(){
      int n;
      cin>>n;
      cout<<sum1(n);
}