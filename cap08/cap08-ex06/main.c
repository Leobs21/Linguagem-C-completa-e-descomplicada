#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  Crie uma estrutura representando um aluno de uma disciplina.
    Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
    Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura.
    Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.
*/

/*  --descrição sobre um suposto bug/erro/problema--
    no WINDOWS, o programa esta com algum problema referente ao array aluno_cad aluno[].nome com char nome[] da struct aluno_cad
    se por acaso o primeiro aluno armazenado foi o que obteve maior media geral (refente a nota[] / 3)
    printf() não printa o nome[] do primeiro aluno no array aluno[]
    este problema ocorre apenas com o primeiro valor do array referente ao nome[] da struct

    nos meus testes, comentei e printei varias partes do codigo e percebi que o erro esta ocorrendo devido
    a um problema com media[] e media_maior, que eu tento checar: if (media[i] > media_maior){media_maior = media[i]}
    que por algum motivo ta interferindo no printf() que impede a impressão do nome do aluno referente a primeira posicao do array aluno[]

    no LINUX, não ocorre esse problema, mesmo checando: if (media[i] > media_maior){media_maior = media[i]}
    utilizei NEOVIM e GCC pra compilar no ARCH LINUX

    então considerei que pode ser:
    o proprio Code::Blocks ou a versao de C que o Code::Block esta utilizando que possa estar com esse problema
*/

typedef struct
{
    char nome[100];
    int matricula;
    float nota[3];
}aluno_cad;

int main()
{
    int count_aluno = 5;
    int count_prova = 3;

    aluno_cad aluno[count_aluno];

    float media[count_prova];
    float soma_nota = 0.0;
    float media_maior = 0.0;

    for(int i = 0; i < count_aluno; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o Nome do Aluno %d: ", i+1);

        fgets(aluno[i].nome, 100, stdin);

        // remover quebra de linha/nova linha do nome
        int len = strlen(aluno[i].nome);
        if (aluno[i].nome[len - 1] == '\n')
        {
            aluno[i].nome[len - 1] = '\0';
        }

        printf("Digite o numero de Matricula para Aluno %s: ", aluno[i].nome);
        scanf("%d", &aluno[i].matricula);

        for(int j = 0; j < count_prova; j++)
        {
            printf("Digite a Nota da Prova %d do Aluno(a) %s: ", j+1, aluno[i].nome);
            scanf("%f", &aluno[i].nota[j]);

            soma_nota += aluno[i].nota[j];
        }

        // acontece um bug referente ao nome do primeiro aluno
        // leia a descricao do bug no topo do codigo
        media[i] = soma_nota / count_prova;

        if (media[i] > media_maior){media_maior = media[i];}

        soma_nota = 0.0;
        printf("\n");
    }

    printf("O Aluno que obteve a Maior Media Geral foi:\n");
    for(int i = 0; i < count_aluno; i++)
    {
        if (media[i] == media_maior)
        {
            printf("Aluno: %s\nMatricula: %d\nNotas: ", aluno[i].nome, aluno[i].matricula);
            for(int j = 0; j < 3; j++)
            {
                printf("%.2f ", aluno[i].nota[j]);
            }
            printf("\nMedia Geral: %.2f", media_maior);
            break;
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
