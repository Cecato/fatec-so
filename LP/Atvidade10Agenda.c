// FEITO POR GUSTAVO CECATO E DANIELA ALVES

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 100
#include <string.h>

typedef struct{

    char cod[TAM], nome[TAM], tel[TAM];
    char end[TAM], email[TAM];

} Info;



void menu(int *n, int tam);
void cadastrar( Info *p, int tam);
void pesEmail ( Info *p, int tam);
void pesNome ( Info *p, int tam);
void alterar ( Info *p, int tam);
void excluir ( Info *p, int *tam);
void check(Info *p, int tam, int n);
void listar(Info *p, int tam);
void clear();

int main(){

    int n, tam = 0;
    Info * info = (Info *) malloc (sizeof(Info));
    setlocale(LC_ALL, "Portuguese");

    while(1){

        menu(&n, tam);

        switch (n){

            case 0:

                listar ( info, tam);

                break;

            case 1:

                tam ++;
                info = (Info *) realloc(info, tam * sizeof(Info));

                cadastrar( info, tam);

                break;

            case 2:

                pesEmail(info, tam);


                break;

            case 3:

                pesNome(info, tam);


                break;

            case 4:

                alterar ( info, tam);

                break;

            case 5:

                excluir ( info, &tam);

                break;

            case 6:
                    printf("\n\tPrograma finalizado!\n");
                    free(info);
                    return 0;

                break;


            default:

                printf("\nERRO! Valor inválido\nDigite um número entre 0 e 6\n");
                clear();
                break;

        }

    }

}

void menu(int *n, int tam){


    printf( "\n\tPROJETO [Daniela Gustavo]\t[%d] Cadastros."
            "\n\t-----------------------------------------\n"
            "\t0. Listar Contatos\n"
            "\t1. Cadastrar Contatos\n"
            "\t2. Pesquisar contato pelo email\n"
            "\t3. Pesquisar contato pelo nome\n"
            "\t4. Alterar dados de um contato\n"
            "\t5. Excluir um Contato pelo código\n"
            "\t6. Sair\n", tam);
    printf("\n\tDigite um número ( 0 a 6 ): ");
    scanf("%d%*c",n);


}

void cadastrar ( Info *inf, int tam ){

    int i, aux = 0;
    char n[TAM];

    system("cls");

    printf("\n\t       Cadastro");
    printf("\n\t-------------------------\n");

    printf("\n\t  Código:   ");
    fgets( n, TAM, stdin );

    check(inf, tam, n);
    strcpy( inf[tam-1].cod, n);

    printf("\t    Nome:   ");
    fgets( inf[tam-1].nome, TAM, stdin );

    printf("\tTelefone:   ");
    fgets( inf[tam-1].tel, TAM, stdin );

    printf("\tEndereço:   ");
    fgets( inf[tam-1].end, TAM, stdin );

    printf("\t   Email:   ");
    fgets( inf[tam-1].email, TAM, stdin );

    clear();

}

void check( Info *p, int tam, int n ){

    int i;

    for( i = 0; i < tam; i++){

        if( strcmp( n, p[i].cod ) == 0 ){
            printf("\n\tCódigo inválido, digite outro: ");
            fgets( n, TAM, stdin );
            return check( p, tam, n);
        }

    }
    printf("\n");

}

void pesEmail ( Info *p, int tam){

    char email[TAM];
    int i, aux = 0;

    system("cls");

    printf("\n\tPesquisa por Email");
    printf("\n\t-------------------------\n");

    printf("\tEmail: ");
    fgets( email, TAM, stdin );

    for( i = 0; i < tam; i++ ){

        if( strcmp(email, p[i].email) == 0 ){

            printf("\n\t-------------------------\n");

            printf( "\t  Código:   %s"
                    "\t    Nome:   %s"
                    "\tTelefone:   %s"
                    "\tEndereço:   %s"
                    "\t   Email:   %s",
                    p[i].cod,
                    p[i].nome,
                    p[i].tel,
                    p[i].end,
                    p[i].email);

            printf("\n\t-------------------------\n");

            aux ++;
        }

    }
    if( aux == 0) printf("\n\tO email não existe\n");

    clear();

}

