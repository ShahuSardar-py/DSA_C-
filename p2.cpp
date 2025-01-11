//star pattern sqaure
#include<iostream>
using namespace std;

int main() {
    int star;
    cout<<"enter number of stars";
    cin>> star;
    for(int i=1;i<=star;i++){
        for(int j=1;j<=star;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;

    
    }
    return 0;
    
}