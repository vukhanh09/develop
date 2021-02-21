#include<iostream>
using namespace std;

typedef struct book{
      int data[10];
};

int main(){
      int *a = new int[10];
      int *b = new int[10];

       a= b;
      cout<<&a[3]<<" "<<&b[3];

      int c[10],d[10];
      book a1,a2;
      cout<<endl;
      a1=a2;
      cout<<&a1<<" "<<&a2;
}