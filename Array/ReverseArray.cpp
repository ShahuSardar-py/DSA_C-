//REVERSE ARRAY USING 2 POINTTER ARRAY.
#include <iostream>
using namespace std;

void ReverseArray(int arr[], int sz) {
    int start=0;
    int end=sz-1;
    while(start< end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    ReverseArray(arr,size);
    for(int j=0;j<size;j++){
        cout<<arr[j]<< " ";
    }
    cout<<endl;
    
    return 0;
    
}