#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    char alp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int random = rand()%26;
    return alp[random];
}