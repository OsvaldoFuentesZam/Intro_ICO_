#include <stdio.h>
#include <iostream>

int main(void)
{

    int Ancho;
    int Alto;
    float porcentajex;
    float porcentajey;
    float porcentajeAncho;
    float porcentajeAlto;

    int coordenadasx1;
    int coordenadasy1;
    int coordenadasx2;
    int  coordenadasy2;

    scanf_s("%i", &Ancho);
    scanf_s("%i", &Alto);
    scanf_s("%f", &porcentajex);
    scanf_s("%f", &porcentajey);
    scanf_s("%f", &porcentajeAncho);
    scanf_s("%f", &porcentajeAlto);
  
    /*Un comentario desde Github*/ 
    
    
    
    /*zzzzzzzzzzz
              zz
             zz
            zz
           zz
          zz        
         zz             zz
        zz             zz
       zz             zz
      zz             zz
     zz             zz
    zzzzzzzzzzzz   z*/             
    coordenadasx1 = porcentajex * Ancho;
    coordenadasy1 = porcentajey * Alto;
    coordenadasx2 = Ancho * porcentajeAncho + coordenadasx1;
    coordenadasy2 = Alto * porcentajeAlto + coordenadasy1;

    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", Ancho, Alto, porcentajex,porcentajey, porcentajeAncho, porcentajeAlto,
        coordenadasx1, coordenadasy1, coordenadasx2, coordenadasy2);

    return 0;
    
} 
