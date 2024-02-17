#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main() {
    int key;
    int array[10]={1,65,3,42,7,1,44,-3,2};
    cout<<"Enter the element to search for: "<<endl;
    cin>>key;

    bool answer = search(array,10,key);

    if(answer){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

return 0;
}