#include<iostream>
#include<string>
#include<map>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main()
{
int sum=-11;
unordered_set<int> us;
int arr[]={5,6,-6,0,4,-5};
int flag=0;
for (int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
{
    if(us.find(sum-arr[i])==us.end())
    {
        us.insert(arr[i]);
        flag=1;
    }
    else
    {
        flag=0;
        cout<<arr[i]<<" "<<sum-arr[i]<<"  pair exists";
        break;
    }
}
if(flag==1)
{
cout<<"No pair exist";
}
    
}