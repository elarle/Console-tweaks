#include <stdio.h>
#include <signal.h>
#include "control.h"

/*
int ba(const char * TEXT){
    int s = 0;
    while (*TEXT) {
        s++;
        TEXT++;
    }
    return s;
}
void ab(char ** TEXT){
    int cols = 0;
    int rows = 0;
    Dimensions(&cols, &rows);
    int d = ba(*TEXT);
    mv( (cols - d)/2 , rows/2);
    printf("%s%s\n%s", GREEN, *TEXT, NORMAL);
    mv(0, rows);
}

void aa(){
    char * TEXT = "Tu madre tiene el pito mas tieso que un tiesto :D";
    clean();
    ab(&TEXT);
}

int main(){

    char * TEXT = "Tu madre tiene el pito mas tieso que un tiesto :D";

    signal(SIGWINCH, &aa);

    clean();
    
    //printf("%sHello World\n%s", GREEN, NORMAL);
    ab(&TEXT);

    echoOff();

    char c = getchar();

    echoOn();

    clean();
    mv(0, 0);

    return 1;
}
*/

int main(){

    FILE *fp = fopen("/dev/pts/2", "w");
    char ** c;
    scanf("%s", *c);
    fprintf(fp, "%s - \n", *c);
    fclose(fp);

    return 1;
}