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


#With the help of swap


#include <iostream>
using namespace std;

void logic(int a[], int b){
    int s = 0;
    int e = b-1;
    while(s < e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
}


int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int b = sizeof(a)/sizeof(int);
    logic(a,b);
    for(int i=0; i<b; i++){
        cout << a[i] << " ";
    }
}