#include "string"

class NodoMatriz{

    public:

        NodoMatriz( std::string dia){
            this->dia = dia;            
        }

        NodoMatriz( std::string hora){
            this->hora = hora;            
        }

        std::string getHora(){
            return this->hora;
        }

        std::string getDia(){
            return this->dia;
        }

        NodoMatriz * getSiguiente(){
            return this->siguiente;
        }

        NodoMatriz * getAbajo(){
            return this->abajo;
        }

        

        //Métodos SET
        void setHora(std::string hora){
            this->hora = hora;
        }

        void setDia(std::string dia){
            this->dia = dia;
        }

        void setSiguiente(NodoMatriz * siguiente){
            this->siguiente = siguiente;
        }

        void setAbajo(NodoMatriz * abajo){
            this->abajo = abajo;
        }

        int getPosX(){
            return this->posX;
        }

        int getPosY(){
            return this->posY;
        }

        void getPosX(int posX){
            this->posX = posX;
        }

        void getPosY(int posY){
            this->posY = posY;
        }

    private:    
        std::string hora;
        std::string dia;
        NodoMatriz *siguiente;
        NodoMatriz *abajo;
        int posX;
        int posY;



};