//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <SI_EFM8BB3_Register_Enums.h>                  // SFR declarations
#include "InitDevice.h"
// $[Generated Includes]
// [Generated Includes]$

SI_SBIT(LED0, SFR_P1, 4);
SI_SBIT(LED1, SFR_P1, 5);
SI_SBIT(LED2, SFR_P1, 6);
SI_SBIT(SW0, SFR_P0, 2);
SI_SBIT(SW1, SFR_P0, 3);
SI_SBIT(InA, SFR_P1, 0);
SI_SBIT(InB, SFR_P1, 1);
SI_SBIT(InC, SFR_P1, 2);
SI_SBIT(InD, SFR_P1, 3);
SI_SBIT(OpA, SFR_P2, 0);
SI_SBIT(OpB, SFR_P2, 1);
SI_SBIT(Pu, SFR_P0, 7);

//-----------------------------------------------------------------------------
// main() Routine
// ----------------------------------------------------------------------------
int main(void) {
	// Call hardware initialization routine
	unsigned long i;

	unsigned long c=10000;
	enter_DefaultMode_from_RESET();
	InA = 0;
	InB = 0;
	InC = 0;
	InD = 0;
	OpA = 1;
	OpB = 0;
	while (1) //infinite loop
	{

		Pu = 0;
		LED0 = 1;
		for (i = 0; i < c; i++) {
			for (i = 0; i < c; i++){
			_nop_();
		}}



		LED0=0;

		Pu = 1;

		for (i = 0; i < c; i++) {

			for (i=0;i<c;i++){

			_nop_();
		}}



	}
}
// $[Generated Run-time code]
// [Generated Run-time code]$

