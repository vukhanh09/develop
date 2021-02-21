#include<iostream>

using namespace std;
void vidu(int*x,int y,int*z){
      x+=2;
      *x<<2;
      y>>2;
      *(z+1)*=2;
}

int main(){
      int M[]={1,2,3,4,5,6,7,8},i;
      //vidu(&M[0],M[2],M+4);
      // for(int i=0;i<8;i++){
      //       cout<<M[i]<<" ";
      // }

      cout<<&M[5]<<" "<<M+5;
}