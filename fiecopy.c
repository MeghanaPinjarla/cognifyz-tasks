#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

   
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    
    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(src);
        return 1;
    }

    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    
    fclose(src);
    fclose(dest);

    return 0;
}
