#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED
using namespace std;
struct platos
{
    int id ;
    char  nombre[50];
    float costoPre;
    float valor;
    float tiempo_Pre;
    int id_Restaurante;
    float comision_Rest;
    int id_categoria;
    bool estado;
};

void intro()
{     setColor(GREEN);
    cout <<"     ==============================================================================="<<endl;
    cout <<"     ==============================================================================="<<endl;
    setColor(RED);
    cout <<"               ###           @@@@         $$$$$$$$$$)        QQQQ                   "<<endl;
    cout <<"               ###          @@@@@@        $$$$$$$$$$))      QQQQQQ                  "<<endl;
    cout <<"               ###         @@@  @@@       $$$$     $$))    QQQ  QQQ                 "<<endl;
    cout <<"               ###        @@@    @@@      $$$$$$$$$$$)    QQQ    QQQ                "<<endl;
    setColor(BLUE);
    cout <<"               ###       @@@ @@@@ @@@     $$$$$$$$$$)    QQQ  QQQ QQQ               "<<endl;
    cout <<"               ###      @@@        @@@    $$$$   $$$    QQQ        QQQ              "<<endl;
    cout <<"               ######  @@@          @@@   $$$$    $$$  QQQ          QQQ             "<<endl;
    cout <<"               #######  @@@          @@@   $$$$    $$$  QQQ          QQQ            "<<endl;
    setColor(GREEN);
    cout <<"     ==============================================================================="<<endl;
    cout <<"     ==============================================================================="<<endl;
}


int menuPrincipal()
{
    int op;
    do
    {   setColor(WHITE);
        cout <<endl;
        cout <<endl;
        cout <<setw(50)<<" MENU PRINCIPAL    "<<endl;
        cout <<endl;
        cout <<setw(50)<<"[1] PLATOS              "<<endl;
        cout <<setw(50)<<"[2] CLIENTES            "<<endl;
        cout <<setw(50)<<"[3] PEDIDOS             "<<endl;
        cout <<setw(50)<<"[4] REPORTES            "<<endl;
        cout <<setw(50)<<"[5] CONFIGURACI0N       "<<endl;
        cout <<setw(50)<<" ------------------------"<<endl;
        cout <<setw(50)<<"[0] SALIR DEL PROGRAMA  "<<endl;
        cout <<endl;
        setColor(MAGENTA);
        cout<<endl;
        cout <<setw(40)<<" ingrese opcion ";
        cin >>op;
        system("cls");
        if (op>5)
        {
            cout <<"opcion incorrecta ";
            cin.ignore();
            cin.get();
            system("cls");
        }
    }
    while (op>5);

    return op;
}

int menuPlato()
{
    int op;
    do
    {
        setColor(LIGHTCYAN);
        cout <<endl;
        cout <<setw(50)<<" MENU DE PLATOS           "<<endl;
        cout <<endl;
        cout <<setw(50)<<"[1] NUEVO PLATO                "<<endl;
        cout <<setw(50)<<"[2] MODIFICAR PLATO            "<<endl;
        cout <<setw(50)<<"[3] LISTAR PLATO PRO ID        "<<endl;
        cout <<setw(50)<<"[4] PLATOS POR RESTAURANTE     "<<endl;
        cout <<setw(50)<<"[5] LISTAR TODOS LOS PLATOS    "<<endl;
        cout <<setw(50)<<"[6] DAR BAJA PLATO             "<<endl;
        cout <<setw(50)<<" -------------------------------"<<endl;
        cout <<setw(50)<<"[0] VOLVER AL MENU PRINCIPAL  *"<<endl;
        cout <<endl;
        setColor(MAGENTA);
        cout <<setw(40)<<"ingrese opcion ";
        cin >>op;
        setColor(LIGHTCYAN);
        system("cls");
        if (op>6)
        {
            cout <<"opcion incorrecta ";
            cin.ignore();
            cin.get();
            system("cls");
        }
    }
    while (op>6);

    return op;
}

int menu_editar(int id)
{ int op;

    do {
    cout <<"          ID  : "<<id<<endl;
    cout <<"                               \n";
    cout <<"    [1]  NOMBRE               "<<endl;
    cout <<"    [2]  COSTO PREPARACION    "<<endl;
    cout <<"    [3]  VALOR VENTA          "<<endl;
    cout <<"    [4]  TIEMPO PREPARACION   "<<endl;
    cout <<"    [5]  ID RESTAURANTE       "<<endl;
    cout <<"    [6]  COMICION RESTAURANTE "<<endl;
    cout <<"    [7]  ID CATEGORIA         "<<endl;
    cout <<"    __________________________"<<endl;
    cout <<"    [0]  VOLVER ALTERIOR      "<<endl;
    cin>>op;
    }while(op>7);
return op;
}


