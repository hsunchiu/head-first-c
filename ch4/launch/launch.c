#include <stdio.h>
#include "thruster.h"

int main(){
	puts("Try to check the thruster ready?");

	if(check_thruster())
		puts("Thruster is ready.");
	else{
		puts("Thruster has something wrong!!!");
		puts("Launch failed!!!");
		return 1;
	}	

	puts("Fire !!!");

	puts("Launch successully. Congradulations!!!");
	return 0;
}
