// Esto es un comentario unilineal. 

/*
Esto es un comentario multilineal.
*/

// Aquí importo la libreria nativa "iostream" *obligatorio
// Esto me permite interactuar con un programa desde cero
#include <iostream>

// Aquí defino la función principal *obligatorio que se llame main
int main() {
    // Aquí se coloca la información que se mostrará en pantalla
    std::cout << "Tipos de datos en C++" << std::endl;
    
    //Texto
    std::cout << "Javier Jiménez es el mejol" << std::endl;
    
    // Numero entero
    std::cout << 5 << std::endl;
    // Numero entero con comillas (el programa no lo toma en cuenta como numero sino como simbolo)
    std::cout << "5" << std::endl;
    
    // Numero decimal
    std::cout << 5.5 << std::endl;
    
    // Boleano
    // Esta se representa con un 1 si es verdadero, y con un 0 si es falso
    std::cout << (5 < 6) << std::endl;
    std::cout << (5 == 6) << std::endl;
    std::cout << (5 > 6) << std::endl;
    std::cout << true << std::endl;
    std::cout << false << std::endl;
    
    // Las estructuras de control sirven para controlar el flujo de nuestra logica
    // Permiten comparar valores
    // Controlan que bloque de codigo se va a ejecutar, dependiendo del resultado de la comparacion
    // Declaramos una variable llamada edad, y le asigno un valor numerico de tipo entero
    int edad = 19;
    
    // Estructura basica de un if
    if (edad >= 1 && edad < 18) {
        std::cout << "Eres menor de edad" << std::endl;
    } else if (edad >= 18 && edad <= 59) {
        std::cout << "Eres mayor de edad" << std::endl;
    } else {
        std::cout << "Eres anciano" << std::endl;
    }
    
    //Esta linea de código se debe colocal siempre al final de la función, indica que el programa, si llega a esta linea, se ha ejecutado correctamente. 
    return 0;
}
