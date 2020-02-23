/* 
关于#define 预处理器

 */

#include<iostream>
using namespace std;

#define LENGTH 10 
#define WIDTH 5
#define NEWLINE '\n'


int main(int argc, char const *argv[])
{
    /* code */
    int area;

    area = LENGTH*WIDTH;
    cout<<area;
    cout<<NEWLINE;
    cout<<area;
    return 0;
}
