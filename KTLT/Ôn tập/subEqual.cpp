#include<bits/stdc++.h>

using namespace std;
bool isSubnet(int arr[],int n,int sum){
      if(sum==0)return true;
      if(n==0&&sum!=0)return false;

      if(arr[n-1]>sum){
            return isSubnet(arr,n-1,sum);
      }
      return isSubnet(arr,n-1,sum)||isSubnet(arr,n-1,sum-arr[n-1]);
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
      if(sum%2==1){
            cout<<0;
      }
      else{
            cout<<isSubnet(a,n,sum/2);
      }


}