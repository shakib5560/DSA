#include <iostream>
#include <string>
#include <vector>
using namespace std;


class VectorsArry
{
public:
    int x;
void display()
{
    // vector<char> vec (4, 'a');
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " " << "Hello World" << endl;  
}
}

void display2(){
    vector<int> number;
    number.push_back(10); // ADD VALUE FIRST
    number.push_back(20);
    number.push_back(30);
    number.push_back(40);

    number.pop_back(); //DELECT LAST VALUE

    cout << number.front() << endl; //FIRST VALUE
    cout << number.back() << endl; //LAST VALUE
    cout << number.size() << endl; //SIZE OF VECTOR
    cout << number.capacity() << endl; //CAPACITY OF VECTOR
    cout << number.empty() << endl; //CHECK IF VECTOR IS EMPTY OR NOT
    cout << number.at(1) << endl; //VALUE AT INDEX 1

    for (int i = 0; i < number.size(); i++)
    {
        cout << number[i] << endl;
}
}};


int main()
{
    VectorsArry obj;
    obj.display2();
    return 0;
}