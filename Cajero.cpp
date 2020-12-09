#include <iostream>
#include <string.h>
#include <conio.h>

int main(){
	long num_account[]={0,0,4139878,5789651,7865142};
	int nip[]={0,0,1234,1234,1234};
	int efectivo[]={0,500,500,500,500};
	int block[]={0,0,0,0,0};
	
	long contra, user, accion, dinero, num_cuenta;
	
	char continuar, sesion, casilla, casilla2; //variables para los ciclos while
	int i, cont; //variables iteradoras
	
	continuar='s';
	while ((continuar=='s') or (continuar=='S')){
		std::cout<<" Bienvenido!!!\n";
		std::cout<<" Ingrese su numero de cuenta: ";
		std::cin>>user;
		std::cout<<"\n Ingrese su nip: ";
		std::cin>>contra;
		
		i=1;
		casilla=0;
		while ((casilla==0) && (i<5)){
			if ((num_account[i]==user) && (nip[i]==contra))
			{
				casilla=i;
			} 
			else if ((nip[i]!=contra) && (num_account[i]==user))
			{
				block[i]=block[i]+1;
			}
			i++;
		}
		
		if ((casilla>0) && (block[casilla]<4))
		{
			sesion='n';
			while ((sesion=='n') or (sesion=='N'))
			{
				system("cls");
				std::cout<<".................................................\n";
				std::cout<<" que desea realizar \n";
				std::cout<<" 1-Consulta de saldo \n";
				std::cout<<" 2-Retiro de efectivo \n";
				std::cout<<" 3-Depositar \n";
				std::cout<<" 4-Transferencia \n";
				std::cout<<" 5-Cambio de Nip \n";
				std::cout<<".................................................\n";
				std::cout<<" Que acción desea realizar: ";
				std::cin>>accion;
				std::cout<<"\n";	
				
				switch(accion){
					case 1:
						std::cout<<" Su saldo es de: "<<efectivo[casilla]<<" pesotes \n";
					break;
					
					case 2:
						std::cout<<" Su saldo actual es de: "<<efectivo[casilla]<<" pesotes \n";
						std::cout<<"Ingrese el monto a retirar: ";
						std::cin>>dinero;
						
						while (dinero>efectivo[casilla]){
							system("cls");
							std::cout<<" Su saldo es de: "<<efectivo[casilla]<<" pesotes \n";
							std::cout<<" no puede retirar un monto mas grande del que tiene\n";
							std::cout<<" Vuelva a ingresar el saldo a retirar: ";
							std::cin>>dinero;
						}
						
						efectivo[casilla]=efectivo[casilla]-dinero;
						std::cout<<"Retiro efectuado correctamente \n";
					break;
					
					case 3:
						std::cout<<"Ingrese la cuenta a depositar: ";
						std::cin>>num_cuenta;
						
						casilla2=0;
						i=1;
						while ((casilla2==0) && (i<5))
						{
							if (num_cuenta==num_account[i]){
								casilla2=i;
							}
							i++;
						}
						
						if (casilla2>0){
							std::cout<<"Ingrese la cantidad a depositar: ";
							std::cin>>dinero;
							
							efectivo[casilla2]=efectivo[casilla2]+dinero;
							efectivo[casilla]=efectivo[casilla]-dinero;
							std::cout<<" el deposito se ha efectuado correctamente \n";
						} else{
							std::cout<<" no se encontró a nadie con ese numero de cuenta\n";
						}
					break;
					
					case 4:
						std::cout<<"Ingrese el #num cuenta a transferir: ";
						std::cin>>num_cuenta;
						
						casilla2=0;
						i=1;
						while ((casilla2==0) && (i<5))
						{
							if (num_cuenta==num_account[i]){
								casilla2=i;
							}
							i++;
						}
						
						if (casilla2>0){
							std::cout<<"Ingrese la cantidad a transferir: ";
							std::cin>>dinero;
							
							efectivo[casilla2]=efectivo[casilla2]+dinero;
							efectivo[casilla]=efectivo[casilla]-dinero;
							std::cout<<" la tranferencia se ha efectuado correctamente \n";
						} else{
							std::cout<<" no se encontró a nadie con ese numero de cuenta\n";
						}
					break;
					
					case 5:
						std::cout<<" Ingrese su actual contraseña: ";
						std::cin>>contra;
						
						casilla2=0;
						i=1;
						while ((casilla==0) && (i<5))
						{
							if (contra==nip[i]){
								casilla=i;
							}
							i++;
						}
						
						if (casilla>0){
							std::cout<<"Ingrese su nueva contraseña: ";
							std::cin>>contra;
							nip[casilla]=contra;
						} else 
						{
							std::cout<<" la contraseña ingresada no es la contraseña que está usando actualmente";
						}
					break;
				}					
				
				std::cout<<".................................................\n";
				std::cout<<" Desea cerrar sesion? ";
				std::cin>>sesion;
			}
		} else
		{
			if (block[casilla]>=4)
			{
				std::cout<<"HIJOLEE!!!... \n";
				std::cout<<"La cuenta está Bloqueada";
			}
			else
			{
				std::cout<<" la contraseña o el #num de cuenta utilizado es incorrecto";
			}
		}
		system("cls");
		std::cout<<" Gracias por usar el cajero. adios, vuelva pronto!!!";			
	}
	return 0;
}
	
