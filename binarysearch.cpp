#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int key)
{
    int start=0,end=size-1;
    int mid=start+(end -start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
}

int main() {
    int a[]={1,33,55,77,87};
    int index=binary_search(a,5,77);
    cout<<"index: "<<index<<endl;

return 0;
}