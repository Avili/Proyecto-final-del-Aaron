#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


	//INICIO Y DECLARACION DE VARIABLE
	
	
	
	
	
	
	

int main() {
    int vida = 100;
    int eleccion;
    bool juegoActivo = true;
    setlocale(LC_ALL, ""); 

	//MENSAJE PRINCIPAL (hay que cambiarlo)
	cout << "Bienvenido a este minijuego, a lo largo del juego deberas tomar desiciones y tratar de no" << endl;
	cout << "perder toda tu vida, de lo contrario el juego termina." << endl;
	cout << "¡Mucha suerte!" << endl;

	//MENÚ PRINCIPAL

    while(juegoActivo) {
    	
    	//EL MENSAJE QUE MOSTRARÁ LA VIDA DEL JUGADOR
    	
        cout << "Vida: " << vida << endl;
        
        
        //OPCIONES A ELEGIR
        
        cout << "1. Gritar.\n";
        cout << "2. Revisar el armario.\n";
        cout << "3. Salir de la habitación e ir a la habitación de la izquierda.\n";
        cout << "4. Salir de la habitación e ir a la habitación de la derecha.\n";
        
        //OPCIÓN PARA QUE EL USUARIO DECIDA SALIR DEL PROGRAMA
        
        cout << "5. Salir del juego.\n";
        
        //MENSAJE Y ENTRADA ENTRADA DE INFROMACIÓN
        
        cout << "Elige una acción: ";
        cin >> eleccion;

		//EMPIEZAN LOS SUBMENÚS

        switch(eleccion) {
        	 
        	//SUBMENÚ (GRITAR)
        	//do {
        	   case 1:
            	
            	//MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
            	
                cout << "Gritas, llega la señora hasta la habitación con un bat y te golpea y pierdes 25 de vida. \n";
                
                //EL MEDIDOR DE VIDA SE VE AFECTADO CON LA DESICIÓN
                
                vida -= 25;
				if(vida <= 0) {
                    cout << "Has perdido toda tu vida. El juego ha terminado.\n";
                    juegoActivo = false; 
				}
                //DESPUÉS DE LA DESICIÓN SE LE PREGUNTA AL USUSARIO QUE QUIERE HACER
                
                cout << "¿Ahora que quieres hacer?. \n";
                break;  
        	
           
                
                //SUBMENÚ (REVISAR EL ARMARIO)
            //do {
               case 2: 
                
                //EL MENSAJE QUE MOSTRARÁ LA VIDA DEL JUGADOR
                
                cout << "Vida: " << vida << endl;
                
                //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
                
                cout << "Encuentras una llave.\n";
                
                //DESPUÉS DE LA DESICIÓN SE LE PREGUNTA AL USUSARIO QUE QUIERE HACER
                
			    cout << "¿Ahora que quieres hacer?. \n"; 
			    
			    //OPCIONES A ELEGIR
			        
        		cout << "1. Salir de la habitación actual e ir a la habitación de la izquierda. \n";
        		cout << "2. Salir de la habitación actual e ir a la habitación de la derecha. \n";
        		cout << "3. Seguir explorando la habitación. \n";
        		cout << "4. Salir del juego. \n";
        		
        		//MENSAJE Y ENTRADA ENTRADA DE INFROMACIÓN
        		
        		cout << "Escoge una acción: \n";
        		cin >> eleccion;
        	
			    //SUBMENÚ DEL CASE 2
			    
				switch (eleccion) {
            		case 1: 
            		
            		    //EL MENSAJE QUE MOSTRARÁ LA VIDA DEL JUGADOR
                
                        cout << "Vida: " << vida << endl;
            		
            		    //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
            		    
                		cout << "Llegas y hay un librero. \n";
                		
                        //DESPUÉS DE LA DESICIÓN SE LE PREGUNTA AL USUSARIO QUE QUIERE HACER
                			
						cout << "¿Ahora que quieres hacer?. \n";
							
						//OPCIONES A ELEGIR
                			
                		cout << "1. Revisar el librero. \n";
                		cout << "2. Salir de la habitación y bajar las escaleras para llegar al piso de abajo. \n";
                		cout << "3. Ir a la habitación de enfrente. \n";
                		cout << "4. Salir del juego. \n";
                			
                		//MENSAJE Y ENTRADA ENTRADA DE INFROMACIÓN
                			
                		cout << "Escoge una acción: \n";
                		cin >> eleccion;
                		
                		switch (eleccion){
                		    case 1:
                		    
                		        //EL MENSAJE QUE MOSTRARÁ LA VIDA DEL JUGADOR
                
                                cout << "Vida: " << vida << endl;       
                		        
                		        //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
                		        
                		        cout << "No encuentras nada que sirva. \n";
                		        
                		        //DESPUÉS DE LA DESICIÓN SE LE PREGUNTA AL USUSARIO QUE QUIERE HACER
                			
						        cout << "¿Ahora que quieres hacer?. \n";
						        
						        //OPCIONES A ELEGIR
                			
                	        	cout << "1. Salir de la habitación y bajar las escaleras para llegar al piso de abajo. \n";
                		        cout << "2. Ir a la habitación de enfrente. \n";
                		        cout << "3. Salir del juego. \n";
                		        
                		        //MENSAJE Y ENTRADA ENTRADA DE INFROMACIÓN
                			
                		        cout << "Escoge una acción: \n";
                	            cin >> eleccion;
                	            
                	            
                		        
                		        // aqui vamos a anidar otros para la entrada de información
                		        
                		        switch (eleccion) {
                		            case 1:
                		                
                		                //EL MENSAJE QUE MOSTRARÁ LA VIDA DEL JUGADOR
                
                                        cout << "Vida: " << vida << endl;
                		    
                		                //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
                		        
                		                cout << "Llegas a una puerta. \n";
                        		        cout << "Esta es la puerta de salida. \n";
                		                cout << "Usas la llave para abrirla y escapar. \n";
                		                cout << "felicidades haz completado el juego. \n";
                		                exit(0);
                		                
                		                break;
                		                
                		            case 2:
                		                  
                		                //EL MENSAJE QUE MOSTRARÁ LA VIDA DEL JUGADOR
            
                                        cout << "Vida: " << vida << endl;
                                        
                                        //MOSTRAR lo que pasó al tomar esa desición
                                        
                                        cout << "La habitación de enfrente no tenía piso y caes al piso de abajo. \n ";
                                        //EL MEDIDOR DE VIDA SE VE AFECTADO CON LA DESICIÓN
                
                                        vida -= 25;
				                        if(vida <= 0) {
                                            cout << "Has perdido toda tu vida. El juego ha terminado.\n";
                                            juegoActivo = false; 
				                        } else {
				                            
				                            //cout << "Vida: " << vida << endl;
				                            
				                            cout << "Afortunadamente caes cerca de una puerta. \n";
				                            cout << "Esta es la puerta de salida. \n";
                		                    cout << "Usas la llave para abrirla y escapar. \n";
                		                    cout << "felicidades haz completado el juego. \n";
                		                    exit(0);
				                        }
                                        
                                        //MOSTRAR EL MENSAJE DE ENTRADA DE DATOS EN CASO DE ENTRADA DE DATOS
                                        
                                        break;
                                        
                                        //MENSAJE QUE SE MOSTRARÁ SI EL USUARIO INGRESA INFORMACIÓN INVÁLIDA
                                    case 3:
                                    
                                        cout << "Has decidido salir del juego. ¡Hasta la próxima!\n";
                		                juegoActivo = false;
                		                break;

                                    default:
                                        cout << "Acción no reconocida. Por favor, elige una acción válida.\n";
                                        break;
                		                
                		                
                		        }    
                		         
                //	}while (eleccion);
                		        break;
                		     
                		    case 2:
                		    
                		        //EL MENSAJE QUE MOSTRARÁ LA VIDA DEL JUGADOR
                
                                cout << "Vida: " << vida << endl;
                		    
                		        //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
                		        
                		        cout << "Esta es la puerta de salida. \n";
                		        cout << "Usas la llave para abrirla y escapar. \n";
                		        cout << "felicidades haz completado el juego. \n";
                		        exit(0);
                		        
                		        
                		        
                		        break;
                		        
                		        
                		        
                		    
                		    case 3:
                		    
                		        cout << "La habitación de enfrente no tenía piso y caes al piso de abajo. \n ";
                                        //EL MEDIDOR DE VIDA SE VE AFECTADO CON LA DESICIÓN
                
                                        vida -= 25;
				                        if(vida <= 0) {
                                            cout << "Has perdido toda tu vida. El juego ha terminado.\n";
                                            juegoActivo = false; 
				                        } else {
				                            
				                            //cout << "Vida: " << vida << endl;
				                            
				                            cout << "Afortunadamente caes cerca de una puerta. \n";
				                            cout << "Esta es la puerta de salida. \n";
                		                    cout << "Usas la llave para abrirla y escapar. \n";
                		                    cout << "felicidades haz completado el juego. \n";
                		                    exit(0);
				                        }
                                        
                                        //MOSTRAR EL MENSAJE DE ENTRADA DE DATOS EN CASO DE ENTRADA DE DATOS
                                        
                                        break;
                                        
                            case 4: 
                		        //OPCIÓN PARA QUE EL USUARIO DECIDA SALIR DEL PROGRAMA
							
						        cout << "Has decidido salir del juego. ¡Hasta la próxima!\n";
                		        juegoActivo = false;
                		        break;
            
                                //MENSAJE QUE SE MOSTRARÁ SI EL USUARIO INGRESA INFORMACIÓN INVÁLIDA
            
                            default:
                                cout << "Acción no reconocida. Por favor, elige una acción válida.\n";
                                break;
                		        
                		}

                		break;
                			
                	case 2:
                	
                	    
                	
                	    //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
                	    
                		cout << "Este es el baño y te estaba esperando la señora y eres golpeado con el bat y pierdes 25 de vida. \n";
						
						//EL MEDIDOR DE VIDA SE VE AFECTADO CON LA DESICIÓN
						
						vida -= 25;
                	    	if(vida <= 0) {
                    	        cout << "Has perdido toda tu vida. El juego ha terminado. \n";
                    		    juegoActivo = false;
                			}
                			
                		break;
                			
                	case 3:
                	
                	   
                	
                	    //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
                			
                		cout << "Mientras explorabas la habitación tiras accidentalmente la lámpara y llega la señora y te golpea con el bat y perdes 25 de vida. \n";
                		
                		//EL MEDIDOR DE VIDA SE VE AFECTADO CON LA DESICIÓN
                		
                		vida -= 25;
                		if(vida<=0) {
                			cout << "Has perdido toda tu vida. El juego ha terminado. \n";
                			juegoActivo = false;
						}
							
						break;
							
					case 4:
					
					    
					
					    //OPCIÓN PARA QUE EL USUARIO DECIDA SALIR DEL PROGRAMA
							
						cout << "Has decidido salir del juego. ¡Hasta la próxima!\n";
                		juegoActivo = false;
                		break;
            
                        //MENSAJE QUE SE MOSTRARÁ SI EL USUARIO INGRESA INFORMACIÓN INVÁLIDA
            
                    default:
                        cout << "Acción no reconocida. Por favor, elige una acción válida.\n";
                        break;
                }

                break; 
            //} while (eleccion);    
        //} while (eleccion);

            case 3: //SUBMENÚ (SALIR DE LA HABITACIÓN ACTUAL E IR A LA HABITACIÓN DE LA IZQUIERDA)
                
							
                cout << "Llegas y hay un librero. \n"; //MENSAJE DE LO QUE OCURRIÓ AL TOMAR ESA DESICIÓN
                			
                	
                			
				cout << "¿Ahora que quieres hacer?. \n"; //DESPUÉS DE LA DESICIÓN SE LE PREGUNTA AL USUSARIO QUE QUIERE HACER
							
				//OPCIONES A ELEGIR
                			
                cout << "1. Revisar el librero. \n";
                cout << "2. Salir de la habitación y bajar las escaleras para llegar al piso de abajo. \n";
                cout << "3. Ir a la habitación de enfrente. \n";
               	cout << "4. Salir del juego. \n";
                			
          		//MENSAJE Y ENTRADA ENTRADA DE INFROMACIÓN
                			
                cout << "Escoge una acción: \n";
                cin >> eleccion;
                			
            	break;
            	
            case 4:
                cout << "Este es el baño y te estaba esperando la señora y eres golpeado con el bat y pierdes 25 de vida. \n";
                
                
                
                vida -= 25;
                if(vida <= 0) {
                    cout << "Has perdido toda tu vida. El juego ha terminado.\n";
                    juegoActivo = false;
                }
                break;
                
            case 5:
                cout << "Has decidido salir del juego. ¡Hasta la próxima!\n";
                juegoActivo = false;
                break;
                
            default:
                cout << "Acción no reconocida. Por favor, elige una acción válida.\n";
                break;
        }
	}

    return 0;
}
