#define KEYPAD_C
/*********************************************************************
**																	**
** MODULES USED 													**
** 																	**
**********************************************************************/
#include "hw_types.h"
#include "hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "keypad.h"
#include "main.h"
/*********************************************************************
** 																	**
** EXPORTED VARIABLES 												**
** 																	**
*********************************************************************/
extern unsigned char g_boton; /*Numero de botón*/
extern unsigned long g_us_boton_frecuency; /*Frecuencia de los botones*/
/*********************************************************************
** 																	**
** GLOBAL VARIABLES 												**
** 																	**
**********************************************************************/
unsigned long g_ul_keypad_switches = 0x1f; /*Valor leído en los botones*/
void pulsar_boton(){
	switch(g_ul_keypad_switches){
		case KEY_CONFIRMAR:g_boton = CONFIRMAR;
		g_us_boton_frecuency = FRECUENCIA_CONFIRMAR;
			break;
		}
}
