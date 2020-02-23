/* 
const 关键字
 */

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    area = LENGTH*WIDTH;
    cout<<area;
    cout<<NEWLINE;
    return 0;
}
