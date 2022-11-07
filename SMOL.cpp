#include<iostream>
using namespace std;
int main(){
    long long int n,k;
    int a;
    cin>>a;
    while(a--){
        cin>>n>>k;
        if(k==0) cout<<n<<endl;
        else cout<<n%k<<endl;
    }

}
