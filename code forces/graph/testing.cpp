#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e6 + 10;
int n, m, k;
vector<int> vc[maxn];
bool mark[maxn];
void dfs(int v){
    mark[v] = 1;
    for(int u: vc[v])
	if(!mark[u])
	    dfs(u);
}
int main(){
    cin >> n >> m >> k;
    for(int u, v, i = 0; i < m; i++)
	cin >> u >> v;
	    u--, v--,
	    vc[u].push_back(v),
	    vc[v].push_back(u);
    int cnt = 0;
    for(int i = 0; i < n; i++)
	if(!mark[i])
	    dfs(i), cnt++;
    if(cnt > k)
	cout << -1;
    else
	cout << m - n + k;
}
