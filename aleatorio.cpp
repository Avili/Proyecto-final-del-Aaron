#include <iostream>
#include <cstdlib>
#include <ctime>

//ESTE CÓDIGO NO FUNCIONA PARA LO QUE ESTAMOS INTENTANDO HACER, ASÍ QUE QUEDA DESCARTADO




int main() {
    srand(time(0)); // Inicializa la semilla de los números aleatorios
    int vidas = 3;
    int dinero = 0;
    char continuar;

    for (int i = 0; i < 5; ++i) {
        int numeroAleatorio = rand() % 4 + 1; // Genera un número aleatorio entre 1 y 4

        int numeroUsuario;
        std::cout << "Por favor, elige una opción entre 1 y 4: ";
        std::cin >> numeroUsuario;

        if (numeroUsuario == numeroAleatorio) {
            std::cout << "¡Acertaste! El número aleatorio es " << numeroAleatorio << ".\n";
            dinero += 100; // Aumenta el dinero por cada acierto
            std::cout << "Tienes " << vidas << " vidas y " << dinero << " dólares.\n";
            if (i < 4) {
                std::cout << "¿Deseas continuar con el juego? (s/n): ";
                std::cin >> continuar;
                if (continuar == 'n' || continuar == 'N') {
                    std::cout << "Has ganado " << dinero << " dólares.\n";
                    return 0;
                }
            }
        } else {
            std::cout << "Lo siento, no acertaste. El número aleatorio era " << numeroAleatorio << ".\n";
            --vidas; // Disminuye las vidas por cada error
            std::cout << "Tienes " << vidas << " vidas y " << dinero << " dólares.\n";
            if (vidas == 0) {
                std::cout << "Has perdido todas tus vidas. Fin del juego.\n";
                return 0;
            }
        }
    }

    std::cout << "¡Felicidades! Has ganado el juego con " << dinero << " dólares.\n";
    return 0;
}


