#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int ,int> pairs;
int main()
{
    ll n,weight,value;
    pair <int ,int> x;
    x=make_pair(12,23);
    set<pairs> s;

    s.insert(x);
    s.insert(make_pair(11,23));
    s.insert(make_pair(12,233));
  for(auto  &y:s)
  {
      cout<<"("<<y.first<<","<<y.second<<") ";
  }
}
