#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SpecialMatrix(vector<vector<int>>& matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            int v=matrix[i][0];
            if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j])
            {
                cout<<"\n not a special matrix"<<endl;
                break;
            }
        }
    }
    cout<<"\n special matrix"<<endl;
}
int main()
{
    int r,c;
    cout<<"\n enter the rows and coloumns";
    cin>>r>>c;
    vector<vector<int>> v(r, vector<int> (c));
    cout<<"\n enter the value in vector";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>v[i][j];
        }
    }
    SpecialMatrix(v);
}
