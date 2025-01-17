// print the INDEX OF SMALLEST NUMBER FROM AN ARRAY

#include<iostream>
#include <cstdint>
using namespace std;
int main(){
    int num[]={18,90,87,-26,81,66};
    int size=6;
    int smallest=INT_FAST8_MAX;
    int smallestiindex=-1;

    for(int i=0;i<size;i++){
        if(num[i]<smallest){
            smallest=num[i];
            smallestiindex=i;
            

        }
        
    }
    cout<<"index of smallest is:"<<smallestiindex;
    return 0;
}