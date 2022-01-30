#include<bits/stdc++.h>
using namespace std;


class unionByrank{
    public:
    unionByrank(int sz):root(sz),rank(sz){
        for(int i=0;i<sz;i++)
        {
            root[i]=i;
            rank[i]=i;
        }
    }
    int rootFind(int x)
    {
        while(root[x]!=x)
        {
            x=root[x];
        }
        return x;
    }
    void unionSet(int x,int y)
    {
        int rootx = rootFind(x);
        int rooty = rootFind(y);
        if(rootx!=rooty){
        if(rank[rootx]>rank[rooty])
        {
            root[rooty]=rootx;
        }
        if(rank[rootx]<rank[rooty])
        {
            root[rootx]=rooty;
        }
        else 
         {
             root[rooty]=rootx;
             rank[rootx]++;
         }
        }
    }
    bool connected(int x,int y)
    {
        return rootFind(x)==rootFind(y);
    }
    private:
            vector<int> root;
            vector<int> rank;
};
      

// Test Case
int main() {
    cout<<boolalpha;
    unionByrank uf(10);
    uf.unionSet(1, 2);
    uf.unionSet(2, 5);
    uf.unionSet(5, 6);
    uf.unionSet(6, 7);
    uf.unionSet(3, 8);
    uf.unionSet(8, 9);
    cout << uf.connected(1, 5) << endl;  // true
    cout << uf.connected(5, 7) << endl;  // true
    cout << uf.connected(4, 9) << endl;  // false
    // 1-2-5-6-7 3-8-9-4
    uf.unionSet(4, 9);
    cout << uf.connected(9, 4) << endl;  // tru
    
  
}