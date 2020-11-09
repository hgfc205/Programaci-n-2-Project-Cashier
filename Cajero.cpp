#include <iostream>
#include <conio.h>
#include <strings.h>

char username[10], password[10];
int intento, continuar, realizar;
int monto_retirar, monto_total;

int main(){
	intento=1;
	std::cout<<" Bienvenido!!!\n";
	
	while (intento<4){
		std::cout<<"--------------------------------------------------------------------------";
		std::cout<<"\n ingrese su nombre de usuario: "; 
		std::cin>>username;
		std::cout<<"\n ingrese su contraseña: ";
		std::cin>>password;
		
		if (strcmp(username, "paco")== 0 && strcmp(password, "1234")== 0){
			continuar=1;
			while (continuar==1){
		     system("cls");
			 std::cout<<"--------------------------------------------------------------------------";
			 std::cout<<"\n Welcome!!!\n";
			 std::cout<<" Que es lo que desea realizar en el cajero? \n";
			 std::cout<<" (1-Retirar efectivo, 2-Consultar saldo, 3-Depositar) \n";
			 std::cout<<" (4-Transferencia, 5-Cambio de nip (contraseña)) \n";
			 std::cin>>realizar;
			 
			 while (realizar>6){
			 	 system ("cls");
			 	 std::cout<<"\n La acción que quiere realizar no está disponible \n";
			 	 std::cout<<" Seleccione la acción correcta \n";
			 	 std::cout<<" Que es lo que desea realizar en el cajero? \n";
				 std::cout<<" (1-Retirar efectivo, 2-Consultar saldo, 3-Depositar) \n";
				 std::cout<<" (4-Transferencia, 5-Cambio de nip (contraseña)) \n";
				 std::cin>>realizar;
			 }
			 
			 switch (realizar){
			 	 case 1: 
			 	 std::cout<<"\n";
			 	 std::cout<<"\n Actualmente tiene "<<monto_total<<" dineros \n";
				 std::cout<<"\n Ingrese el monto a retirar ";
			 	 std::cin>>monto_retirar;
			 	 
			 	 while (monto_retirar>monto_total){
			 	 	 system("cls");
			 	 	 std::cout<<" No tiene tanto dinero en su cuenta \n";
			 	 	 std::cout<<" Actualmente tiene "<<monto_total<<" dineros \n";
			 	 	 std::cout<<" Ingrese el monto a retirar ";
					 std::cin>>monto_retirar;
				  }
				  
				 std::cout<<"\n";
				 std::cout<<"\n El retiro se ha realizado correctamente \n";
				 monto_total=monto_total-monto_retirar;
				 std::cout<<" Actualmente tiene "<<monto_total<<" dineros en el cajero \n";
				 break;
			 }
			 
			 std::cout<<"\n Jejeje, Thank You \n";
			 std::cout<<"--------------------------------------------------------------------------";
			 std::cout<<"\n ¿Desea continuar? (1- continuar y 2- salir) ";
			 std::cin>>continuar;
			 
			 while (continuar>2){
			 	 std::cout<<"\n Ingrese el dato correcto (1- continuar y 2- salir) ";
			 	 std::cin>>continuar;
			 }
			 
			 if (continuar==2){
			 	 intento=4;
			 }
			}
		}
		else{
			intento++;
			system("cls");
			if (intento<4){
				std::cout<<"--------------------------------------------------------------------------";
				std::cout<<"\n  El nombre de usuario o la contraseña ingresada es erronea \n";
				std::cout<<" Vuelva a ingresar sus datos \n";
			}
			
			if (intento==4){
                std::cout<<"--------------------------------------------------------------------------";
				std::cout<<"\n Ha ingresado la contra erroneamente 3 veces seguidas!!! \n";
				std::cout<<" HA BLOQUEADO LA CUENTA!!!, F en el chat \n";
			}
		}
	}
	
	system("cls");
	std::cout<<"--------------------------------------------------------------------------";
	std::cout<<"\n Come Back Anytime!!! :D \n";
	getch();
	return 0;
}
