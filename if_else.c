#include <stdio.h>

int main() {

    char c1 = 'a';
    char c2 = 'b';

    if( c1==c2 ){
        printf("Both are the same.\n");
    }
    else if (c1 < c2)
    {
        printf("%c comes before %c.\n", c1, c2);
    }
    else {
        printf("%c comes after %c.\n", c1, c2);
    }


    char grade = 'B';
    char is_excellent = (grade=='A') ? 'Y' : 'N';
    printf("Is this grade excellent? %c\n", is_excellent);





    return 0;

    
}