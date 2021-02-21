#include<bits/stdc++.h>

using namespace std;
int main(){
      // vector<pair<int,int>>v;
      // v.push_back({12,5});
      //   v.push_back({10,17});
      //     v.push_back({3,2});

      // cout<<v[1].second-v[2].first;
      priority_queue<pair<int,int>>Q;
      Q.push({15,2});
      Q.push({3,15});
      Q.push({10,7});
      Q.push({5,19});
      cout<<Q.top().first<<" ";
      Q.pop();
      cout<<Q.top().second;
}