int menu_cliente()
{  int op;
    do
    {
        setColor(LIGHTCYAN);
        gotoxy(1,3);
        cout <<"             MENU DE CLIENTE          "<<endl;
        cout <<endl;
        cout <<"       [1] NUEVO CLIENTE                "<<endl;
        cout <<"       [2] MODIFICAR CLIENTE            "<<endl;
        cout <<"       [3] LISTAR CLIENTE POR ID        "<<endl;
        cout <<"       [4] LISTAR TODOS LOS CLIENTES    "<<endl;
        cout <<"       [5] DAR BAJA CLIENTE             "<<endl;
        cout <<"       -------------------------------"<<endl;
        cout <<"       [0] VOLVER AL MENU PRINCIPAL  *"<<endl;
        cout <<endl;
        setColor(MAGENTA);
        cout <<"      ingrese opcion ";
        cin >>op;
        setColor(LIGHTCYAN);
        system("cls");
        if (op>5)
        {
            cout <<"opcion incorrecta ";
            cin.ignore();
            cin.get();
            system("cls");
        }
    }
    while (op>5);

    return op;

}


 float validacion_costo()
 { float costo;
   do{
      cout <<" COSTO PREPARACION ";
      cin>>costo;
      if (costo<0){
         setColor(RED);
        cout <<"\n no se puede ingresar numeros negativos"<<endl;
        setColor(LIGHTCYAN);
        cout<<endl;
        cin.ignore();
        cin.get();

      }
   }while(costo<0);
   cls();
   return costo;
 }


 float  validacion_venta(float costo_pre)
 {
     float valor_venta;
   do{
      cout <<" COSTO VENTA : ";
      cin>>valor_venta;
       setColor(RED);
      if (valor_venta<0){
           setColor(RED);
        cout <<"\n no se puede ingresar numeros negativos"<<endl;

        cout<<endl;
        cin.ignore();
        cin.get();
      }
      if (valor_venta<costo_pre)
      { setColor(RED);
        cout <<" \n El valor de la venta no puede ser"<<endl;
        cout <<"    menor al costo de preparacion"<<endl;
        cout<<endl;
        cin.ignore();
        cin.get();
      }
      setColor(LIGHTCYAN);
      cls();
   }while(valor_venta<0||valor_venta<costo_pre);

   return valor_venta;
 }

 int validacion_tiempo()    //   funcion para validar que el tiempo de preparacion no sea un valor negativo.
 {int time;
 do{
 cout <<" TIEMPO PREPARACION: ";
 cin>>time;
 if (time<0)
 {  setColor(RED);
    cout <<" el tiempo  o puede ser negativo"<<endl;
    setColor(LIGHTCYAN);
    cin.ignore();
    cin.get();
    cls();
 }
   }while(time<0);
   return time;
 }

 int validacion_id_res()    // funcion para validar id del restaurante.
 {int id;
 do{
 cout <<" ID RESTAURANTE    :";
 cin>>id;
 if (id<0)
 {   setColor(RED);
    cout <<" el ID del restaurante no puede ser negativo"<<endl;
    setColor(LIGHTCYAN);
    cin.ignore();
    cin.get();
    cls();
 }
   }while(id<0);
   return id;
 }


 float validacion_comision()
 {int comi;
 do{
 cout <<" COMISION DEL RESTAURANTE :";
 cin>>comi;
 if (comi<0||comi>100)
 {  setColor(RED);
    cout <<" la comision del restaurante no puede ser negativo ni mayor a 100 & "<<endl;
    setColor(LIGHTCYAN);
    cin.ignore();
    cin.get();
    cls();
 }
   }while(comi<0||comi>100);
   return comi;

 }

 int validacion_cat()          //validacion de id  de categoria.
 {
     int cat;
 do{
 cout <<" ID CATEGORIA    :";
 cin>>cat;
 if (cat<0)
 {  setColor(RED);
    cout <<" el ID de categoria no puede ser negativo"<<endl;
    setColor(LIGHTCYAN);
    cin.ignore();
    cin.get();
    cls();
 }
   }while(cat<0);
   return cat;
 }


#endif // MENUS_H_INCLUDED
