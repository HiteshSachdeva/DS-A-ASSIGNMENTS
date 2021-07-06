#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& A)
{
        int i,j,n=A[0].size(),m=A.size();
        vector<vector<int>> ar(n,vector<int>(m));
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    ar[j][i]=A[i][j];
                }
            }
        return ar;
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> b(r,vector<int> (c));
    vector<vector<int>> t(r,vector<int> (c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    t=transpose(b);
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
