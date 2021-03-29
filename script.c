/* REescribir los dos caracteres de un fichero , cojer las dos primeras caracteres y ponerlos en otro fichero......: */

#include <stdio.h>
#define n 10            /*definir como constante valor 10*/
int main()
{
FILE *fp1,*fp2;
int x,i,p,aux,num[n];

   for(i=0;i<n;i++)     /*mete los numeros en el array*/
   {
     printf("Introduce un Número:");
     scanf ( "%d" , &num[i] );
   }

                       /*ESTE FOR HACE EL BUCLE DE LA CUENTA PROGRESIVA POR LA TABLA*/
   for (p=0;p<n;p++)   /*comparar los numeros hasta 9*/
   {
        if( num[p] > num[p+1] ) /*si es mayor o menor (p=p-1)=p++*/
        {
              aux=num[p];
              num[p]=num[p+1];
              num[p+1]=aux;
              p=-1; /* */
        } /*el bucle anterior lleva una tabla aux donde va el valor del num y su posicion , despues el valor vuelve a su posicion..... */
   }
 

   /*ESTE FOR SACA EN PANTALLA el orden */
    for(p=0;p<n;p++)
   {
       printf("%d", num[p]);
       if(p==n-1)
            printf("\n");
       else
            printf(" - ");
   }
return 0;
}
