#include <iostream>
using namespace std;

int logic(int a[], int b){
    for(int i = b-1; i>=0; i-- ){
      cout << a[i] << " ";
    }
    return 0;
}


int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int b = sizeof(a)/sizeof(int);
    logic(a,b);
}