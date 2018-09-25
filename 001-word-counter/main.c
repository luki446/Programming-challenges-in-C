#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char filename[30];
    if(argc > 1)
    {
        strcpy(filename, argv[1]);
    }
    else
    {
        printf("Choose file: \n");
        scanf("%s", filename);
    }
    FILE* file = fopen(filename, "r");
    if(file == NULL)
    {
        fprintf(stderr, "Could not open file %s", filename);
    }
    else
    {
        char word[20], buf[20];
        short count = 0;
        char c;
        printf("Choose word: \n");
        scanf("%s", word);
        while(fscanf(file, "%s", buf) == 1)
        {
            if(strcmp(word, buf) == 0) count++;
        }
        printf("Occurencies of %s word in %s file: %d", word, filename, count);
        c = getchar();
    }
    fclose(file);
}