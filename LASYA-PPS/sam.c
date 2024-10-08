#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr;
    int sizeofregno;
    scanf("%d", &sizeofregno);
    ptr = (char*)malloc(sizeofregno*sizeof(char));
    scanf("%s", ptr);
    
    printf("%s", ptr);
}