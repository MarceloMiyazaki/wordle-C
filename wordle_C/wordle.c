#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void main()
{
    char chave[50] = "", key[50] = "termo", guess[50] = "oi", fora[50] = "";
    int i, ind, tent = 0;
    while(guess != NULL){
        scanf("%s", &guess);
        tent += 1;

        if(strlen(key)==strlen(guess)){
            if(strcmp(key, guess)==0){
                printf("PARABENS!!!!!\n");
                if(tent!=1)
                    printf("Foram %d tentativas!\n\n", tent);
                else
                    printf("Foi de primeira!!!");
                break;
            }

            for(i=0; i < strlen(key); i++)
                chave[i] = key[i];

            for(i=0; i < strlen(chave); i++){
                fora[i] = 'X';
                if(chave[i] == guess[i]){
                    fora[i] = 'O';
                    chave[i] = '!';
                }
            }
            for(i=0; i < strlen(chave); i++){
                if(strchr(chave, guess[i]) != NULL){
                    fora[i] = '!';
                    ind = strchr(chave, guess[i]) - chave;
                    chave[ind] = '!';
                }
            }
            printf("%s\n===============\n", fora);
        }  //lens iguais

        else
            printf("Palavra incompativel\n===============\n");

    }  //while true
} //main
    
