#include<bits/stdc++.h>
using namespace std;

int main(){
      string str;
      cin>>str;
      map<char,int> M;
      for(int i=0;i<str.length();i++){
            if(M[str[i]]==0){
                  M[str[i]] = 1;
            }
            else{
                  M[str[i]]++;
            }
      }

      for(auto it=M.begin();it!=M.end();it++){
            cout<<(*it).first<<" "<<(*it).second<<"\n";
      }
}