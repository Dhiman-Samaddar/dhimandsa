#include<iostream>
using namespace std;

int mountenArray(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    int m = s+e/2;
    while(s<e)
    {
        if(arr[m]<arr[m+1])
        {
            s=m+1;
        }
        else{
            e=m;
        }
        m = s+e/2;
    }
    return s;
}
int main()
{
    int arr[5]={1,6,3,4};
    cout<<"picElement is:"<<mountenArray(arr,5);
}