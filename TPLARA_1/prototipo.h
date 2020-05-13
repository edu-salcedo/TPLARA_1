#ifndef PROTOTIPO_H_INCLUDED
#define PROTOTIPO_H_INCLUDED
using namespace std;
void intro();
int menuPrincipal();
int menuPlato();
void opciones(int );
bool cargar_plato(struct platos *);
int buscar_ID_plato(int*);
void guardar_plato(struct platos);
int listar(struct platos );
void listar_todo(struct platos);
struct platos leer_platos(int);
void listar_plato_id(struct platos);
int menu_editar(int );
void editar_plato();
bool sobreescribir(struct platos ,int);
void platos_restaurante(struct platos );
float validacion_costo();
float validacion_venta(float);
int validacion_tiempo();
int validacion_id_res();
float validacion_comision();
 int validacion_cat();
 void logotipo ();
 void baja_plato();
 void campo_vacio();

void id_inexistente();
#endif // PROTOTIPO_H_INCLUDED
