#include<iostream>
using namespace std;

bool binarysearch(int arr[],int n,int key){
int s = 0;
int e = n-1;
int mid = s+e/2;
while(s<=e)
{
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
{
    s = mid+1;
}
else {
    e = mid-1;
}
mid=s+e/2;

}
return mid;
}
int main()
{
    int arr[5]={10,20,30,40,50};
    cout<<"enter the element";
    int key;
    cin>>key;
    int found=binarysearch(arr,5,key);
    if(found){
        cout<<"element is present"<<" "<<endl;

    }
    else{
        cout<<"element is not present in the array"<<" "<<endl;
    }
}