//3.4
//#include <stdio.h> 
//int main()
//{
//    int soma = 0,x = 1;
//    soma += x;
//    printf("A soma e: %d \n", soma);
//}
//==========================================
//3.5
//#include <stdio.h> 
//int main()
//{
//    int soma = 0,x = 0;
//
//    while(x <= 11)
//    {
//        soma += x;
//        x++;
//    }
//    printf("A soma e: %d \n", soma);
//}
//==========================================
//3.6
//#include <stdio.h> 
//int main()
//{
//    int produto = 5, x = 5;
//    produto *= x++;
//    printf("A soma e: %d \n", produto);
//}
//==========================================
//3.7
//#include <stdio.h> 
//int main()
//{
//    int x, y, i = 1, potencia = 1;
//    printf("Digite o valor da variavel X:\n");
//    scanf("%d", &x);
//    printf("Digite o valor da variavel Y:\n");
//    scanf("%d", &y);
//    potencia *= x;
//    i++; 
//    i >= y ? printf("Maior\n") : printf("Menor\n");
//    printf("Potencia: %d\n", &potencia);
//    return 0;
//}
//==========================================
//3.8
//#include <stdio.h> 
//int main()
//{
//    int x, y, i = 1, potencia = 1;
//    printf("Digite o valor da variavel X:\n");
//    scanf("%d", &x);
//    printf("Digite o valor da variavel Y:\n");
//    scanf("%d", &y);
//    potencia *= x;
//    i++; 
//    i >= y ? printf("Maior\n") : printf("Menor\n");
//    printf("Potencia x**y: %d\n", x**y);
//    return 0;
//}
//==========================================
//3.9
//a) }
//b) scanf(" %.lf", &valor);
//c) else{} 
//==========================================
//3.10
//soma += z;
//==========================================
//3.11
//a) {}
//b) x++ 
//c) {} 
//d) y++  
//==========================================
//3.12 -- irrelevante
//==========================================
//3.13 
//total recepe em um loop y = x *x 
//==========================================
//3.14
//a) printf("Digite dois numeros"); 
//b) int x,y,z,p; p = x + y + z;
//c) m > v * v; true; 
//d) scanf("%d", &s, &r, &t); 
//==========================================
//3.15
//a) scanf("%d", &x); scanf("%d", &y); soma=x + y; printf(" %d", soma);
//b) scanf("%d", &x); scanf("%d", &y);  x >= y  ?  maior: menor;
//c) scanf("%d", &x) -1 break while;
//==========================================
//3.16
//a) Verdadeiro 
//b) Verdadeiro
//c) Verdadeiro
//d) falso 
//e) Verdadeiro 
//==========================================
//3.17
//#include <stdio.h> 
//
//int main()
//{
//    float qtlitros=0.0,km=0.0,total=0.0;
//    while(1)
//    {
//        printf("------- ( -1 para terminar ) -------\n");
//        printf("Informe quantos litros abasteceu: \n");
//        scanf("%f", &qtlitros);
//        if(qtlitros == -1) break;
//        printf("Informe quantos km dirigiu: \n");
//        scanf("%f", &km);
//        total = km / qtlitros; 
//        printf("O cosumo atual e de  %f km/l\n\n\n", total);
//    }
//}
//==========================================
//3.18
//#include <stdio.h> 
//
//int main()
//{
//    float conta=0.0,saldo=0.0,encargos=0.0,creditos=0.0,limitecredito=0.0;
//    while(1)
//    {
//        printf("------- ( -1 para terminar ) -------\n");
//        printf("Informe o numero da conta: \n");
//        scanf("%f", &conta);
//        if(conta == -1) break;
//        printf("Informe o saldo inicial: \n");
//        scanf("%f", &saldo);
//        printf("Informe o total de encargos: \n");
//        scanf("%f", &encargos);
//        printf("Informe o total de creditos: \n");
//        scanf("%f", &creditos);
//        printf("Informe o limite de credito: \n");
//        scanf("%f", &limitecredito);
//        saldo = saldo + encargos - creditos;
//        printf("--RESULTADO--");
//        printf("Conta: %.2f\n", conta);
//        printf("Limite de credtido:  %.2f\n",creditos);
//        printf("Saldo: .2%f\n", saldo);
//        printf("Limite de credito utrapassado ?? km/l\n");
//
//    }
//}
//==========================================
//3.19
//#include <stdio.h> 
//
//int main()
//{
//    float venda=0.0,pagamento=0.0,comissao=200.00;
//    while(1)
//    {
//        printf("------- ( -1 para terminar ) -------\n");
//        printf("Valor da venda: \n");
//        scanf("%f", &venda);
//        if(venda == -1) break;
//        pagamento = comissao + (( 9.0 / 100 ) * venda); 
//        printf("Pagamento:  %.2f\n", pagamento);
//    }
//}
//==========================================
//3.20 
//#include <stdio.h> 
//
//int main()
//{
//    float principal=0.0,taxa=0.0,dias=0.00,juros=0.00;
//    while(1)
//    {
//        printf("------- ( -1 para terminar ) -------\n");
//        printf("Informe o valor pricipal do empretimo: \n");
//        scanf("%f", &principal);
//        if( principal == -1 ) break;
//        printf("Informe a taxa de juros: \n");
//        scanf("%f", &taxa);
//        printf("Informe o prazo do emprestimo em dias: \n");
//        scanf("%f", &dias);
//        juros = principal * taxa * dias / 365;
//        printf("Valor do juros:  %.2f\n", juros);
//    }
//}
//==========================================
//3.21
//#include <stdio.h> 
//
//int main()
//{
//    float horas=0.0,salarioporohora=0.0,salariototal=0.00;
//    while(1)
//    {
//        printf("------- ( -1 para terminar ) -------\n");
//        printf("Digite a quantidade de horas trabalhadas: \n");
//        scanf("%f", &horas);
//        if( horas == -1 ) break;
//        printf("Digite o salario por hora do fucionario: \n");
//        scanf("%f", &salarioporohora);
//        if( horas <= 40 ){
//            salariototal = horas * salarioporohora;
//        } else {
//            salariototal  = 40 * salarioporohora;
//            salariototal += (horas - 40) * (salarioporohora + (salarioporohora / 2));
//        }
//        printf("salario e de %.2f\n", salariototal);
//    }
//}
//==========================================
//3.22
//#include <stdio.h> 
//int main()
//{
//    int x = 0,y = 0;
//    int loop = 0;
//    while(1)
//    {
//        printf("------- Loop: %i -------\n", loop);
//        printf("incremento ++x: %i\n", x);
//        printf("incremento --y: %i\n", y);
//        loop++; 
//        ++x; 
//        --y; 
//    }
//}
//==========================================
//3.23
//#include <stdio.h> 
//int main()
//{
//    int loop = 0;
//    while(1)
//    {
//        printf("%i-", loop);
//        loop++; 
//    }
//}
//==========================================
//3.24
//#include <stdio.h>
//int main() {
//    int numeros[5];
//    int i, maior;
//    printf("Digite 5 números:\n");
//    for (i = 0; i < 5; i++) {
//        scanf("%d", &numeros[i]);
//    }
//    maior = numeros[0];
//    for (i = 1; i < 5; i++) {
//        if (numeros[i] > maior) {
//            maior = numeros[i];
//        }
//    }
//    printf("O maior número é: %d\n", maior);
//    return 0;
//}
//==========================================
//3.25
//#include <stdio.h>
//int main() {
//    printf("N\t10*N\t100*N\t1000*N\n");
//    for (int i = 1; i <=  10; i++) {
//        printf("%d\t%d\t%d\t%d\t\n", i,10*i,100*i,1000*i);
//    }
//    return 0;
//}
//==========================================
//3.26
//#include <stdio.h>
//int main() {
//
//    printf("A\tA+2\tA+4\tA+6\n");
//    for (int i = 1; i <=  10; i++) {
//        printf("%d\t%d\t%d\t%d\t\n", i,i+2,i+4,i+6);
//    }
//    return 0;
//}
//==========================================
//3.27
//#include <stdio.h>
//int main() {
//    int numeros[10];
//    int i;
//    int maior, segundo_maior;
//    printf("Digite 10 números:\n");
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &numeros[i]);
//    }
//    if (numeros[0] > numeros[1]) {
//        maior = numeros[0];
//        segundo_maior = numeros[1];
//    } else {
//        maior = numeros[1];
//        segundo_maior = numeros[0];
//    }
//    for (i = 2; i < 10; i++) {
//        if (numeros[i] > maior) {
//            segundo_maior = maior; 
//            maior = numeros[i];     
//        } else if (numeros[i] > segundo_maior) {
//            segundo_maior = numeros[i]; 
//        }
//    }
//    printf("O maior número é: %d\n", maior);
//    printf("O segundo maior número é: %d\n", segundo_maior);
//    return 0;
//}
//==========================================
//3.28
// cehck question..
//==========================================
//3.29
// cehck question..
//==========================================
//3.29
// intercala entre  **** & ++++  
//==========================================
//3.30
// intercala entre  < & > com \n  
//==========================================
//3.31
//a)  if( x < 10)
//    {
//        if( x < 10)
//        {
//        }else{
//        }
//    }
//b)  if( x < 10)
//    {
//    }else{
//    }
//==========================================
//3.32
// da para resover sem usar o {}
//==========================================
//3.33 
//#include <stdio.h>
//int main() {
//    int lado=0;
//    printf("Lado do quadrado: ");
//    scanf(" %d", &lado);
//    for (int i=0; i < lado; i++)
//    {
//        for(int ii=0; ii < lado; ii++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//==========================================
//3.34 
//#include <stdio.h>
//int main() {
//    int lado=0;
//    printf("Lado do quadrado: ");
//    scanf(" %d", &lado);
//    for (int i=1; i <= lado; i++)
//    {
//        if(i == 1 | i == lado)
//        {
//            for(int ii=1; ii <= lado; ii++)
//            {
//                printf("*");
//            }
//        } else
//        {
//            for(int iii=1; iii <= lado; iii++)
//            {
//                if(iii == 1 | iii == lado)
//                {
//                    printf("*");
//                } else
//                {
//                    printf(" ");
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//==========================================
//3.35 
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char n[100];
//    scanf("%s", n);
//
//    int len = strlen(n);
//    int pal = 1;
//
//    for(int i = 0; i < len/2; i++) {
//        if(n[i] != n[len-i-1]) {
//            pal = 0;
//            break;
//        }
//    }
//
//    if(pal) printf("Palindromo\n");
//    else printf("Nao\n");
//}
//==========================================
//3.36
//#include <stdio.h>
//#include <string.h>
//
//void main(void)
//{
//    printf("Decimal: %d\n",10);
//    printf("Binarie: %b\n",10);
//
//}
//==========================================
//3.37 
//#include <stdio.h>
//void main ( void )
//{
//    int loop = 300000000;
//
//    for ( int x = 1; x <= loop; x++ )
//    {
//        if ( x == 100000000 | x == 200000000 | x == 300000000 )
//        {
//            printf("CHECK: %d\n",x);
//        }
//    }
//
//}
//==========================================
//3.38
//#include <stdio.h>
//void main ( void )
//{
//    for ( int x = 1; x <= 100; x++ )
//    {
//        printf("*");
//        if ( x % 10 == 0)
//        {
//            printf("\n");
//        }
//    }
//}
//==========================================
//3.39  - 106 - ???????????????????????????????????????????????????????????
//==========================================
//3.40  - 106
//#include <stdio.h>
//void main ( void )
//{
//    for ( int x = 0; x <= 10; x++ )
//    {
//        for ( int xx = 0; xx <= 10; xx++ )
//        {
//            printf("* ");
//        }
//        printf("\n");
//        if ( x % 2 == 0 )
//        {
//            printf(" ");
//        }
//    }
//}
//==========================================
//3.41
//#include <stdio.h>
//void main ( void )
//{
//    int number = 1;
//    for ( int x = 0; x <= 10; x++ )
//    {
//        printf("-- \t%d\n", number);
//        number = number * 2;
//    }
//}
//==========================================
//3.42
//#include <stdio.h>
//void main ( void )
//{
//    float raio;
//    float pi = 3.14159;
//    printf("Defina o Raio: ");
//    scanf("%f", &raio);
//    printf("Valor da circuverencia: %f", raio * raio);
//}
//==========================================
//3.43
//#include <stdio.h>
//void main ( void )
//{
//    printf( "%d", ( 1 + 1 ) );
//}
//==========================================
//3.44
//#include <stdio.h>
//void main ( void )
//{
//    float lado1;
//    float lado2;
//    float lado3;
//    printf("lado1: ");
//    scanf("%f", &lado1);
//    printf("lado2: ");
//    scanf("%f", &lado2);
//    printf("lado3: ");
//    scanf("%f", &lado3);
//    printf("\tlado1\tlado2\tlado3\n");
//    printf("\t%.2f\t%.2f\t%.2f\n", lado1, lado2, lado3);
//}
//==========================================
//3.45
//#include <stdio.h>
//void main ( void )
//{
//    int lado1;
//    int lado2;
//    int lado3;
//    printf("lado1: ");
//    scanf("%d", &lado1);
//    printf("lado2: ");
//    scanf("%d", &lado2);
//    printf("lado3: ");
//    scanf("%d", &lado3);
//    printf("\tlado1\tlado2\tlado3\n");
//    printf("\t%d\t%d\t%d\n", lado1, lado2, lado3);
//}
//==========================================
//3.46  - 106pg - ???????????????????????????????????????????????????????????
//3.47  - 106pg - ???????????????????????????????????????????????????????????
//3.48  - 106pg - ???????????????????????????????????????????????????????????
//3.49  - 106pg - ???????????????????????????????????????????????????????????
//==========================================
//4.1  - 135pg 
//a) definida
//b) indefinida 
//c) variavel de controle ou contador 
//d) continue 
//e) break 
//f) switch 
//==========================================
//4.2  - 135pg 
//a) falsa 
//b) falso 
//c) falso 
//d) verdade 
//==========================================
//4.3  - 135pg
//4.3.A
//  int soma=0;
//  for ( int x=0; x<99; x++ )
//  {
//      if ( x % 2 != 0 )
//       {
//          soma += x;
//       }
//  }
//4.3.B
//#include <stdio.h> 
//void main(void)
//{
//    float number = 333.546372;
//    printf(": %.1f\n", number);
//    printf(": %.2f\n", (int)(number * 100) / 100.0);
//    printf(": %.3f\n", number);
//    printf(": %.4f\n", number);
//    printf(": %.5f\n", number);
//    printf(": %f \n", number);
//}
//4.3.C
//#include <stdio.h> 
//#include <math.h> 
//void main(void)
//{
//    printf(": %.2f \n", pow(2.5,3));
//}
//4.3.D
//  int soma=0;
//  for ( int x=0; x<99; x++ )
//  {
//      if ( x % 2 == 0 )
//       {
//          soma += x;
//       }
//  }
//4.3.E
//  int soma=0;
//  for ( int x=0; x<99; x++ )
//  {
//      if ( x % 2 == 0 )
//       {
//          soma += x;
//       }
//  }
//==========================================
//4.4
//a) int x=1;
//b) float y=.1;
//c) falta o case
//d)  int x=1; <=  
//==========================================
//4.5
//a) int x=100;
//b) break;default
//c) int intVal;char charVal 
//d) int x=.000001   
//e) int x=1; x <= 999; x++ ; x % 2 != 0 
//f) do
//g) ;
//==========================================
//4.6
//a) 4,6,8...
//b) 12,18...
//c) 3,6,9
//d) 1   
//e) 12,9,6...
//==========================================
//4.7 - 138pg
#include <stdio.h> 

int main()
{
    printf("HELLO!!!!..\n");
}








































































































































//Notas
// qtlitros == -1 ? break : continue; ---------- break eee continue nao fucioona com (? :) 
// C nao tem valores boleanos true ee false --------- verdade
// como saber o porcento de alguma coisa no C -------   (porcentagem / 100) * X 
// como se ler iso (n / 100) * X-------   n porcento de x, n cendo 0.0 
//
//
