
/*Dep3_Prog6:
Un cuente el numero de veces que ahorras y nos diga el acumulado de ahorro*/
#include <stdio.h>
int main()
{
    int banco; //acumular
    int monto; // monto o cantidad a ahorrar por evento//
    int numdepositos; // la cantidad de veces que fui al banco//
    char respuesta; // Es para saber si queremos realizar otro depósito//

    //voy al banco//
    printf("\n\n monto a depositar");
    scanf("%d,&monto");
    banco= banco+monto;//acumulador//
    numdepositos = numdepositos +1;//contador//
    
    printf("\n\n dinero que tienes en el banco &f, banco");
    printf("\n\n numero de depositos &d, numdepositos");

    numdepositos=0;
    banco=0;
    monto=0;
    respuesta="s"

    do
    {
        //voy al banco
        respuesta = "s"
        printf("\n\n monto a depositar: ");
        scanf("%d",&monto);
        banco= banco + monto; //acumulador
        numdepositos= numdepositos + 1; //contador

        printf("¿Quieres realizar otro deposito (s/n)");
        scanf("%c", &respuesta);

    } while( respuesta = 's' ); //condition While = mientras
    
    printf("Dinero que tienes en el banco %d ", banco);
    printf("numero de depositos %d ", numdepositos);
    return 0;

}