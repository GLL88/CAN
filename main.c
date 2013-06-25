#include "driverlib/sysctl.h"
#include "driverlib/systick.h"
#include "driverlib/gpio.h"
#include "driverlib/pwm.h"

int main(void)
{
	/*
	 * Inicializamos los componentes y periféricos necesarios
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
	* Asignamos una nota según el botón que se haya pulsado
	*/
	pulsar_boton();

	/*
	 * Reproducimos la botón seleccionada
	 */
	reproducir_boton();

	 /*
	  * Escribimos y dibujamos en la pantalla
	  */
	dibujar_en_pantalla();

}

void inicializacion (){


	inicializacion_display();
	inicializacion_keypad();
	

}

void dibujar_en_pantalla(){
	RIT128x96x4StringDraw("DPD", 10, 5, 15);
	RIT128x96x4StringDraw("------", 10, 25, 15);
	
}

void recibir_trama(){
}

void leer_keypad(){
}

void reproducir_boton(){
}
