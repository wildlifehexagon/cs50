#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void) {
    string name = get_string();

    if (name != NULL) {
        printf("%c", toupper(name[0]));

        for (int i = 0, n = strlen(name); i < n; i++) {
            if (name[i] == ' ') {
                printf("%c", toupper(name[i + 1]));
            }
        }

        printf("\n");
    }
}
