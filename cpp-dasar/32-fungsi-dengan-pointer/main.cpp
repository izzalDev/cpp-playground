#include <iostream>
using namespace std;

void fungsi(int *);

void fungsi(int *b)
{
    cout << "address b " << b << endl;
    cout << "nilai b " << *b << endl;
}

int main()
{
    int a = 5;
    cout << "addres a " << &a << endl;
    cout << "nilai a " << a << endl;

    fungsi(&a);
    return 0;
}