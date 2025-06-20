#include "viajes.h"
#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED

static const char archCliente[] = {"archivoCliente.bin"};

typedef struct{
char calle[20];
int num;
char localidad[20];
}stDomicilio;

typedef struct{
char nYa[30];
char contrasenia[30];
stViajeFecha fechaN;
char genero;
char dni[10];
char tel[11];
stDomicilio dom;
stViaje v;
int estado;
}stCliente;


///PROTOTIPOS CLIENTE(alta, baja, mostrar, modificacion)///////////////////////////////////////////////////////////////////

stCliente cargarCliente();
void mostrarCliente(stCliente A);
void mostrarOrdenAlfabCActivo();
void mostrarOrdenDNIActivosC();
void mostrarOrdenAlfabBajaC();
void mostrarOrdenDNIBajaC();
void mostrarOrdenAlfabC();
void mostrarOrdenDNIC();
void mostrarArchivoCliente();

///modificar cliente//////////////////////////////////////////////////////////////////////////////////////////////////////
void modificarCliente (char nYa[]);
stCliente modificarDatosCliente(stCliente aux);
stCliente modificarNyAC(stCliente A);
stCliente modificarFechaNacC(stCliente A);
stCliente modificarGeneroC(stCliente A);
stCliente modificarDniC(stCliente A);
stCliente modificarTelC(stCliente A);
stCliente modificarDomicilioC(stCliente A);
stCliente modificarContraseniaC (stCliente A);

stCliente modificarDatosClienteEmpleado(stCliente aux);
void modificarClienteEaux (char nYa[30]);

///Dar Baja Cliente//////////////////////////////////////////////////////////////////////////////////////////////////////////
void darBajaCliente (char nYa[30]);
stCliente darBajaC(stCliente aux);

///PROTOTIPOS DOMICILIO/////////////////////////////////////////////////////////////////////////////////////////////////////
stDomicilio cargarDomicilio();
void mostrarDomicilio(stDomicilio A);
stDomicilio modificarDomicilio(stDomicilio A);

///PROTOTIPOS ARCHIVOS/////////////////////////////////////////////////////////////////////////////////////////////////////////

void cargarArchivoCliente();
void encontrarClienteN(char N[30]);
void encontrarClienteDni(char D[10]);
void MostrarArregloCliente(stCliente A[], int validos);

/// ORDENAMIENTO CLIENTES/////////////////////////////////////////////////////////////////////////////////////////////////////
int calcularRegistrosC();
int ArchivoToArregloCliente(stCliente** arrD, int validos);
int ArchivoToArregloClienteActivo(stCliente** arrD, int validos);
int ArchivoToArregloBajaClientes(stCliente** arrD, int validos);
void ordenarArrDinamicoClientes (stCliente** arrD, int validos);

// validarexistencia

int validarExistenciaCliente (char dniC[10]);

///Filtrar Clientes/////////////////////////////////////////////////////////////////////////////////////////////////////////
void filtrarClienteGenero(char G);
void filtrarClienteEstado(int E);

///CUENTA CLIENTE///////////////////////////////////////////////////////////////////////
void registrarCliente();
stCliente busquedaClienteInicioSesion (char dni[], char contrasenia[]);
stCliente iniciarSesionCliente();
stCliente cargarContraseniaCliente(stCliente A);

#endif // CLIENTES_H_INCLUDED
