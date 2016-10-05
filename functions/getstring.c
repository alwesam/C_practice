#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//#define UINT_MAX   10, get UINT MAX

typedef char* string;

string GetString(void) {
    // growable buffer for chars
    string buffer = NULL;
    // capacity of buffer
    unsigned int capacity = 0;
    // number of chars actually in buffer
    unsigned int n = 0;
    // character read or EOF
    int c;
    // iteratively get chars from standard input
    while ((c = fgetc(stdin)) != '\n' && c != EOF)
    {
        // grow buffer if necessary
        if (n + 1 > capacity)
        {
            // determine new capacity: start at 32 then double
            if (capacity == 0)
                capacity = 32;
            else if (capacity <= (UINT_MAX / 2))
                capacity *= 2;
            else
            {
                free(buffer);
                return NULL;
            }
            // extend buffer's capacity
            string temp = realloc(buffer, capacity * sizeof(char));
            if (temp == NULL)
            {
                free(buffer);
                return NULL;
            }
            buffer = temp;
        }
        // append current character to buffer
        buffer[n++] = c;
    }
    // return NULL if user provided no input
    if (n == 0 && c == EOF)
        return NULL;
    // minimize buffer
    string minimal = malloc((n + 1) * sizeof(char));
    strncpy(minimal, buffer, n);
    free(buffer);
    // terminate string
    minimal[n] = '\0';
    // return string
    return minimal;
}

int main(void)
{
  string boo = GetString();
  printf("You entered: %s\n", boo);

}
