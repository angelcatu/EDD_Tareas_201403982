#ifndef MATRIZ_H
#define MATRIZ_H

#include "NodoMatriz.h"

#include <iostream>
#include "string"


class Matriz
{
    public:
        Matriz(){
            NodoMatriz *nuevo = new NodoMatriz("Origen");
            this->cabecera = nuevo;
        };       

        bool esVacia(){
            return this->cabecera == nullptr;
        }

        void insertarDia(std::string dia){
            NodoMatriz * nuevo = new NodoMatriz(dia);

            //Insertar ordenado
            if(cabecera->getSiguiente() == nullptr){
                cabecera->setSiguiente(nuevo);

                //Insertar en esa cabecera el valor

            }else{
                NodoMatriz * actual = cabecera->getSiguiente();

                int lunes = 1;
                int martes = 2;
                int miercoles = 3;
                int jueves = 4;
                int viernes = 5;

                int diaActual = 0;

                if (dia == "Lunes"){
                    diaActual = 1;
                }else if(dia == "Martes"){
                    diaActual = 2;
                }else if(dia == "Miercoles"){
                    diaActual = 3;
                }else if(dia == "Jueves"){
                    diaActual = 4;
                }else if(dia == "Viernes"){
                    diaActual = 5;
                }
                
                while(actual != nullptr){
                    
                    if(diaActual == 1){
                        
                            


                    }else if(diaActual == 2){

                    }else if(diaActual == 3){

                    }else if(diaActual == 4){

                    }else if(diaActual == 5){

                    }

                    actual = actual->getSiguiente();
                }
                
            }
            

        }

        void insertarHora(std::string hora){
            NodoMatriz * nuevo = new NodoMatriz(hora);
            
            if(cabecera->getSiguiente() == nullptr){
                this->cabecera->setAbajo(nuevo);
            }
        }

    protected:
    private:

        NodoMatriz * cabecera ;
};

#endif // MATRIZ_H