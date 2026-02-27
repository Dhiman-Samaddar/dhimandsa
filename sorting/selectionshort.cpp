#include<iostream>
using namespace std;

int printarray(int arr[],int n)
{
    for(int i ; i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int selectionShort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int minIndex = i;
        for(int j = i+1; j<n;j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex= j;
            }

        }
        swap(arr[i],arr[minIndex]);
    }
}
int main()
{
    int arr[5]={30,10,80,60,30};
    cout<<"sorting array is :" <<endl;
    cout<<selectionShort(arr,5);
    cout<<printarray(arr,5);


}