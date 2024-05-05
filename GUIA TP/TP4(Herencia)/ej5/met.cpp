#include <iostream>
#include <vector>
#include "class.h"
using namespace std;

Personaje::Personaje(string _nombre,string _raza,int _fuerza,int _inteligencia,int _puntosVidaMax){
    nombre=_nombre;
    raza=_raza;
    fuerza=_fuerza;
    inteligencia=_inteligencia;
    puntosVidaMax=_puntosVidaMax;
    puntosVidaActuales=_puntosVidaMax;
}
string Personaje::getNombre(){
    return nombre;
}
int& Personaje::getPuntosVidaActuales(){
    return puntosVidaActuales;
}
void Personaje::setPuntosVidaActuales(int nuevosPuntos){
    puntosVidaActuales=nuevosPuntos;
}

void Personaje::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Raza: "<<raza<<endl;
    cout<<"Fuerza: "<<fuerza<<endl;
    cout<<"Inteligencia: "<<inteligencia<<endl;
    cout<<"Puntos de vida máximos: "<<puntosVidaMax<<endl;
    cout<<"Puntos de vida actuales: "<<puntosVidaActuales<<endl;
}

Mago::Mago(string _nombre, string _raza, int _fuerza, int _inteligencia, int _puntosVidaMax):Personaje(_nombre, _raza, _fuerza, _inteligencia, _puntosVidaMax){

}

void Mago::aprendeHechizo(string hechizo){
    if (hechizos.size()<4){
        hechizos.push_back(hechizo);
    }
}

void Mago::lanzaHechizo(Personaje& objetivo){
    if (!hechizos.empty()) {
        cout<<getNombre()<<" lanza un hechizo sobre "<<objetivo.getNombre()<<endl;
        int nuevosPuntosVida=objetivo.getPuntosVidaActuales()-10;
        objetivo.setPuntosVidaActuales(nuevosPuntosVida);
        hechizos.pop_back();
    }
}

void Mago::mostrar() {
    Personaje::mostrar();
    cout<<"Hechizos memorizados:"<<endl;
    for (string hechizo:hechizos) {
        cout<<"- "<<hechizo<<endl;
    }
}

Clerigo::Clerigo(string _nombre, string _raza, int _fuerza, int _inteligencia, int _puntosVidaMax, string _dios):Personaje(_nombre, _raza, _fuerza, _inteligencia, _puntosVidaMax){
    dios=_dios;
}

void Clerigo::curar(Personaje& objetivo){
    cout<<getNombre()<<" cura a "<<objetivo.getNombre()<<endl;
    int nuevosPuntosVida=objetivo.getPuntosVidaActuales()+10;
    objetivo.setPuntosVidaActuales(nuevosPuntosVida);
}

void Clerigo::mostrar() {
    Personaje::mostrar();
    cout<<"Dios: "<<dios<<endl;
}