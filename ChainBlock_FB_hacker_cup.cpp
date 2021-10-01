#include <bits/stdc++.h>
//#define  long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    int ii=1;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b;

        vector<pair<int,int>>v;

        for(int i=0;i<n-1;i++)
        {
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        
        int ll;
        vector<int>aa;

        for(int i=0;i<n;i++)
        {
            cin>>ll;
            aa.push_back(ll);
        }

        int count=0;

        vector<int>visited(n+1,0);

        for(int i=0;i<n-1;i++)
        {
            if(aa[(v[i].first)-1]==aa[(v[i].second)-1])
            {
                visited[v[i].first]=1;
                visited[v[i].second]=1;
            }   
            else if((aa[(v[i].first)-1]!=aa[(v[i].second)-1] && (visited[v[i].first]==0 && visited[v[i].second]==0)))
            {
                count++;
            }
        }

        cout<<"Case #"<<ii<<": "<<count<<endl;
        ii++;

    }
}