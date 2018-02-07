
#ifndef _FUNKSJONER_
#define _FUNKSJONER_

    typedef enum suit{
    club, spade, heart, diamond
    }suit;

    typedef struct card{
        suit suit;
        int value;
    }card;

    char* suit_to_string(suit);
    card returnNewCard(card c);
    void modifyCard(card* c);

    
#endif 


