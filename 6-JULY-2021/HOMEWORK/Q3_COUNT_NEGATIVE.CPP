 #include<bits/stdc++.h>
 using namespace std;
 int countNegatives(vector<vector<int>>& grid)
{
    int count=0;
    for(int i=0;i<grid.size();i++)
        for(int j=(grid[0].size()-1);j>=0;j--)
        {
            if(grid[i][j]>=0)
                break;
            else count++;
         }
     return count;
}
int main()
{
    int r,c,d=0;
    cin>>r>>c;
    vector<vector<int>> v(r,vector<int> (c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>v[i][j];
        }
    }
    d = countNegatives(v);
    cout<<d<<endl;
}
