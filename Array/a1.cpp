#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    int num[]={21,4,56,78,12,-90};
    int size=6;
    int smallest=INT8_MAX;

    for(int i=0;i<size;i++){
        if(num[i]<smallest){
            smallest=num[i];

        }
    }
    cout<< "smallest is:"<< smallest;

}