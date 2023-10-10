#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c='f';
    if(isdigit(c))
    {
        printf("Yes");
    }
    else{
        printf("no");
    }
    

    return 0;
}