void pesNome (Info *p, int tam){

    char nome[TAM];
    int i, aux = 0;

    system("cls");

    printf("\n\t  Pesquisa por Nome");
    printf("\n\t-------------------------\n");

    printf("\tNome: ");
    fgets( nome, TAM, stdin );

    for( i = 0; i < tam; i++ ){

        if( strcmp(nome, p[i].nome) == 0 ){

            printf("\n\t-------------------------\n");

            printf( "\t  Código:   %s"
                    "\t    Nome:   %s"
                    "\tTelefone:   %s"
                    "\tEndereço:   %s"
                    "\t   Email:   %s",
                    p[i].cod,
                    p[i].nome,
                    p[i].tel,
                    p[i].end,
                    p[i].email);

            printf("\n\t-------------------------\n");
            aux ++;
        }

    }
    if( aux == 0) printf("\n\tO nome não existe\n");


    clear();

}

void alterar ( Info *p, int tam){

    int i, aux = 0;
    char n[TAM];

    system("cls");

    printf("\n\t      Alterar");
    printf("\n\t-------------------------\n");
    printf("\n\tDigite o código para alterar: ");

    fgets( n, TAM, stdin );

    for( i = 0; i < tam; i++ ){

        if( strcmp(n, p[i].cod) == 0){

            printf("\n\t-------------------------\n");

            printf( "\t  Código:   %s"
                    "\t    Nome:   %s"
                    "\tTelefone:   %s"
                    "\tEndereço:   %s"
                    "\t   Email:   %s",
                    p[i].cod,
                    p[i].nome,
                    p[i].tel,
                    p[i].end,
                    p[i].email);

            printf("\n\t-------------------------\n");

            printf("\t    Novo Nome:   ");
            fgets( p[i].nome, TAM, stdin );

            printf("\tNovo Telefone:   ");
            fgets( p[i].tel, TAM, stdin );

            printf("\tNovo Endereço:   ");
            fgets( p[i].end, TAM, stdin );

            printf("\t   Novo Email:   ");
            fgets( p[i].email, TAM, stdin );

            printf("\n\t-------------------------\n");

            aux ++;
        }

    }
    if( aux == 0) printf("\n\tO código não existe\n");

    clear();

}

void excluir ( Info *p, int *tam){

    int i, aux = 0, j;
    char n[TAM];

    system("cls");

    if( *tam > 0){


        printf("\n\t      Excluir");
        printf("\n\t-------------------------\n");
        printf("\n\tDigite o código para Excluir: ");
        fgets( n, TAM, stdin );

        for( i = 0; i < *tam; i++ ){

            if( strcmp(n, p[i].cod) == 0){

                printf("\n\t-------------------------\n");

                printf( "\t  Código:   %s"
                        "\t    Nome:   %s"
                        "\tTelefone:   %s"
                        "\tEndereço:   %s"
                        "\t   Email:   %s",
                        p[i].cod,
                        p[i].nome,
                        p[i].tel,
                        p[i].end,
                        p[i].email);

                printf("\n\t-------------------------\n");

                for( j = i; j < *tam - 1; j++) p[j] = p[j+1];

                (*tam) --;
                p = (Info *) realloc(p, (*tam) * sizeof( Info ));

                printf("\n\t Código excluído com sucesso!\n");

                aux++;

            }

        }
        if( aux == 0) printf("\n\tO código não existe.\n");


    }
    else{
            printf("\n\tNão há contatos cadastrados.\n");
    }

    printf("\n\t-------------------------\n");

    clear();

}

void listar(Info *p, int tam){

    system("cls");

    int i;

    printf("\n\t      Lista");
    printf("\n\t-------------------------\n");

    if( tam != 0 ){

        for( i = 0; i < tam; i++){

            printf("\n\t-------------------------\n");

            printf( "\t  Código:   %s"
                    "\t    Nome:   %s"
                    "\tTelefone:   %s"
                    "\tEndereço:   %s"
                    "\t   Email:   %s",
                    p[i].cod,
                    p[i].nome,
                    p[i].tel,
                    p[i].end,
                    p[i].email);

            printf("\n\t-------------------------\n");

        }

    }

    printf("\n\t Foram achados %d contato(s);\n",tam);

    clear();

}

void clear(){

    printf("\n\tENTER para continuar...");
    getchar();
    system("cls");
}
