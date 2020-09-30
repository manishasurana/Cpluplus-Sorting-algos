#include <bits/stdc++.h>

using namespace std;

void swap_function(int *x, int *y);

void bubble_sort_function(int b[],int c);

int main()
{
    int n,i;
    cout<<"Enter the no";
    cin>>n;

    int arr[n];

    cout<<endl<<"Enter the elements of the array :";
    for(i=0;i<n;i++)
        cin>>arr[i];

    bubble_sort_function(arr,n);

    cout<<endl<<"The bubble sorted array is :";
    for(i=0;i<n;i++)
        cout<arr[i]<<" ";
    cout<<endl;
    return 0;
}

void bubble_sort_function(int b[],int c)
{
    int i,j;
    for(i=0;i<c;i++){
        for(j=0;j<c-i;j++)
            if(b[j]>b[j+1])
                swap_function(&b[j],&b[j+1]);
        }
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
