/*
   Un poema de amor
*/

#include "Amante.h"

Amante a, b;

boolean presentacionDeAmigos;
int atractivoFisico, atractivoIntelectual, atractivoEconomico;
int umbral;
boolean cosasEnComun;
boolean interes, conversacion;

void setup() {

}

void loop() {

  conocimiento();


}

boolean conocimiento(){
  //si a decide ir a la fiesta y b decide ir a la fiesta
  if(a.fiesta == true && b.fiesta == true){
    //empieza la fiesta
    if(presentacionDeAmigos == true){
      
      if ( atractivoFisico > umbral || atractivoIntelectual > umbral || atractivoEconomico > umbral || cosasEnComun == true ){
        interes = true;
      }
      if (interes == true){
        conversacion = true;
      }

      if (conversacion == true){
        //sube nivel de confianza
        incrementadorDeConfianza();
        incrementadorDeCalentura();
      }
    }
  }
}

int incrementadorDeConfianza(){

  
}

int incrementadorDeCalentura(){

  
}

