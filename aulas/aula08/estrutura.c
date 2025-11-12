#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{

    struct endereco_t // novo tipo para o c
    {
        char tipo_logradouro;
        char nome_logradouro[61];
        int numero;
        char bairro[31];
        char localidade[41];
        char uf[3];
    };

    struct endereco_t meu_endereco;

    meu_endereco.tipo_logradouro = 'Q';
    strcpy(meu_endereco.nome_logradouro, "SGAS");
    meu_endereco.numero = 613;
    strcpy(meu_endereco.bairro, "Asa Sul");
    strcpy(meu_endereco.localidade, "Brasilia");
    strcpy(meu_endereco.uf, "DF");

    printf("Meu endereço: ");
    printf("%c - %s %i\n", meu_endereco.tipo_logradouro, meu_endereco.nome_logradouro, meu_endereco.numero);
    printf("%s - %s\n", meu_endereco.localidade, meu_endereco.uf);

    struct contato_t
    {

        char nome[61];
        long long int telefone;
        struct endereco_t endereco;
    };

    struct contato_t meu_contato;

    strcpy(meu_contato.nome, "Jose");
    meu_contato.telefone = 61888888L;
    meu_contato.endereco = meu_endereco;

    printf("Meu contato:\n");
    printf("%s\n", meu_contato.nome);
    printf("Telefone: %lli", meu_contato.telefone);
    printf("%c - %s %i\n", meu_contato.endereco.tipo_logradouro, meu_contato.endereco.nome_logradouro, meu_contato.endereco.numero);
    printf("%s - %s\n", meu_contato.endereco.localidade, meu_contato.endereco.uf);

    struct contato_t contatos[10]; // vetor com 10 contatos

    for (int i = 0; i < 10; i++)
    {

        contatos[i] = meu_contato;
    }

    strcpy(contatos[0].nome, "Maria");

    printf("Meus contatos:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i° contato:\n", i + 1);
        printf("%s\n", contatos[i].nome);
        printf("Telefone: %li", contatos[i].telefone);
        printf("%c - %s %i\n", contatos[1].endereco.tipo_logradouro, contatos[1].endereco.nome_logradouro, contatos[1].endereco.numero);
        printf("%s - %s\n", contatos[1].endereco.localidade, contatos[1].endereco.uf);
    }

    return 0;
}
