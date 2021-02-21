#include<iostream>
using namespace std;

struct HocSinh{
      char *name;
      float gpa;
};
void changeName(HocSinh &b){
      if(b.name[0]>='A'&&b.name[0]<='Z'){
            b.name[0]=(char) b.name[0]-('A'-'a');
      }     
}

int main(){
      char *c="Nguyen Van A";

      struct HocSinh hs;
      hs.name=c;
      changeName(hs);
      //char a = (char)hs.name[0]-('A'-'a');
      std::cout<<c;
}
