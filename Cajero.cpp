#include <iostream>
#include <conio.h>
#include <string.h>

char num_account[]={'paco', 'maria', 'jorge'};
char nip[]={'6554', '2358', '1789'};
char username, password, new_pass, encontrado;

int intento, continuar, salir, realizar, casilla;

int monto_retirar, monto_total;
int num_cuenta, monto_dt;
int i;

int main(){
	salir=2;
	
	while (salir==2){
		std::cout<<" Bienvenido!!!\n";
		std::cout<<"--------------------------------------------------------------------------";
		std::cout<<"\n ingrese su nombre de usuario: "; 
		std::cin>>username;
		std::cout<<"\n ingrese su contraseña: ";
		std::cin>>password;
		
	    for (i=1; i<4; i++){
	    	if (num_account[i]==username and nip[i]==password){
	    		encontrado='v';
	    		casilla=i;
			}
		}
		 
		if (encontrado=='v'){
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
				 
				 case 2:
				 std::cout<<"\n";
				 std::cout<<"\n El saldo que tiene en la cuenta es de "<<monto_total<<" dineros \n";
				 break;
				 
				 case 3:
				 std::cout<<"\n";
				 std::cout<<"\n #Num de cuenta a depositar ";
				 std::cin>>num_cuenta;
				 std::cout<<"\n Monto a depositar ";
				 std::cin>>monto_dt;
				 break;
				 
				 case 4:
				 std::cout<<"\n";
				 std::cout<<"\n #Num de cuenta a transferir ";
				 std::cin>>num_cuenta;
				 std::cout<<"\n Monto a depositar ";
				 std::cin>>monto_dt;
				 break;
				 
				 case 5:
				 //cambio de nip
				 std::cout<<" Ingrese su actual contraseña ";
				 std::cin>>password;
				 
				 while (nip[casilla]!=password){
				 	 std::cout<<"\n la contraseña ingresada es incorrecta \n";
				 	 std::cout<<" Vuelva a ingresar su actual contraseña \n";
				 	 std::cout<<" Contraseña ";
				 	 std::cin>>password;
				 }
				 
				 std::cout<<" Ingrese su nueva contraseña ";
				 std::cin>>new_pass;
				 nip[casilla]=new_pass;
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
		
		std::cout<<" Desea salir? (1-si 2-no) \n";
		std::cin>>salir;
	}
	
	system("cls");
	std::cout<<"--------------------------------------------------------------------------";
	std::cout<<"\n Come Back Anytime!!! :D \n";
	getch();
	return 0;
}
