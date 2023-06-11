#include <stdio.h>

void strlen(const char* str) 
{
    int l = 0;
    while (str[l] != '\0') 
    {
      l++;
    }
    for (int i = l - 1; i >= 0; i--) 
    {
      printf("%c", str[i]);
    }
    printf("\n");
}

int main() 
{
    const char* str = "Hello, World!!";
    strlen(str);

    return 0;
}
