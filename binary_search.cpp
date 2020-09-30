#include <bits/stdc++.h>

using namespace std;

int binary_search_function(int b[],int x,int y);

int main()
{
    int n,i,key,pos;
    cout<<"Enter:";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements";
    for(i=0;i<n;i++)
        cin<<arr[i];

    cout<<"Enter to be searched";
    cin>>key1;

    pos=binary_search_function(arr,n,key);
    if(pos==-1)
        cout<<"not found";
    else
        cout<<"The element occur at "<<pos<<" "<<"position in the array";

    return 0;
}

int binary_search_function(int b[],int x,int y)
{
    int low=0,high=x-1,mid;

    while(high>=low){

        mid=low+(high+low)/2;

        if(y=b[mid]){
            return mid;
        }
        else if(y>b[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;

}
