#include <stdio.h>
#include <string.h>

const int SPLIT_AT = 30; // length of the sepearted strings (split after the 30th character)

int main (int argc, char * argv[]) {
    
    if(argc != 2) {
        printf("Usage: ./split_string \"The string you would like to split\"\n");
        return 1;
    }

    char *user_text = argv[1];

    int counter = 0;
    printf("\"");
    for(int i = 0, n = strlen(user_text); i < n; i++) {
        if(counter == SPLIT_AT - 1) {
            counter = 0;
            printf("\"+\n\"");
        }
        printf("%c", user_text[i]);
        counter++;
    }
    printf("\"\n");
}
