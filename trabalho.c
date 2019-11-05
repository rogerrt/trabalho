//Roger Ricardo Tristão

#include<stdio.h>
#include<string.h>
#define limite_alunos 20

struct cadastro
{
    int id, nsc;
    double cpf;
    char nome[50];
} aluno;


int menu()
{
    int op;

    while (op != 6)
    {
        scanf("%d",&op);

        switch (op)
        {
        case 1: {
            printf("\ncadastro\n");
            cadastro();
            break; }
        
        case 2: {
            printf("lista");
            lista();
            break; }

        case 3: {
            printf("pesquisa");
            //pesquisa();
            break; }

        case 4: {
            printf("atualiza");
            //atualiza();
            break; }

        case 5: {
            printf("remove");
            //remover();
            break; }

        case 6:
            printf("Finalizando programa");
            break;

        default:
            printf("Operacao invalida");
            break;
        }
    }
}

int cadastro()
{
    aluno.id;

    printf("\nAluno de id %d", aluno.id);
    printf("\nInsira o nome do aluno:");
    scanf("%s", aluno.nome);
    printf("\nInsira a data de nascimento do aluno:");
    scanf("%d",&aluno.nsc);
    printf("\nInsira o cpf do aluno:");
    scanf("%d",&aluno.cpf);

}

int lista()
{
    printf("\nDados do aluno: %s %d %d %d", aluno.nome, aluno.cpf, aluno.nsc, aluno.id);
}

int main()
{
    menu();
}