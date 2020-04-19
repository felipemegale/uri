#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, pi=3.14159;
    double rectri, cir, trap, square, rec;
    scanf("%lf %lf %lf", &a, &b, &c);
    rectri = a*c/2;
    cir = pi*pow(c,2);
    trap = (a+b)*c/2;
    square = b*b;
    rec = a*b;
    printf("TRIANGULO: %.3lf\n", rectri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rec);
    return 0;
}
