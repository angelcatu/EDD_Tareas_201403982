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
public class ListaCircular {

    private Nodo raiz;

    public ListaCircular() {
        raiz = null;
    }

    public void insertar(Bolsa bolsa) {
        Nodo nuevo = new Nodo(bolsa);

        if (raiz != null) {
            nuevo.setSiguiente(raiz.getSiguiente());
            raiz.setSiguiente(nuevo);
        }

        raiz = nuevo;

    }

    public boolean esVacia(ListaCircular lista) {
        return lista.raiz == null;
    }

    public int contar() {

        Nodo actual;
        int cantidad = 0;

        if (raiz != null) {

            actual = raiz.getSiguiente();

            do {
                System.out.println("*************************************************");
                System.out.println("Producto: " + actual.getBolsa().getProducto());
                System.out.println("Cantidad: " + actual.getBolsa().getCantidad());
                System.out.println("*************************************************");
                
                actual = actual.getSiguiente();   
                
                cantidad++;
                
            } while (actual != raiz.getSiguiente());

        } else {
            System.out.println("Lista circular vacía");
        }
        
        return cantidad;
    }

}
