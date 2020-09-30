#include <bits/stdc++.h>

using namespace std;

void swap_function(int *x, int *y);

void selection_sort_function(int b[],int c);

int main()
{
    int n,i;
    cout<<"Enter the no";
    cin>>n;

    int arr[n];

    cout<<endl<<"Enter the elements";
    for(i=0;i<n;i++)
        cin>>arr[i]+1;

    selection_sort_function(arr,n);

    cout<<endl<<"The selection sorted array is :";
    for(i=0;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

void selection_sort_function(int b[],int c)
{
    int min_index=0,i,j;
    for(i=0;i<c;i++){
        for(j=i+1;j<c;j++){
            if(b[j]<b[min_index])
                min_index=j+1;
        }
        swap_function(b[i],b[min_index]);
    }
}

void swap_function(int *x,int *y)
{
    int temp;
    temp=x;
    *x=*y;
    *y=temp;
    return;
}
