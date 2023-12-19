#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Exercicio 08:
// Construa um programa que leia duas strings do teclado.
// Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira

// Exercicio 09:
// Construa um programa que leia duas strings do teclado.
// Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira

int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    int k=0;
    int j=0;
    int i=0;
    int count=0;

    setbuf(stdin,NULL);

    printf("Leia duas strings do teclado verifique se a segunda esta contida na primeira.\n");
    printf("Digite a primeira string: ");
    fgets(str1, 30, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 30, stdin);
    printf("\n");

    do{
        for(i=j; str1[i] != ' ' && str1[i] != '\0' ;i++){
            str3[k] = str1[i];
            k++;
        }
        str3[k] = '\0';
        printf("\"%s\" ", str3);
        if(strcmp(str3,str2) == 0){
            count += 1;
            k=0;
        }else{
            k=0;
        }
        j=i+1;
    }while(str1[i] != '\0');

    printf("\n");
    // count >=1 ja entra no if sem precisar do strcmp(), deixei apenas pra melhor visualizacao
    if(strcmp(str3, str2) == 0 || count >= 1){
        printf("\nA string \"%s\" --ESTA-- contida na string \"%s\"\n",str2, str1);
    }else if( strcmp(str1,str2) == 0){
        printf("\nA string \"%s\" --ESTA-- contida na string \"%s\"\n",str2, str2);
        count += 1;
    }else {
        printf("\nA string \"%s\" --NAO-- esta contida na string \"%s\"\n",str2, str1);
    }
    printf("Quantidade de vezes que \"%s\" aparece: %d\n",str2,count);
    system("pause");
    return 0;
}
