#include <stdio.h>

void fun(int *ar, int n)
{ // ar[] or *ar

    // recived array from main
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    int sz = sizeof(ar) / sizeof(int);

    fun(ar, sz); // sent array name and arguments

    return 0;
}