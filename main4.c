#include <stdio.h>

int main (int argc, char *argv[]) {

    int opc=0;

    printf("Seleccione una opcion:\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");

    scanf("%d",&opc);


    if (opc==1){
        printf("Suma\n");
    }else if(opc==2){
        printf("Resta\n");
    }else if(opc==3){
        printf("Multiplicacion\n");
    }else if(opc==4){
        printf("Division\n");
    }else{
        printf("Opcion no valida\n");
    }

    switch (opc)
    {
    case 1:
        printf("Suma\n");
        break;
    case 2:
        printf("Resta\n");
        break;
    case 3:
        printf("Multiplicacion\n");
        break;
    case 4:
        printf("Division\n");
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }


    return 0;
}