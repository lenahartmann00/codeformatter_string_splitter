#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int DEFAULT_SUBSTRING_LENGTH = 30;

void print_formatted_string(char text[], int length_of_substrings);

int main (int argc, char * argv[]) {

    // Read command line arguments
    int substring_length;
    char *user_text;

    if(argc == 2) {
        substring_length = DEFAULT_SUBSTRING_LENGTH;
        user_text = argv[1];
    } else if (argc == 4 && strcmp(argv[1], "-l") == 0) {
        substring_length = atoi(argv[2]);
        user_text = argv[3];
    } else {
        printf("Usage: ./split_string \"The string you would like to split\"\nor: -l <length_of_splitted_strings>\n");
        return 1;
    }

    // Print out splitted string
    print_formatted_string(user_text, substring_length);
}

void print_formatted_string(char text[], int substring_length) {
    printf("\"");
    int counter = 0;
    for(int i = 0, n = strlen(text); i < n; i++) {
        if(counter == substring_length) {
            counter = 0;
            printf("\"+\n\"");
        }
        printf("%c", text[i]);
        counter++;
    }
    printf("\"\n");
}
