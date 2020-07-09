#include <stdio.h>
#include <string.h>

const int SPLIT_AT = 30; // at which character should the string be splitted

int main (void) {
    char test [] = "PLEASE ENTER YOUR STRING HERE! IT WILL BE SPLITTED";
    int counter = 0;
    printf("\"");
    for(int i = 0, n = strlen(test); i < n; i++) {
        if(counter == SPLIT_AT) {
            counter = 0;
            printf("\"+\n\"");
        }
        printf("%c", test[i]);
        counter++;
    }
    printf("\"\n");
}
