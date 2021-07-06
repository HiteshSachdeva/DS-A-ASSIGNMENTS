#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>& nums)
{
	for (int i = 0; i < nums.size(); i++)
    {
        reverse(nums[i].begin(),nums[i].end());
    }
	for (int i = 0; i < nums.size(); i++)
    {
		for (int j = 0; j < nums[0].size(); j++)
		{
            nums[i][j]=1-nums[i][j];
        }
	}
	return nums ;
 }

int main()
{
    int r,c;
    cout<<"\nenter the rows and coloumns";
    cin>>r>>c;
    vector<vector<int>> v1(r, vector<int> (c));
    vector<vector<int>> v2(r, vector<int> (c));
    cout<<"\nenter the value in vector";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>v1[i][j];
        }
    }
    v2=transpose(v1);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
}
