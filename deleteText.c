#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("myFile.txt", "w");
    fprintf(fp, "%s", "Love");
    fclose(fp);
    return 0;
}