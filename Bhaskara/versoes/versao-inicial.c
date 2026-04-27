/* 3) Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem). */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main(){
    double a;
    double b;
    double c;
    double delta;

    printf("Digite o coeficiente de A:");
    scanf ("%lf", &a);
    printf("Digite os coeficientes de B:");
    scanf ("%lf", &b);
    printf("Digite os coeficientes de C:");
    scanf ("%lf", &c);

    if (a == 0){
        printf("Os números digitados não formam uma equação de segundo grau..\n");
    }else{
     
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0) {
        printf("A equação não possui raízes reais pois o delta é negativo.\n");
        }
      
        else if (delta == 0){
            double raiz = -b / (2 * a);
            printf(" A equação possui apenas uma raiz real(delta = 0): %.2lf\n", raiz);
          
        }else{
            double x1 = ((-b + sqrt(delta)) / (2 * a));
            double x2 = ((-b - sqrt(delta)) / (2 * a));
            printf("Raízes da equação: \n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }
    return 0;
}
