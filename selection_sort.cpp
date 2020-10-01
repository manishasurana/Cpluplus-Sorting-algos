#include <bits/stdc++.h>

using namespace std;

void swap_function(int *x, int *y);

void selection_sort_function(int b[],int c);

int main()
{
    int n,i;
    cout<<"SELECTION SORT :"<<endl<<endl;
    cout<<"Enter the no of terms in the array:";
    cin>>n;

    int arr[n];

    cout<<endl<<"Enter the elements of the array :";
    for(i=0;i<n;i++)
        cin>>arr[i];

    selection_sort_function(arr,n);

    cout<<endl<<"The selection sorted array is :";
    for(i=0;i<n;i++)
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
                min_index=j;
        }
        swap_function(&b[i],&b[min_index]);
    }
}

void swap_function(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
