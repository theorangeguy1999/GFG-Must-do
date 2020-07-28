#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int r,c,unr=0,rot=0;
        queue<pair<int,int> > qrot;
        cin>>r>>c;
        int a[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                unr++;
                else if(a[i][j]==2)
                {
                    qrot.push({i,j});
                    rot++;}
            }
        }
        if(rot==0 and unr>0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(rot>0 and unr==0)
        {
            cout<<0<<endl;
            continue;
        }
        int mx=0;
        while (true)
        {
            
            queue<pair<int,int> > q;
            int i,j;
                    while(!qrot.empty()) //once a orange rottens its neighbours, it can no longer rotten
                    {
                        i=qrot.front().first;
                        j=qrot.front().second;
                        qrot.pop();

                        if(j+1<c and a[i][j+1]==1)
                        {
                            q.push({i,j+1});
                        }
                        if(i+1<r and a[i+1][j]==1)
                        {
                            q.push({i+1,j});
                        }
                        if(j-1>=0 and a[i][j-1]==1)
                        {
                            q.push({i,j-1});
                        }
                        if(i-1>=0 and a[i-1][j]==1)
                        {
                            q.push({i-1,j});
                        }                                                                        
                    
                    }
                if(q.empty()) //no more rottening
                {
                    break;
                }
                while (!q.empty())
                {
                    a[q.front().first][q.front().second]=2;
                    qrot.push({q.front().first,q.front().second});
                    q.pop();
                }
            mx++;
        
        }
        int flg=0;
       for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(a[i][j]==1)
                {
                    flg=1; //if a unrotten orange is still present
                    break;
                }
            }
            if(flg)
            break;
        }
        if(flg)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<mx<<endl;
        }
        
    }
    
}
