#include <stdio.h>
#include <ctype.h>

int main()
{
    char x[] = "My name is MD.REDOY SARDER. I am a Software Engineer.";
    char y[] = "Hello";
    
    for (int i = 0; i < sizeof(x); i++)
    {
        int z = x[i];
        
        printf("%c\n",z);
    }
    

    return 0;
}