# include "Cliente.cpp"
# include <iostream>
using namespace std;
main(){
    string nit, nombres, apellidos, direccion;
    int telefono;
    cout<<"Ingrese nit: ";
    cin>>nit;
    cout<<"Ingrese nombres: ";
    cin>>nombres;
    cout<<"Ingrese apellidos: ";
    cin>>apellidos;
    cout<<"Ingrese direccion: ";
    cin>>direccion;
    cout<<"Ingrese telefono: ";
    cin>>telefono;
    //Instanciando de un objeto 
    Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
    obj.mostrar();
    cout<<"ingrese nit: ";
    cin>>nit;
    obj.setNit(nit);
    obj.mostrar();
}