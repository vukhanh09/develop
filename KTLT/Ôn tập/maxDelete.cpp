#include<bits/stdc++.h>

using namespace std;
void Delete(int arr[],int n,int m){
      int tmp = m;
      stack<int> s;
      s.push(arr[0]);
      for(int i=1;i<n;i++){
            while(!s.empty()&&(arr[i]>s.top())&&(m!=0)){
                  s.pop();
                  m--;
            }
            s.push(arr[i]);
      }
      int x[100];
      for(int i=0;i<n-tmp;i++){
            x[i] = s.top();
            s.pop();

      }
      for(int i=n-tmp-1;i>=0;i--){
           cout<<x[i]<<" ";
      }
}
int main(){
      int n;
      cin>>n;
      int a[n];
      int sum=0;
      for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
      }

      Delete(a,n,3);


}