case 2:    // Revisar el armario
        
				
            	
            	//MENSAJE DE LO QUE OCURRI� AL TOMAR ESA DESICI�N
            	
                cout << "Encuentras una llave.\n";
                
                //DESPU�S DE LA DESICI�N SE LE PREGUNTA AL USUSARIO QUE QUIERE HACER
                
				cout << "�Ahora que quieres hacer?. \n";
				
				//OPCIONES A ELEGIR
                
                cout << "1. Salir de la habitaci�n actual e ir a la habitaci�n de la izquierda. \n";
                cout << "2. Salir de la habitaci�n actual e ir a la habitaci�n de la derecha. \n";
                cout << "3. Seguir explorando la habitaci�n. \n";
                cout << "4. Salir del juego. \n";
                
                //MENSAJE Y ENTRADA ENTRADA DE INFROMACI�N
                
				cout << "Escoge una acci�n: \n";
				cin >> eleccion;
				
				break;
                	
					switch(eleccion) {
                		
                		//SUBMEN� (SALIR DE LA HABITACI�N ACTUAL E IR A LA HABITACI�N DE LA IZQUIERDA)
                		
						case 1:
							
							//MENSAJE DE LO QUE OCURRI� AL TOMAR ESA DESICI�N
							
                			cout << "Llegas y hay un librero. \n";
                			
                			//DESPU�S DE LA DESICI�N SE LE PREGUNTA AL USUSARIO QUE QUIERE HACER
                			
							cout << "�Ahora que quieres hacer?. \n";
							
							//OPCIONES A ELEGIR
                			
                			cout << "1. Revisar el librero. \n";
                			cout << "2. Salir de la habitaci�n y bajar las escaleras para llegar al piso de abajo. \n";
                			cout << "3. Ir a la habitaci�n de enfrente. \n";
                			cout << "4. Salir del juego. \n";
                			
                			//MENSAJE Y ENTRADA ENTRADA DE INFROMACI�N
                			
                			cout << "Escoge una acci�n: \n";
                			cin >> eleccion;
                			
                			break;	
                			
                		case 2:
                			
                			cout << "Este es el ba�o y te estaba esperando la se�ora y eres golpeado con el bat y pierdes 25 de vida. \n";
							vida -= 25;
                			if(vida <= 0) {
                    			cout << "Has perdido toda tu vida. El juego ha terminado. \n";
                    		juegoActivo = false;
                			}
                			
                			break;
                			
                		case 3:
                			
                			cout << "Mientras explorabas la habitaci�n tiras accidentalmente la l�mpara y llega la se�ora y te golpea con el bat y perdes 25 de vida. \n";
                			vida -= 25;
                			if(vida<=0) {
                				cout << "Has perdido toda tu vida. El juego ha terminado. \n";
                				juegoActivo = false;
							}
							
                            salirArmario = true;
							break;
							
						case 4:
							
							cout << "Has decidido salir del juego. �Hasta la pr�xima!\n";
                			juegoActivo = false;
                			break;
            			default:
                			cout << "Acci�n no reconocida. Por favor, elige una acci�n v�lida.\n";
               				break;
					}
				}
			
                break;
















































cout << "ahora que quieres hacer?" << endl;
               
                
                cout << "texto1" <<endl;
                cout << "texto2" <<endl;
                cout << "texto3" << endl;
                cin >> eleccion;
                
                if(eleccion == 1) {
                    cout << "este es el texto 1.\n";
                    vida += 10;
                    cout << "Vida: " << vida << endl;
                    	
                    	cout << "texto1 del submenu1" <<endl;
                		cout << "texto2 del submenu2" <<endl;
                		cout << "texto3 del submenu3" << endl;
               	 		cin >> eleccion;
                    	
                    if(eleccion == 1) {
                    	cout << "este es el texto 1 del submenu1.\n";
                    	vida += 10;
                    	cout << "Vida: " << vida << endl;
                	} else if(eleccion == 2) {
                    	cout << "este es el texto 2 del submenu2.\n";
                	} else if(eleccion == 3) {
                    	cout << "este es el texto 3 del submenu3.\n";
                	}
                    
                    
                    
                    
                    
                    
                    
                } else if(eleccion == 2) {
                    cout << "este es el texto 2.\n";
                } else if(eleccion == 3) {
                    cout << "este es el texto 3.\n";
                }
