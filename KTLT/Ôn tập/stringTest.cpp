#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
      string s1,s2("test512");
      cout<<s2<<endl;
      int pos= s2.find("5");
      cout<<s2.substr(pos,10);

      int x = s2.length();
      cout<<x;
}