#include "string"

class Contenido{
    public:
        Contenido(std::string dia, std::string hora, std::string actividad){
            this->dia = dia;
            this->hora = hora;
            this->actividad = actividad;
        };

        std::string getDia(){
            return dia;
        }

        std::string getHora(){
            return hora;
        }

        std::string getActividad(){
            return actividad;
        }

        void setDia(std::string dia){
            this->dia = dia;
        }

        void setHora(std::string hora){
            this->hora = hora;
        }

        void setActividad(std::string actividad){
            this->actividad = actividad;
        }
    private:
        std::string dia;
        std::string hora;
        std::string actividad;
};