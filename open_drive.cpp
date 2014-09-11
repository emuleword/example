#include <windows.h> 
#include <iostream> 

using namespace std;

	typedef MCIERROR WINAPI (*CDROM)(const char*,char*,unsigned,HWND); 
    CDROM pCD; 

	void AbrirCD() 
{ 
	pCD("Set CDAudio Door Open",NULL,0,NULL); 
} 

    void FecharCD()
{ 
	pCD("Set CDAudio Door Closed",NULL,0,NULL);
} 

int main() 
{ 
    int opc;

	  HINSTANCE dll = LoadLibrary("winmm.dll"); 
	if(!dll) 
return 1; 


	  pCD = (CDROM)GetProcAddress(dll,"mciSendStringA"); 
	if(!pCD) 
return 1; 

       /* while(1)
       {
               system("cls");
               
               cout << "---------------------------------------------------------------" << endl;
		       cout << "-----------------By-#M0rph-WCG_147-0KaL------------------------" << endl;
               cout << "-------------------------WCGroup-------------------------------" << endl;
               cout << "---------------------------------------------------------------" << endl;
               
               cout << "Escolha uma opcao: " << endl;
               cout << "1 - AbrirCD  " << endl;
               cout << "2 - FecharCD " << endl;
               cout << "3 - Sair     " << endl;
               cin >> opc;
                      
                      switch(opc)
                      {
							
							case 1:
								AbrirCD();
								break;
							case 2:
								FecharCD();
								break;
							case 3:
                                 return 0;
                            default:
								cout << "Opcao invalida caralho, nao ta vendo nao ehh?! O_o" << endl << endl;
								system("pause");
                                break;
                      }
        */
        AbrirCD();
       

return 0; 
}
