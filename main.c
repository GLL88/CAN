int main(void)
{
	/*
	 * Inicializamos los componentes y perif�ricos necesarios
	 */
	inicializacion();
	/*
	 * Superloop.
	 */
    while(1)
    {
    	a=array[m];
    	select_task();
    }
}

void select_task(){

	/*
	 * Recibo la trama
	 */
	recibir_trama();

	/*
	 * Leemos los datos de la trama
	 */
	leer_keypad();

	/*
	* Asignamos una nota seg�n el bot�n que se haya pulsado
	*/
	pulsar_boton();

	/*
	 * Reproducimos la bot�n seleccionada
	 */
	reproducir_boton();

	 /*
	  * Escribimos y dibujamos en la pantalla
	  */
	dibujar_en_pantalla();

}

void inicializacion (){

	//inicializacion_clock();
	//inicializacion_pwm();
	inicializacion_display();
	inicializacion_keypad();
	//inicializacion_led();

}
