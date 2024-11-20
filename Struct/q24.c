#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 100
#define TAM_END 250
#define TAM_VETOR 5

struct Cadastro {
    char nome[TAM_NOME];
    int identidade;
    int telefone;
    char endereco[TAM_END];
    int cpf;
    int idade;
    float salario;
    char estCivil[TAM_NOME];
    char sexo[TAM_NOME];
};

void lerStr(char *str, int tam);
void lerCadastro(struct Cadastro dados[], int tam);
int maiorIdade(struct Cadastro dados[], int tam);
void imprimirPessoa(struct Cadastro *dados);
void imprimirPessoas(struct Cadastro dados[], int tam);
void seMasculino(struct Cadastro dados[], int tam);
int maiorSalario(struct Cadastro dados[], int tam);
int procurarPessoa(struct Cadastro dados[], int tam, int id);

int main() {
    int id;
    struct Cadastro dados[TAM_VETOR];
    lerCadastro(dados, TAM_VETOR);
    int i = maiorIdade(dados, TAM_VETOR);
    printf("A pessoa com a maior idade eh:\n");
    imprimirPessoa(&dados[i]);
    int j = maiorSalario(dados, TAM_VETOR);
    printf("A pessoa com a maior salario eh:\n");
    imprimirPessoa(&dados[j]);
    printf("Digite a identidade para buscar uma pessoa: ");
    scanf("%d", &id);
    int k = procurarPessoa(dados, TAM_VETOR, id);
    if(id == -1) {
        printf("Pessoa nao encontrada.\n");
    } else {
        printf("Pessoa encontrada:\n");
        imprimirPessoa(&dados[k]);
    }
}

void lerStr(char *str, int tam) {
    fgets(str, tam, stdin);
    int len = strlen(str);
    if(str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

void lerCadastro(struct Cadastro dados[], int tam) {
    char temp[TAM_NOME];
    int p = 1;
    for(int i = 0; i < tam; ++i) {
        printf("Cadastro %d\n", p);
        ++p;
        printf("Qual o seu nome? ");
        lerStr(dados[i].nome, TAM_NOME);
        printf("Qual a sua identidade? ");
        scanf("%d", &dados[i].identidade);
        printf("Qual o seu telefone? ");
        scanf("%d", &dados[i].telefone);
        lerStr(temp, TAM_NOME);
        printf("Qual o seu endereço? ");
        lerStr(dados[i].endereco, TAM_END);
        printf("Qual o seu CPF? ");
        scanf("%d", &dados[i].cpf);
        printf("Qual a sua idade? ");
        scanf("%d", &dados[i].idade);
        printf("Qual o seu salário? ");
        scanf("%f", &dados[i].salario);
        lerStr(temp, TAM_NOME);
        printf("Qual o seu estado civil? ");
        lerStr(dados[i].estCivil, TAM_NOME);
        printf("Qual o seu sexo? (M ou F)");
        lerStr(dados[i].sexo, TAM_NOME);
        printf("\n");
    }
}

int maiorIdade(struct Cadastro dados[], int tam) {
    int maiorIdade = 0;
    for(int i = 0; i < tam; ++i) {
        if(dados[i].idade > dados[maiorIdade].idade) {
            maiorIdade = i;
        }
    }
    return maiorIdade;
}

void imprimirPessoa(struct Cadastro *dados) {
    printf("Nome: %s\n", dados->nome);
    printf("Identidade: %d\n", dados->identidade);
    printf("Telefone: %d\n", dados->telefone);
    printf("Endereço: %s\n", dados->endereco);
    printf("CPF: %d\n", dados->cpf);
    printf("Idade: %d\n", dados->idade);
    printf("Salario: %.2f\n", dados->salario);
    printf("Estado civil: %s\n", dados->estCivil);
    printf("Sexo: %s\n", dados->sexo);
    printf("\n");
}

void imprimirPessoas(struct Cadastro dados[], int tam) {
    for(int i = 0; i < tam; ++i) {
        imprimirPessoa(&dados[i]);
    }
}

void seMasculino(struct Cadastro dados[], int tam) {
    for(int i = 0; i < tam; ++i) {
        if(dados[i].sexo[1] == 'M') {
            imprimirPessoa(&dados[i]);
        }
    }
}

int maiorSalario(struct Cadastro dados[], int tam) {
    int maiorSalario = 0;
    for(int i = 0; i < tam; ++i) {
        if(dados[i].salario > dados[maiorSalario].salario) {
            maiorSalario = i;
        }
    }
    return maiorSalario;
}

int procurarPessoa(struct Cadastro dados[], int tam, int id) {
    for(int i = 0; i < tam; ++i) {
        if(dados[i].identidade == id) {
            return i;
        }
    }
    return -1;
}