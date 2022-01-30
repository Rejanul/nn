#include<bits/stdc++.h>
using namespace std;

//1286 A garland unsolved
int main()
{
    int n,odd=0,even=0,complexity=0,p=0,q=0,t,r=0,ave=0,need=0,a[300000],move=0;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int array[3]={0,0,0};
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]%3==0)
                array[0]++;
            else if (a[j]%3==1)
                array[1]++;
            else
                array[2]++;
        }
            ave = n/3;
          /// cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<endl;
        need = 0;
          for(int k =0;k<3;k++)
          {
              if(array[k]<ave)
              {
                  move = array[(k+2)%3]-ave;
                  if(move<ave-array[k]&& move>0)
                  {
                      need +=move+(ave-array[k]-move)*2;
                      array[(k+1)%3]-=move;
                      array[(k+2)%3]-=(ave-array[k]-move);
                  }
                  else if (move>ave-array[k])
                  {
                      need += ave-array[k];
                    array[(k+1)%3]-=ave-array[k];
                  }
                  

              }
          }
          cout << need << endl;
    }

    return 0;

 }
