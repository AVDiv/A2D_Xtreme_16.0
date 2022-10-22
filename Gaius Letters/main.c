#include <stdio.h>
#include <stdbool.h>

int main() {
    int i = 0, N = 10000;
    char ct[N], ot[N]; // Cipher text and Original text
    short shift = 14, ascii;
    short uppercase_start=65, uppercase_end=90, lowercase_start=97, lowercase_end=122;
    bool is_letter;
    bool is_uppercase;
    scanf(" %[^\n]s", ct);
    while(!ct[i]=='\0'){
        ascii = (int)ct[i];
        is_uppercase = ascii>=uppercase_start && ascii<=uppercase_end;
        is_letter = (ascii>=lowercase_start && ascii<=lowercase_end) || is_uppercase; 
        if(is_letter){
            if(is_uppercase){
                if(ascii>uppercase_end-shift)ascii-=shift-2;
                else ascii+=shift;
            }else{
                if(ascii>lowercase_end-shift)ascii-=shift-2;
                else ascii+=shift;
            }
        }
        ot[i]=(char)ascii;
        i++;
    }
    printf("%s", ot);
    return 0;
}
