#include <stdio.h>
#include <stdlib.h>
// O c�digo de C�sar � uma das t�cnicas de criptografia mais simples e conhecidas.
// � um tipo de substitui��o no qual cada letra do texto � substitu�da por outra, que se apresenta n posi��es ap�s ela no alfabeto.
// Por exemplo, com uma troca detr�s posi��es, a letra A seria substitu�da por D, B se tornaria E e assim por diante.
// Escreva um programa que fa�a uso desse c�digo de C�sar para tr�s posi��es.
// Entre com uma string e imprima a string codificada.
// Exemplo:
// String: a ligeira raposa marrom saltou sobre o cachorro cansado
// Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr
int main()
{
    char str[100];
    char newStr[100];

    setbuf(stdin, NULL);

    printf("Digite uma string e use o codigo de Cesar para criptografar.\n");
    printf("Digite uma string qualquer: ");
    gets(str);

    int asciiSum = 10;

    for(int i=0; str[i] != '\0' ;i++){
        int ascii = str[i];
        int sum = ascii + asciiSum;

        if(ascii >= 65 && ascii <= 90){
            if(sum > 90){
                newStr[i] = sum - 90 + 64;
            }else{
                newStr[i] = ascii + asciiSum;
            }
        }else if(ascii >= 97 && ascii <= 122){
            if(sum > 122){
                newStr[i] = sum - 122 + 96;
            }else{
                newStr[i] = ascii + asciiSum;
            }
        }else{
            newStr[i] = ascii;
        }
    }
    newStr[strlen(str)] = '\0';
    printf("\nUsando codigo de Cesar para criptografar a string:\n");
    printf("%s\n", newStr);
    printf("\n");

    system("pause");
    return 0;
}
