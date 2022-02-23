#include <iostream>
using namespace std;
 
int main(){
    int c1,c2,n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        c1=a/3;
        if((a%3)==1){
            c2=c1;
            c1++;
        }else if((a%3)==2){
            c2=c1;
            c2++;
        }else{
            c2=c1;
        }
        cout<<c1<<" "<<c2<<endl;
    }
}