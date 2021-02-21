#include<iostream>
#include<queue>

using namespace std;
void PrintV(priority_queue<int> a){
      while(!a.empty()){
            int x = a.top();
            cout<<x<<" ";
            a.pop();
      }
      cout<<"\n";
}
int main(){
      priority_queue<int>Q;
      Q.push(5);
      Q.push(6);
      Q.push(7);
      Q.push(8);
      Q.push(9);
      PrintV(Q);



}