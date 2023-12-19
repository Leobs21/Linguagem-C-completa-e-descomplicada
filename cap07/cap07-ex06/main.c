#include <stdio.h>
#include <stdlib.h>
// Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
// Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
// Ao final, imprima a nova string e o número de vogais que ela possui.
int main()
{
    char str[100];
    setbuf(stdin,NULL);
    printf("Informe uma string e troque suas vogais.\n");
    printf("Digite uma string qualquer: ");
    gets(str);

    int charCount = strlen(str);
    int countVogals = 0;

    char newChar;
    printf("Digite um caractere qualquer: ");
    scanf("%c",&newChar);

    char newString[charCount];
    for(int i=0; i < charCount; i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u'){
            countVogals += 1;
            newString[i] = newChar;
        }else{
            newString[i] = str[i];
        }
    }
    newString[charCount] = '\0';
    if(countVogals == 0){
        printf("A string \"%s\" nao possui vogais!\n", str);
    } else{
        printf("A quantidade de vogais da string \"%s\": %d\n", str,countVogals);
        printf("A string \"%s\" com as vogais trocadas: %s\n", str, newString);
    }
    system("pause");
    return 0;
}
