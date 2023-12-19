#include <stdio.h>
#include <stdlib.h>
// Faça um programa para ler 10 números diferentes a serem armazenados em um vetor.
// Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que,
// caso o usuário digite um número que já foi digitado anteriormente,
// o programa deverá pedir a ele para digitar outro número. Note que cada valor
// digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
// os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
int main()
{
    int size = 10;
    int vet[size];
    int i,n;
    int igual = 0;
    int count = 0;
    printf("Digite 10 numeros a serem armazenados no vet[10].\n");
    do{
        if(igual != 1){
            printf("Digite um valor para o vet[%d]: ", count);
        } else {
            printf("Ja existe um valor igual no vet[10].\n");
            printf("\nDigite um valor diferente para o vet[%d]: ", count);
            igual = 0;
        }
        scanf("%d", &n);
        for(i=0; i < count ;i++){
            if(vet[i] == n){
                igual = 1;
            }
        }
        if(igual == 0){
            vet[count] = n;
            count += 1;
        }
    } while (count != size);

    printf("\nForam armazenados os seguintes valores no vet[10]:\n");

    for(i=0; i < count ;i++){
        printf("%d ", vet[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}













