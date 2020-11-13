// #ifndef WIN32_LEAN_AND_MEAN
// #define WIN32_LEAN_AND_MEAN
// #endif
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <winsock2.h>
using namespace std;

int main(int argc, char** argv) {
    int j, i, bpm=0, cont=1, sistolica, diastolica;

	for(j=0; j<1440; j++){
		bpm=0;
   	for(i=0; i<86; i++){
   		bpm++;
 	    Sleep(6);
//        tempo certo 688
		}
		sistolica=12;
		diastolica=8;
		cont--;
	    if(cont==0){
			cont=1;
 	    	cout<<bpm<<"\n";
 	    	cout<<sistolica<<" "<<diastolica<<"\n";
//    		colocar para criar um arquivo txt
			FILE *arq;
			arq=fopen("relatorio.txt", "w");
			fprintf(arq,"%d\n\n", bpm);
			fprintf(arq,"%d\n", sistolica);
			fprintf(arq,"%d", diastolica);
			fclose(arq);
			}
    }
	return 0;
}


//exercicio fisicos bpm 95 a 165
//2 horas=120 minutos
//homem em repouso media cardiaca de 70-73 bpm de 18 a 25 anos
//exercicio fisico os batimentos deve manter 220-idade, e deve ser 80% do resultado

