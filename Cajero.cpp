#include <iostream>
#include <conio.h>
#include <strings.h>

char username[10], password[10];
int intento, continuar;

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
			 
			 
			 std::cout<<"\n Jejeje, Thank You \n";
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
