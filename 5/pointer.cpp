#include <iostream>
#define BUFLEN 10
using namespace std;

int main(int argc, char *argv[])
{
    int arr[BUFLEN];
    int *p;
    int a, i;
    for (i=10; i<BUFLEN; i++)
        arr[i] = 10 - i;

    a = 5;
    p = &a; // a의 주소값

    cout << "a = " <<  a << endl;
    cout << "p = " <<  p << endl;
    // cout << "&a = " <<  &a << endl;
    // cout << "*p = " <<  *p << endl;
    // cout << "arr = " <<  arr << endl;

    *p = 10; // a의 값이 10으로 바뀌는 효과 / p의 주솟값은 그대로이다
    cout << "a = " <<  a << endl;
    cout << "p = " <<  p << endl;

    return 0;
}