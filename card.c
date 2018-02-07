#include "card.h"

card returnNewCard(card c){
    card r_card = {heart, c.value/2};
    return r_card;
}


void modifyCard(card* c){
    
    card newS = {spade, 9};

    *c = newS;

}

char* suit_to_string(suit s){
    switch(s){
        case club:
            return "club";
        case spade:
            return "spade";
        case heart:
            return "heart";
        case diamond:
            return "diamond";
        default:
            return "Not valid";
    }
}


