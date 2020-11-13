#include <iostream>
#include <Windows.h>
//#include <winsock2.h>
#include <stdio.h>
#include <stdlib.h>
//void __fastcall TForm1::BitBtn1Click(TObject *Sender)
int main()
{
int connect(SOCKET s, const struct sockaddr *smtp.gmail.com , int namelen );
//IdSMTP1->Host = "smtp.gmail.com";
//IdSMTP1->UserId = "gianlucaslucenabenhos@gmail.com";
//IdSMTP1->Password = "lucenabenhos";
//IdSMTP1->Connect();
//IdMessage1->MessageParts->Clear();
//IdMessage1->From->Text = "gianlucaslucenabenhos@gmail.com";
//IdMessage1->Recipients->EMailAddresses = "gianbenhos@gmail.com";
//IdMessage1->Subject = "Teste Envio de E-Mail";
//IdMessage1->Body->Text = "Testando Envio de E-Mail pelo C++ Builder...";
//IdSMTP1->AuthenticationType = atLogin;
//IdSMTP1->Authenticate();
//IdSMTP1->Send( IdMessage1 );

}


//#include <iostream>
//#include <Windows.h>
//#include <winsock2.h>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//struct sokkaddr_in
//{
//	short sin_family;
//	u_short sin_port;
//	struct in_addr sin_addr;
//	char  sin_zero[8];
//};
//
//int WSAStartup(WORD wVersionRequested, LPWSADATA lpwASData);
//int WSACleanup();
//SOCKET socket(int af_INET, int sock_STREAM, int ipproto_TCP);
//int closesocket(SOCKET s);
//int bind(SOCKET s, const struct sockaddr *name, int meu_end);
//int listen(SOCKET s, int backlog1);
//SOCKET accept(SOCKET s, struct sockaddr *addr, int *addrlen);
//int connect(SOCKET s, const struct sockaddr *name, int namelen );
//int send(SOCKET s, const char *buf, int len, int flags);
//int recv(SOCKET s, char *buf, int len, int flags);
//
//
//Servídor::Servídor(char *ip, inigned short porta, int max);
//cont_msg()
//{
//    WSADATA tst;
//	if(WSAStartup(MAKEWORD(2,2), &tst)){
//		cout<<"o computador nao possui a versao 2 ";
//		cout<<"nao era possivel crial o servidor"<<endl;
//	}	
//	else{
//		max_conexao= max;
//		manu_endl.sin_family = AF_INET;
//		meu_end.sin_addr.s_addr = inet_addr(ip);
//		meu_end.sin_port = htons(3265);
//	}  
//     meu__Sockt= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);      
//    if(meu_Sockt== SOCKET_ERROR){
//    	cout<<"erro criacao do socket."<<endl;
//    	tem_Sockt=false;
//	}
//	else{
//		tem_Sockt=true;
//	}
//}
//
//void Servidor::conectaSockt(){
//	intw result=-1;
//	result=bin(meu_Sockt, reinterpret_cast <SOCKADDR*>(&meu_end), sizeof (meu_end));
//	if(result== -1){
//		cout<<"bind nao pode ser efetuado"<<endl;
//		tem_Canal=false;
//	}
//	else{
//		tem_Canal=true;
//	}
//}
//
//
//int main(int argc, char *argv[])
//{
// 
//   return 0;
//}
