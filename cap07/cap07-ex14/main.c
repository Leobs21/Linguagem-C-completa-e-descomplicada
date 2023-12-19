#include <stdio.h>
#include <stdlib.h>
// O código de César é uma das técnicas de criptografia mais simples e conhecidas.
// É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto.
// Por exemplo, com uma troca detrês posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
// Escreva um programa que faça uso desse código de César para três posições.
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
