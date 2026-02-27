#include<iostream>
using namespace std;

bool ispossible(int arr[], int n ,int m ,int mid)
{
    int studentcount = 1;
    int pagecount = 0;
    for(int i ;i<n;i++)
    {
        if(arr[i]+pagecount<=mid)
        {
            pagecount=pagecount+arr[i];
        }
        else {
            studentcount++;
            if(studentcount>m||arr[i]>mid)
            {
                return false;
            }
        }
    }
    return true;
}




int bookAllocation(int arr[],int n,int m)
{
    int s = 0;
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    int e = sum;
    int mid = s + (s-e)/2;
    int ans = -1;
    while(s<=e)
    {
        if(ispossible)
        {
            s = mid + 1;

        }
        else{
            ans= mid ;
            e = mid -1;

        }
        mid = s + (s-e)/2;
    }
    return ans;

}

int main()
{
    int arr[4]={10,20,30,40};
    int m = 2;
    cout<<"like we have foure book and each book page is 10,20,30,40 so that condition is every student get minimum book page "<<endl;
    cout<<bookAllocation(arr, 4,2);
}