/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tarea2edd;

import EDD.ListaCircular;
import Models.Bolsa;

/**
 *
 * @author angel
 */
public class Inicio {

    ListaCircular lc = new ListaCircular();
    ListaCircular lc2 = new ListaCircular();

    void start() {
        
        lc.insertar(new Bolsa("Manzanas", 20));
        lc.insertar(new Bolsa("Peras", 43));
        lc.insertar(new Bolsa("Piñas", 24));
        lc.insertar(new Bolsa("Mangos", 67));
        lc.insertar(new Bolsa("Sandias", 10));
        lc.insertar(new Bolsa("Melocotones", 44));        
        
        if(lc.esVacia(lc)){
            System.out.println("\nLa lista está vacía");
        }else{
            System.out.println("\nLa lista no está vacía");
        }
        
        
        System.out.println("El tamaño de la lista es de: " + lc.contar()); 

         
        //************ES UNA LISTA VACÍA *******************
        
        if (lc2.esVacia(lc2)) {
            System.out.println("\nLa lista está vacía");
        } else {
            System.out.println("\nLa lista no está vacía");
        }

        System.out.println("El tamaño de la lista es de: " + lc2.contar());
        
        //**************************************************************

        

    }

}
