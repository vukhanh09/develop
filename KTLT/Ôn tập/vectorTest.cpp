#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
template <typename T>
void PrintV(T a){
      for(auto i=a.begin();i!=a.end();i++){
            cout<<*i<<" ";
      }
      cout<<"\n";
}

int main(){
      int p[] = {4,2,6,10,65,0,98};
      vector<int> vt(p,p+7);
      auto st =[](int a,int b){
            if(a<b){
                  return 1;
            }
            return 0;
      };
      sort(vt.begin(),vt.end(),st);
      PrintV(vt);

      vt.erase(vt.begin());
      PrintV(vt);
      auto it = max_element(vt.begin(),vt.end());
      cout<<*it<<"\n";

      
      list<int> ls(vt.begin(),vt.end());
      ls.insert(ls.begin(),100);
      PrintV(ls);
      ls.sort();
      PrintV(ls);
      auto isOdd = [](int i){
            return i%2==1;
      };
      auto x = find_if(ls.begin(),ls.end(),isOdd);
      cout<<*x;
}