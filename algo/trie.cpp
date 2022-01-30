#include <bits/stdc++.h>

using namespace std;


struct trie{
    struct trie *children[26];
    bool endword;
};
struct trie *getnode(void)
{
    struct trie * newnode = new trie;
    for(int i=0;i<26;i++)
    {
        newnode->children[i]=NULL;
    }
    newnode->endword=false;

    return newnode;
}
void insert(struct trie* node, string s)
{
    int k;
        struct trie* p=node;
        for(int i=0;i<s.length();i++)
        {
            k='a'-s[i];
            if(p->children[k]==NULL)
            {
                p->children[k]=getnode();
            }
            p=p->children[k];
        }
        p->endword=true;
}
bool search(struct trie *node,string s)
{
    struct trie *p = node;
    int k;
    for(int i=0;i<s.length();i++)
    {
        k='a'-s[i];
        if(!p->children[k])
        {
            return false;
        }
        p=p->children[k];
    }
    return (p->endword && p);
}
int main()
{
    struct trie* node;
    node=getnode();
    insert(node,"hi");
    cout<<search(node,"hi");
}