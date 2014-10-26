#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void menu(void);

int main(void){
   	menu();
	return 0;
}

void menu(void){
	int op;
	
   	do{
   		
   		printf("\n\n\n MENU \n\n");
	   	
		printf("1. DESHABILITAR MOUSE \n");
	   	printf("2. HABILITAR MOUSE \n\n");
	   	
		printf("3. DESHABILITAR MOUSE DERECHO \n");
	   	printf("4. HABILITAR MOUSE DERECHO \n\n");
	   	
	   	printf("5. DESHABILITAR BOTON APAGADO \n");
	   	printf("6. HABILITAR BOTON APAGADO \n\n");
	   	
	   	printf("7. DESHABILITAR PANEL DE CONTROL \n");
	   	printf("8. HABILITAR PANEL DE CONTROL \n\n");
	   	
	   	printf("9. DESHABILITAR CAMBIO DE USUARIO \n");
	   	printf("10. HABILITAR CAMBIO DE USUARIO \n\n");
	   	
	   	printf("11. DESHABILITAR REGISTRO \n");
	   	printf("12. HABILITAR REGISTRO \n\n");
	   	
	   	printf("13. DESHABILITAR CAMBIO DE THEMES \n");
	   	printf("14. HABILITAR CAMBIO DE THEMES \n\n");
	   	
	   	printf("15. DESHABILITAR ADMINISTRADOR DE TAREAS \n");
	   	printf("16. HABILITAR ADMINISTRADOR DE TAREAS \n\n");
	   	
	   	printf("17. DESHABILITAR POLITICAS DE SEGURIDAD \n");
	   	printf("18. HABILITAR POLITICAS DE SEGURIDAD \n\n");
	   	
	   	printf("\n\n Seleccione un valor de la lista: ");
	   	scanf("%d",&op);
	   	
		system("cls");
	   	
	   	switch(op){
	   		
	   		//MOUSE
			case 1:
	   				system("reg add HKEY_LOCAL_MACHINE\\system\\CurrentControlSet\\Services\\Mouclass \/v Start \/t REG_DWORD \/d 4 \/f");
	   				printf("valor uno \n");
	   			break;
	   			
	   		case 2:
	   				system("reg add HKEY_LOCAL_MACHINE\\system\\CurrentControlSet\\Services\\Mouclass \/v Start \/t REG_DWORD \/d 3 \/f");
	   				printf("valor dos \n");
	   			break;
	   		
			// BOTÓN DERECHO	
	   		case 3:
	   			system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoViewContextMenu \/t REG_DWORD \/d 1 \/f");
	   			break;
	   			
	   		case 4:
	   			system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoViewContextMenu \/t REG_DWORD \/d 0 \/f");
	   			break;
	   			
	   		//BOTÓN APAGAOD
	   		case 5:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoClose \/t REG_DWORD \/d 1 \/f");
	   			break;	
	   		
	   		case 6:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoClose \/t REG_DWORD \/d 0 \/f");
	   			break;
	   		
			//PANEL DE CONTROL
			case 7:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoControlPanel \/t REG_DWORD \/d 1 \/f");
	   			break;	
	   		
	   		case 8:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoControlPanel \/t REG_DWORD \/d 0 \/f");
	   			break;
				   
			//CAMBIO DE USUARIO
			case 9:
	   			system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v HideFastUserSwitching \/t REG_DWORD \/d 1 \/f");
	   			break;	
	   		
	   		case 10:
	   			system("reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v HideFastUserSwitching \/t REG_DWORD \/d 0 \/f");
	   			break;	
	   		
	   		
	   		//REGISTRO
	   		case 11:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableRegistryTools \/t REG_DWORD \/d 1 \/f");
	   			break;	
	   		
	   		case 12:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableRegistryTools \/t REG_DWORD \/d 0 \/f");
	   			break;	
	   		
	   		//CAMBIO DE THEMES
	   		case 13:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoThemesTab \/t REG_DWORD \/d 1 \/f");
	   			break;	
	   		
	   		case 14:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer \/v NoThemesTab \/t REG_DWORD \/d 0 \/f");
	   			break;
	   		
	   		//ADMINISTRADOR DE TAREAS
	   		case 15:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableTaskMgr \/t REG_DWORD \/d 1 \/f");
	   			break;	
	   		
	   		case 16:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System \/v DisableTaskMgr \/t REG_DWORD \/d 0 \/f");
	   			break;
	   			
	   		//POLITICAS DE SEGURIDAD
	   		case 17:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Policies\\Windows\\MMC\\{8FC0B734-A0E1-11D1-A7D3-0000F87571E3}\/v Restrict_Run \/t REG_DWORD \/d 1 \/f");
	   			break;	
	   		
	   		case 18:
	   			system("reg add HKEY_CURRENT_USER\\Software\\Policies\\Windows\\MMC\\{8FC0B734-A0E1-11D1-A7D3-0000F87571E3}\/v Restrict_Run \/t REG_DWORD \/d 0 \/f");
	   			break;
	   		
	   		default:
	   				printf("ningún valor seleccionado \n");
	   			break;
	   	}
	   	
	   
   	}
   	while(true);
}
