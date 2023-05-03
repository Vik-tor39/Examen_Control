#include <stdio.h>

int main(){
    int num,i;
    printf("Ingrese la cantidad de elementos que desea obtener de la serie de Fibonacci:\n");
    scanf("%d",&num);
    int sum=0;
    int Fib[100];
    Fib[0]=0;
    Fib[1]=1;
    for (i=2;i<num;i++){
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
    printf("La serie de Fibonnaci es:");
    for (i=0;i<num;i++){
        printf ("%d ", Fib[i]);
    }
    
    for (i=0; i<num;i++){
        sum=sum+Fib[i];
    }
    printf("\nLa sumtoria de la serie dada es: %d",sum);
    return 0;
}