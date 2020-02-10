#include <stdio.h>
typedef struct joueur
{
    int x;
    int y;
}joueur;

void print(joueur);

int main(int argc, const char * argv[]) {

    joueur a;
    print(x);

    return 0;
}

void print(joueur){
    printf("  1   2   3   4   5   6   7  \n");
    char a,b,c,d,e,f,g;
    for (int i=0; i<7; i++) {
        printf("+---+---+---+---+---+---+---+\n");
        printf("| %c | %c | %c | %c | %c | %c | %c |%d\n",,,,,,i+1);
    }
    printf("+---+---+---+---+---+---+---+\n");
}
