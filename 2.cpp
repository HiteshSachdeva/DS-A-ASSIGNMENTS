#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,key,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>key;
    for(i=0;i<n;i++)
        if(arr[i]==key)
            {
                for(j=i;j<(n-1);j++)
                    arr[j]=arr[j+1];
                i--;
                n--;
            }
        for(i=0;i<n;i++)
            cout<<arr[i]<<endl;
}
