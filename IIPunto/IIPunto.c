#include <stdio.h>
#include <stdlib.h>
#include "mycommon.h"
#include "common.h"
#include "common_threads.h"
#include <unistd.h>

volatile double v;
puerta doorI;

void *threadI(void *arg)
{
   sleep(2)
   cerrar_puerta(doorI);
   double z=25;
   double y=350;
   v=z/y;
   abrir_puerta(doorI);
   return NULL;
}

void *threadII(void *arg)
{
   double x=1250;
   v=x*v;
}

main 
