#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i,j,k;
    for (i = 1; i <= n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    for (i = 2; i <= n; i++)
    {
        /* code */
        k=arr[i];
        j=i-1;
        while (j>0 && arr[j]>k)
        {
            /* code */
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=k;
    }
    for (i = 1; i <= n; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
}
