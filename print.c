#include <stdio.h>
typedef struct position
{
    int x;
    int y;
}position;

void print(position a);

int main(int argc, const char * argv[]) {
    position a;
    print(position a);

    return 0;
}

void print(){
    printf("  1   2   3   4   5   6   7  \n");
    for (int i=0; i<7; i++) {
        printf("+---+---+---+---+---+---+---+\n");
        printf("|   |   |   |   |   |   |   |%d\n",i+1);
    }
    printf("+---+---+---+---+---+---+---+\n");
}
