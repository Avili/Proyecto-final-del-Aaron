#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, ""); // Establece la configuración regional del usuario

    int vida = 100;
    int eleccion;
    bool juegoActivo = true;

    while(juegoActivo) {
        cout << "Vida: " << vida << endl;
        cout << "1. Gritar.\n";
        cout << "2. Revisar el armario.\n";
        cout << "3. Salir de la habitación e ir a la habitación de la izquierda.\n";
        cout << "4. Salir de la habitación e ir a la habitación de la derecha.\n";
        cout << "5. Salir del juego.\n";
        cout << "Elige una acción: ";
        cin >> eleccion;

        switch(eleccion) {
            case 2: { // Revisar el armario
                bool salirArmario = false;
                while (!salirArmario) {
                    cout << "Encuentras una llave.\n";
                    cout << "1. Salir de la habitación actual e ir a la habitación de la izquierda. \n";
                    cout << "2. Salir de la habitación actual e ir a la habitación de la derecha. \n";
                    cout << "3. Seguir explorando la habitación. \n";
                    cout << "4. Salir del juego. \n";
                    cout << "Escoge una acción: \n";
                    cin >> eleccion;
                    switch (eleccion) {
                        case 1:
                            cout << "Llegas y hay un librero. \n";
                            salirArmario = true;
                            break;
                        case 2:
                            cout << "Este es el baño y te estaba esperando la señora y eres golpeado con el bat y pierdes 25 de vida. \n";
                            vida -= 25;
                            if(vida <= 0) {
                                cout << "Has perdido toda tu vida. El juego ha terminado. \n";
                                juegoActivo = false;
                            }
                            salirArmario = true;
                            break;
                        case 3:
                            cout << "Mientras explorabas la habitación tiras accidentalmente la lámpara y llega la señora y te golpea con el bat y perdes 25 de vida. \n";
                            vida -= 25;
                            if(vida<=0) {
                                cout << "Has perdido toda tu vida. El juego ha terminado. \n";
                                juegoActivo = false;
                            }
                            break;
                        case 4:
                            cout << "Has decidido salir del juego. ¡Hasta la próxima!\n";
                            juegoActivo = false;
                            salirArmario = true;
                            break;
                        default:
                            cout << "Acción no reconocida. Por favor, elige una acción válida.\n";
                            break;
                    }
                }
                break;
            }
            // Aquí van los otros casos...
        }
    }

    return 0;
}
