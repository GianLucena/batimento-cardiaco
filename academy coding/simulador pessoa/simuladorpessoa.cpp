#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <string>
#include <fstream>
using namespace std;

int formulario(int dados[],int dadoss[],int dadosp[] ,int aux, string hora[12]){
	 int i;
char auxhora[9];
	 FILE *arq;
		arq=fopen("relatorio.txt", "w");
		fprintf(arq, "Segue o resultados do paciente nas ultimas 24 horas, com coleta de dados a cada 2 horas;\n");	
		fprintf(arq, "\nBatimentos cardiacos:\n");
			
		for(i=0; i<aux; i++){
		 fprintf(arq,"%d",dados[i]);
		 fprintf(arq," bpm\n");
		}
	     
		fprintf(arq, "\nPressao arterial:\n");	
		for(i=0; i<aux; i++){
		 fprintf(arq,"\n sistolica: "); 
		 fprintf(arq,"%d",dadoss[i]);
		 fprintf(arq,"\n diastolica: "); 
		 fprintf(arq,"%d", dadosp[i]);
		 fprintf(arq,"\n");		 
		}
		fclose(arq);
	}

int main(int argc, char** argv) {
     int j, i, aux=0, bpm=0, cont=1, sistolica, diastolica, dados[12], dadoss[12], dadosp[12]; 
	 string hora[12];
	
	 for(j=1; j<=3; j++){
	 	 bpm=0;
   	     for(i=0; i<86; i++){
   		     bpm++;
 	         Sleep(688);
		    } 
	     sistolica=12;
	     diastolica=8;
	     cont--;  
	     if(cont==0){
	         dados[aux]=bpm;
	         dadoss[aux]=sistolica;
	         dadosp[aux]=diastolica;
	         hora[aux]=__TIME__;
		     aux++;
		     cont=1;
 	         cout<<bpm<<"\n";
 	         cout<<sistolica<<" "<<diastolica<<"\n";
            }	
	     if(j==1440){
	 	    formulario(dados, dadoss, dadosp, aux, hora);
	        }
        }
	  return 0;
    }



