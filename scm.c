#include <stdio.h>
#include <time.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

void divide(int a, int b) 
{
    if(b==0)
    {
        printf("erro divisão por 0\n");
    }
    else
    {
        printf("%d / %d = %f\n", a, b, (float)(a)/(float)(b));
    }
}

int main() {

    char nome[100];
    
    printf("Qual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Olá, %s", nome);
    
    time_t local; //"local" is a variable of "time_t" data type.
    time(&local);
    
    printf("Olá, Estudante!\nA data e hora locais são: %s", ctime(&local));

    soma(5, 3);
    multiplica(5, 3);
    divide(5,0);
    divide(5,2);
    return 0;
}
