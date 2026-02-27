#include<iostream>
using namespace std;

int  firstposition(int arr[],int n,int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]<key)
        {
            s = mid + 1;
        }
        else {
            e = mid -1;
        }

         mid = s + (e-s)/2;

    }
    return ans;
}

int  lastposition(int arr[],int n,int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]<key)
        {
            s = mid + 1;
        }
        else {
            e = mid -1;
        }

         mid = s + (e-s)/2;

    }
    return ans;
}

int main()
{
    int arr[5]={1,2,3,3,4};
    cout<<"enter the key value "<<"  "  <<endl;
    int key ;
    cin >>key;
    cout<<"first position of a element "<<firstposition(arr, 5, key) <<endl;
    cout<<"last position of a element "<<lastposition(arr, 5, key) <<endl;
}