#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 0 - Normal/Out postion
// 1 - Hip/In position
// 2 - Head position

void drawASCIIMan(short right_hand, signed char left_hand, signed char right_leg, signed char left_leg, bool is_turned){
    char man[3][3]={
        {' ', 'o', ' '},
        {' ', '|', ' '},
        {' ', ' ', ' '}
    };
    if(is_turned){
        signed char temp;
        // Hand swap
        temp = right_hand;
        right_hand=left_hand;
        left_hand=temp;
        // Leg swap
        temp = right_leg;
        right_leg=left_leg;
        left_leg=temp;
    }
    // right hand postion
    if(right_hand==0) man[1][0]='/';
    else if(right_hand==1) man[1][0]='<';
    else if(right_hand==2) man[0][0]='(';
    // left hand postion
    if(left_hand==0) man[1][2]='\\';
    else if(left_hand==1) man[1][2]='>';
    else if(left_hand==2) man[0][2]=')';
    // right leg postion
    if(right_leg==0) man[2][0]='/';
    else if(right_leg==1) man[2][0]='<';
    // left leg postion
    if(left_leg==0) man[2][2]='\\';
    else if(left_leg==1) man[2][2]='>';

    // Printing ASCII Man
    for(unsigned char i=0;i<3;i++){
        for(unsigned char j=0;j<3;j++){
            printf("%c", man[i][j]);
        }
        printf("\n");
    }
}

int main() {
    signed char T;
    short d;
    bool turn_status = false;
    short right_leg_status=0,right_hand_status=0,left_leg_status=0,left_hand_status=0;
    scanf(" %hhi", &T);
    for(signed char tc=0; tc<T;tc++){
        scanf(" %hi", &d);
        for(short ncom=0;ncom<d;ncom++){
            char command[6];
            char say_params[81];
            char part[5], to[6];
            scanf(" %s", &command);
            if(strcmp(command, "say")==0){
                scanf(" %[^\n]s", &say_params);
                printf("%s\n", say_params);
            }else if(strcmp(command, "turn")==0){
                turn_status=!turn_status;
                drawASCIIMan(right_hand_status, left_hand_status, right_leg_status, left_leg_status, turn_status);
            }else if(strcmp(command,"left")==0 || strcmp(command,"right")==0){
               scanf(" %s", &part);
               if(strcmp(part, "hand")==0) scanf(" %s", &to);
               scanf(" %s", &to);
               if(strcmp(command, "right")==0){
                   if(strcmp(part, "hand")==0){
                       if(strcmp(to, "head")==0) right_hand_status=2;
                       else if(strcmp(to, "hip")==0) right_hand_status=1;
                       else if(strcmp(to, "start")==0) right_hand_status=0;
                   }else if(strcmp(part, "leg")==0){
                       if(strcmp(to, "in")==0) right_leg_status=1;
                       else if(strcmp(to, "out")==0) right_leg_status=0;
                   }
               }else if(strcmp(command, "left")==0){
                   if(strcmp(part, "hand")==0){
                       if(strcmp(to, "head")==0) left_hand_status=2;
                       else if(strcmp(to, "hip")==0) left_hand_status=1;
                       else if(strcmp(to, "start")==0) left_hand_status=0;
                   }else if(strcmp(part, "leg")==0){
                       if(strcmp(to, "in")==0) left_leg_status=1;
                       else if(strcmp(to, "out")==0) left_leg_status=0;
                   }
               }
               drawASCIIMan(right_hand_status, left_hand_status, right_leg_status, left_leg_status, turn_status);
            }
        }
    }
    return 0;
}
