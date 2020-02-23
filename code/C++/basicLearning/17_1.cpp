/* 
    关于extern

 */
#include<iostream>

int count;
extern void write_extern();

int main(int argc, char const *argv[])
{
    /* code */
    count = 5;
    write_extern();
    return 0;
}
