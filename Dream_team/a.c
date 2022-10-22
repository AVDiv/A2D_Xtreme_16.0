#include <stdio.h>

int main(){
  int B, P, W, G, S, F, C , counter;
    scanf("%d", &B);
    scanf("%d", &P);
    int pointgaurd_slr[P];
    char pointgaurd_nme[P];
    for(counter=0;counter<D;counter++){
        scanf("%s %d", &pointgaurd_nme[counter], &W);
        pointgaurd_slr[counter]=W;
        W=0;
    }
    scanf("%d", &G);
    if(G>=1 && G<=400){
        int shootinggaurd_slr[G];
    char shootinggaurd_nme[G];
    for(counter=0;counter<G;counter++){
        scanf("%s %d", &shootinggaurd_nme[counter],&W);
        shootinggaurd_slr[counter]=W;
        W=0;
    }
    }
    scanf("%d", &S);
    int smallforward_slr[S];
    char smallforward_nme[S];
    for(counter=0;counter<S;counter++){
        scanf("%s %d", &smallforward_nme[counter],&W);
        smallforward_slr[counter]=W;
        W=0;
    }
    scanf("%d", &F);
    int powerforward_slr[F];
    char powerforward_nme[F];
    for(counter=0;counter<F;counter++){
        scanf("%s %d", &powerforward_nme[counter],&W);
        powerforward_slr[counter]=W;
        W=0;
    }
    scanf("%d", &C);
    int centers_slr[C];
    char centers_nme[C];
    for(counter=0;counter<C;counter++){
        scanf("%s %d", &centers_nme[counter],&W);
        centers_slr[counter]=W;
        W=0;
    }
  return 0;
}
