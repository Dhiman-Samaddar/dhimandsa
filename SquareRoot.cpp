#include <iostream>
using namespace std;
int rootSqure(int n)
{
    int s =0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
       int squar = mid*mid;
       if(squar==n)
       {
           return mid;
       }
       else if(squar>n)
       {
           ans = mid;
           e = mid -1;
       }
       else {
           s = mid +1;
       }
       mid = s + (e-s)/2;
    }
    return ans;
}


int main()
{
    int n;
    cout<<"enter the root element "<<" "<<endl;
    cin>>n;
    cout<<"root squre is :"<<rootSqure(n);
    
    
    
    
}