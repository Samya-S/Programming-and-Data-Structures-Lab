#include <stdio.h>
#include <stdlib.h>

int main(){
    int m;
    scanf("%d", &m);
    printf ("m = %d\n",m);

    char (*p)[80]=(char (*)[80])malloc(sizeof(char)*m*80);

    getchar();
    for(int i=0; i<m; i++){
        printf("reading line %d\n",i+1);
        //scanf("%[^\n]s", p[i]);
        gets(p[i]);
    }

    //while(1){
        /*for(int i=0; i<m; i++){
            *p[i]=(char **)malloc(sizeof(char *)*(k*2+1));
            scanf("%s", &p[i][0]); // scanning the name
            for(int j=1; j<k*2+1; j++){
                scanf("%s", p[i][j++]); // scanning the subj name
                scanf("%s", p[i][j]); // scanning the subj marks
            }
        }*/
    //}

    for(int i=0; i<m; i++){
        printf("%s\n", p[i]);
    }

    /*for(int i=0; i<m; i++){
        for(int j=0; j<k*2+1; j++){
            printf("%s ", *p[i][j]);
        }
        printf("\n");
    }*/

    for(int i=0; i<m;i++)
        //free(p[i]);
    
    //free(p);

    return 0;
}