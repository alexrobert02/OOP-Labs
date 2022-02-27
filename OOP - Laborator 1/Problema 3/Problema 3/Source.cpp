#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string.h>

void interclasare(char string1[], char string2[]) 
{
    char string_aux[21];
    strcpy(string_aux, string1);
    strcpy(string1, string2);
    strcpy(string2, string_aux);
}
void ordonare(char string[][21], int n) 
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (strlen(string[i]) < strlen(string[j]))
                interclasare(string[i], string[j]);
}
int main() {
    char string[256];
    char separator[] = " ";
    char a[21][21];
    int n = 0;
    scanf("%[^\n]s", string);
    char* p = strtok(string, separator);
    while (p != NULL) 
    {
        strcpy(a[n], p);
        n++;
        p = strtok(NULL, separator);
    }
    ordonare(a, n);
    for (int i = 0; i < n; i++)
        printf("%s\n", a[i]);
    return 0;
}
