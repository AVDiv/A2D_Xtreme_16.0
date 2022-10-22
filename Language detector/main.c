#include <stdio.h>
#include <string.h>

int main() {
    struct iNode = {
        int id;
        char character;
        int yes_node;
        int no_node;
    };
    struct lNode = {
        int id;
        char lang[25];
    }
    struct index = {
        short node_index;
    };
    struct phrases = {
        char text[1010];
        char langs[120][25];
    }
    short n, p;
    char letters;
    char text[25];
    short nLang;
    scanf(" %hi %hi", &n, &p);
    struct iNode char_nodes[n];
    struct lNode lang_nodes[n];
    struct phrases langs[p];
    short iNode_top=0, lNode_top=0;
    // Input the nodes
    for(short i=0;i<n;i++){
        scanf(" %c", &letters);
        if(letters=='I'){
            scanf(" %s", &text);
            char_nodes[iNode_top].id=(int)text;
            scanf(" %c", &letters);
            char_nodes[iNode_top].character=letters;
            scanf(" %s", &text);
            char_nodes[iNode_top].yes_node=(int)text;
            scanf(" %s", &text);
            char_nodes[iNode_top].no_node=(int)text;
            iNode_top++;
        } else if(letters=='L'){
            scanf(" %s", &text);
            lang_nodes[lNode_top].id=(int)text;
            scanf(" %s", &text);
            lang_nodes[lNode_top].lang=text;
            lNode_top++;
        }
    }
    // Input the phrases
    for(short i=0;i<p;i++){
        scanf(" %[^\n]s", &text);
        langs[i].text=text;
    }
    // Calculating no.of available language preferences
    nLang = (int)(sizeof(langs)/sizeof(struct phrases));
    // Detecting languages for all phrases
    for(short i=0;i<p;i++){
        // Checking nodes which are characters available in the phrase
    }
}
