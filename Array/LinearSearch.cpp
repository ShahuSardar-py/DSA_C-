//Linear Search
#include<iostream>
using namespace std;


int LinearSearch(int arr[],int size, int target) {
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    
    }
    return -1;
}
int main(){
    int id[]={1,5,8,2,9,8,3,4,6};
    int tar=4;
    int sz=9;
    cout<< LinearSearch(id,sz,tar)<<endl;



}
