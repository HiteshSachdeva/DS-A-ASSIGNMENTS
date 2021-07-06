#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> v(r,vector<int> (c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>v[i][j];
        }
    }
    int min,max;
    int k=0,res;
    for(int i=0;i<r;i++)
    {
        min=INT_MIN;max=INT_MAX;k=0;
        for(int j=0;j<c;j++)
        {
            if(v[i][j]<max)
            {
                max=v[i][j];
                k=j;
            }
        }
        for(int j=0;j<c;j++)
        {
            if(v[j][k]>min)
            {
                min=v[j][k];

            }
        }
        if(min==max)
        {
            cout<<min;
            break;
        }
    }
return 0;
}
