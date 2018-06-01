#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int NumberOfDigits(int rol);
int toString(int rol, int itt);

int main() {
	/*                                
	char larr[9];             ////   /\          ///   ///////////////////    //////////////   ////////////////   //////////////    //////////\    ////////////
	char other;              ////   //\\        ///   ///////////////////    //////////////   ////////////////   //////////////    ////    ////   ////////////
	int first;              ////   ///\\\      ///            ////          /////            ////               /////             ////    ////   /////
	                       ////   ///  \\\    ///            ////          //////////////   ////  //////////   //////////////    ////////////    \\\\\\\\\\            .
	int drol;             ////   ///    \\\  ///            ////          //////////////   ////  //////////   //////////////    //// \\\\         \\\\\\\\\\           .
	int one;             ////   ///      \\\///            ////          /////            ////        ////   /////             ////   \\\\               \\\\          .
	int ten  = 0;       ////   ///        \\//            ////          //////////////   ////////////////   //////////////    ////     \\\\     /////////////
	int tens = 1;      ////   ///          \/            ////          //////////////   ////////////////   //////////////    ////       \\\\   /////////////
	int dig  = 0;     ////  skaitmuo, kuris bus irasytas
	int itt  = 0;    ////   skaitmenu skaicius skaiciuje 
	*/
	
	int itt  = 0;
	int rol;
	printf("enter number:\n");
	scanf(" %d", &rol);
	
	itt = NumberOfDigits(rol);
	toString(rol, itt);
	
	return 0;
}


int NumberOfDigits(int rol){
	int one;
	int tens = 1;
	int itt = 0;
	int drol;
	one  = rol;
	while(one>=tens){
		
		itt++;
		tens = tens*10;
	}
		
	return itt;
}

int toString(int rol, int itt){
	char larr[8];        // string
	int one;            //  skaicius kuri naudoju suzinot kokio ilgio skaicius
	int tens = 1;      //   parodo kokio ilgio yra skaicius
	int drol;             
	int dig = 0;     //     value of digit
	int first;      //      number without first digit
	int att;       //       shows which digit is proceed
	first = rol;
	drol = first;
	one  = first;
	for(att = 0; att<itt; att++){
		
		drol = first;
		//one  = first;
		dig = 0;
		tens = 1;
		while(one>=tens){
			
			tens = tens*10;
		}
		tens = tens / 10;
		while(one>0){
			one = one - tens;
		}
		one = one + tens;
		drol = first - one;
		while(drol>1){
			dig++;
			drol = drol - tens;
			
		}
		
		larr[att] = '0'+dig;
		first = first - (dig*tens);
		
	}
	larr[att-1] = '0'+first+(dig*tens);
	
	printf("the string is: %s\n", larr);
	
	return larr;
	
}
