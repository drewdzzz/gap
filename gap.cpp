#include <stdio.h>


struct t
{
char a;
char b[5];
int y;
int f;
int g;
int u;
};
int main()
{
    t obj;
    long adress = long(&obj);
    printf("%ld", long(&obj.f) - adress);
    return 0;
}
