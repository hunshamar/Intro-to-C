#include <stdio.h>
#include "card.h"


int main(){

    card c = {club, 10};
    printf("%s %d\n", suit_to_string(c.suit),c.value);
    c = returnNewCard(c);
    printf("%s %d\n", suit_to_string(c.suit),c.value);
    modifyCard(&c);
    printf("%s %d\n", suit_to_string(c.suit),c.value);

    return 0;
}




