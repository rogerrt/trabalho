#include<stdio.h>
#include<string.h>
#define limite_alunos 20
#define tam 50

//estrutura que contém os dados do cadastro de cada cliente
struct cadastro
{
    int id, nsc;
    char cpf[12];
    char nome[tam];
};

struct cadastro aluno[limite_alunos];

int op;
int cont;

//função responsável por mostrar as opções
int mostra_menu()
{
        printf("\n");
        printf("\t==========================\n");
        printf("\t|\t                 |\n");
        printf("\t| 1 - Cadastrar Aluno    |\n");
        printf("\t| 2 - Listar Clientes    |\n");
        printf("\t| 3 - Pesquisar Aluno    |\n");
        printf("\t| 4 - Atualizar Cadastro |\n");
        printf("\t| 5 - Remover Cadastro   |\n");
        printf("\t| 6 - Finalizar programa |\n");
        printf("\t==========================\n");
        printf("\n\tSelecao:  ");
}

//função responsável pela escolha da opção
int menu()
{
    while (op != 6)
    {
        mostra_menu();
        scanf("%d",&op);

        switch (op)
        {
        case 1: {
            printf("\nVoce selecionou Cadastro\n");
            cadastro();
            break; }
        
        case 2: {
            printf("lista");
            lista();
            break; }

        case 3: {
            printf("pesquisa");
            pesquisa();
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

        default:
            printf("Operacao invalida");
            break;
        }
    }
}

int ler_nome()
{
    gets(aluno[cont].nome);
    fgets(aluno[cont].nome, tam-1, stdin);
}

int cadastro()
{
    aluno[cont].id;

    printf("\nAluno de id %d", aluno[cont].id);
    printf("\nInsira o nome do aluno: ");
    ler_nome();
    printf("\nInsira a data de nascimento do aluno:");
    scanf("%d",&aluno[cont].nsc);
    printf("\nInsira o cpf do aluno: ");
    scanf("%s", aluno[cont].cpf);
    printf("\nCadastro realizado com sucesso\n");
    cont++;
    aluno[cont].id = cont;
}

int lista()
{
    int i;
    printf("\nListando %d alunos cadastrados\n", cont);

    for ( i = 0; i < cont; i++)
    {
    printf("\nDados do aluno:");
    printf("\nID: %d", aluno[i].id);
    printf("\nNome: %s", aluno[i].nome);
    printf("\nData de Nascimento: %d",aluno[i].nsc);
    printf("\nCPF: %s\n", aluno[i].cpf);
    }
}

int pesquisa()
{
    char pesquisa[tam];
    int i;
    while (op == 3)
    {
        printf("\nDigite o nome do aluno desejado: ");
        fgets(pesquisa, tam-1, stdin);
        gets(pesquisa);
        
        for( i=0; i<tam; i++)
        {
            if(strcmp(pesquisa, aluno[i].nome))
            {
                printf("\nID: %d", aluno[i].id); 
                printf("\nNome: %s" , aluno[i].nome); 
                printf("\nCPF: %d", aluno[i].cpf); 
                printf("\nData de nascimento: %s", aluno[i].nsc);
            }
        }
    }
    
}

int main()
{
    for (cont = 0; cont <= 20;)
    menu();
}
