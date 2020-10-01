#include <bits/stdc++.h>

using namespace std;

int binary_search_function(int b[],int x,int y);

int main()
{
    int n,i,key,pos;
    cout<<"BINARY SEARCH :"<<endl;
    cout<<"Enter the no of terms in the array:";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array in sorted order:";
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter the element to be searched in the array using binary search:";
    cin>>key;

    pos=binary_search_function(arr,n,key);
    if(pos==-1)
        cout<<"Element doesn't found in the given array";
    else
        cout<<"The element occur at "<<pos+1<<" "<<"position in the array";

    return 0;
}

int binary_search_function(int b[],int x,int y)
{
    int low=0,high=x-1,mid;

    while(high>=low){

        mid=low+(high-low)/2;

        if(y==b[mid]){
            return mid;
        }
        else if(y>b[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;

}
