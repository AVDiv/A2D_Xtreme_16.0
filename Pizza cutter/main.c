#include <stdio.h>
#include<stdbool.h>

int main() {
    short T;
    scanf(" %hi", &T);
    for(short tc=0;tc<T;tc++){
        int N;
        scanf(" %i", &N);
        int D[N];
        int nVC=0; // Valid no. of cuts
        int temp;
        bool has_duplicate;
        for(int i=0;i<N;i++) {
            scanf(" %i", &D[i]);
            D[i] %= 360;
            if(D[i]<0)D[i]=360+D[i];
        }
        for(int i=0;i<N;i++){
            temp = D[i];
            has_duplicate = false;
            for(int j=i-1;j>=0;j--){
                if(temp==D[j] || temp==D[j]-180 || temp==D[j]+180) has_duplicate = true;
            }
            if(!has_duplicate) nVC+=2;
        }
        if(nVC==0) nVC=1;
        printf("%i\n", nVC);
        
    }
}
