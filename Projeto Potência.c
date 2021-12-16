#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int c, n, p, i, f;//contadores
    unsigned int numero[i], potencia[i][6];

    //Início
    printf("Esse programa calcula numeros (1 a 30) elevado até a potência de 6");
    printf("\n\tAperte Enter para continuar\n\t\t");
    scanf("[^\n]");
    system("cls");

    //Entrada de dados
    printf("Digite quantos números você quer calcular\n");
    scanf("%d", &n);
    printf("Digite quantas potências (1 até 6)\n");
    scanf("%d", &p);
    f=1;
    for(i=0; i<n; i++)
    {
        printf("Digite o %d° numero: ", f);
        scanf("%d", &numero[i]);
        f++;
    }

    //Cálculo Potência
    for(i=0; i<n; i++)
    {
        f=0;
        c=1;
        while(f<p)
        {
            potencia[i][f]=pow(numero[i], c);
            c++;
            f++;
        }

    //Tabela Final
    }
    printf("Número");
    c=p+1;
    for(f=1; f<c; f++)
    {
    printf("\tP%d", f);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        f=0;
        printf("%d\t", numero[i]);
            do
                {
                printf("%d\t", potencia[i][f]);
                f++;
                }while(f<p);
        printf("\n");
    }
    return(0);

}
