#include<bits/stdc++.h>

using namespace std;
double sum(int n){
      if(n==1){
            return 1.0;
      }
      int k=0;
      for(int i=1;i<=n;i++){
            k+=i;
      }
      return 1*1.0/k+sum(n-1);
}
int main(){
      int n;
      cin>>n;
      cout<<sum(n);
      cout<<"\n";;
}