/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package EDD;

import Models.Bolsa;

/**
 *
 * @author angel
 */
public class Nodo {
    
    private Bolsa bolsa;
    public Nodo siguiente;    

    public Nodo(Bolsa bolsa) {
        this.bolsa = bolsa;
        this.siguiente = this;
           
    }

    public Bolsa getBolsa() {
        return bolsa;
    }

    public void setBolsa(Bolsa bolsa) {
        this.bolsa = bolsa;
    }


    
    

    public Nodo getSiguiente() {
        return siguiente;
    }

    public void setSiguiente(Nodo siguiente) {
        this.siguiente = siguiente;
    }


    
    
    
    
    
}
