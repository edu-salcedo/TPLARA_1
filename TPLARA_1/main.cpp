#include <iostream>
#include <stdlib.h>
#include "rlutil.h"
using namespace rlutil;
#include <string.h>
# include <cstdlib>
# include  <cstdio>
# include <iomanip>
using namespace std;
#include "prototipo.h"
#include  "menus.h"
#include "funciones.h"


int main()
{ int op;
   do{
     intro();
    op=menuPrincipal();
    if (op)
    {
       opciones(op);
    }
   } while (op!=0);
    return 0;
}

