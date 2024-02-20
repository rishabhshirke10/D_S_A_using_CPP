#include<iostream>
#include<math.h>
using namespace std;

int main() {
int i=0,ans=0,n;
cin>>n;

while(n!=0){
    int digit=n%10;
    if(digit==1){
        ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    
}
cout<<ans<<endl;
return 0;
}