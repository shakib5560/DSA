// Linear Search

#include <iostream>
using namespace std;

int  myarry(int x[], int y, int t) {
  for (int i = 0; i < y; i++) {
    if (x[i] == t) {
      return i; 
    }
  }
  return 0;
}

int main() {
  int x[] = {5, 2, 4, 5, 7, 1, 3, 6, 9, 8};
  int size = sizeof(x) / sizeof(int);
  int target = 9;
  if(myarry(x, size, target) == 0){
    cout << "-1";
  } else{
    cout << "index, value: " << myarry(x, size, target) << ", " << x[myarry(x, size, target)];
  }
}

