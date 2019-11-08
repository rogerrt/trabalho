#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define limite_alunos 20
#define tam 50

//estrutura que contém os dados do cadastro de cada cliente
struct cadastro
{
    int id, nsc;
    char cpf[13];
    char nome[tam];
    int situacao;
};

struct cadastro aluno[limite_alunos];

int op;
int cont;

int menu();
int mostra_menu();
int cadastro();
int lista();
int ler_nome();
int mensagem_erro();
int pesquisa();
int atualiza();
int Remover();

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
            printf("\nVoce selecionou Listar\n");
            lista();
            break; }

        case 3: {
            printf("\nVoce selecionou Pesquisar\n");
            pesquisa();
            break; }

        case 4: {
            printf("\nVoce selecionou Atualizar\n");
            atualiza();
            break; }

        case 5: {
            printf("\nVoce selecionou Remover\n");
            Remover();
            break; }

        case 6: 
        {
            printf("\nFinalizando programa\n");
            exit(EXIT_SUCCESS);
        }

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
    aluno[cont].situacao = 1;
    cont++;
    aluno[cont].id = cont;
}

int lista()
{
    int i;
    printf("\nListando alunos ativos\n");

    for ( i = 0; i < cont; i++)
    {
        if(aluno[i].situacao==1)
        {
            printf("\nDados do aluno:");
            printf("\nID: %d\n", aluno[i].id);
            printf("\nNome: %s", aluno[i].nome);
            printf("\nData de Nascimento: %d\n",aluno[i].nsc);
            printf("\nCPF: %s\n\n", aluno[i].cpf);
        }
    }
}

int pesquisa()
{
    char pesquisa[tam];
    int i;

    printf("\nDigite o nome do aluno desejado: ");
    gets(pesquisa);
    fgets(pesquisa, tam-1, stdin);
        
    for( i=0; i<tam; i++)
    {
        if(strcmp(pesquisa, aluno[i].nome)==0)
        {
            printf("\nID: %d", aluno[i].id); 
            printf("\nNome: %s" , aluno[i].nome); 
            printf("\nCPF: %s\n", aluno[i].cpf); 
            printf("\nData de nascimento: %d\n", aluno[i].nsc);
            printf("\nSituacao do aluno: %d ",aluno[i].situacao);
        }
    }
}

int atualiza()
{
    int pesquisa;
    int i;

    printf("\nDigite a ID do aluno desejado: ");
    scanf("%d",&pesquisa);

    for ( i = 0; i < cont; i++)
    {
        if( pesquisa == aluno[i].id)
        {
            printf("\nDigite o novo nome: ");
            gets(aluno[i].nome);
            fgets(aluno[i].nome, tam-1, stdin);
            printf("\nDigite a nova data de nascimento: ");
            scanf("%d",&aluno[i].nsc);
            printf("\nDigite o novo CPF: ");
            scanf("%s", aluno[i].cpf);
            printf("\nAtualizacao de dados feita com sucesso!\n");
        }
    }       
}

int Remover()
{
    int pesquisa;
    int i;

    printf("\nDigite a ID do aluno desejado: ");
    scanf("%d",&pesquisa);

    for ( i = 0; i < cont; i++)
    {
        if( pesquisa == aluno[i].id)
        {
            aluno[i].nome[0] = '\0';
            aluno[i].nsc = 0;
            aluno[i].cpf[0] = '\0';
            aluno[i].situacao = 0;
            printf("\nRemocao de aluno feita com sucesso!\n");
        }
    }       
}

int main()
{
    for (cont = 0; cont <= limite_alunos;)
    menu();
}
