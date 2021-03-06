//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <IdMessageBuilder.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "IdbaseComponent"
#pragma link "IdComponent"
#pragma link "IdExplicitTLSClientSeverBase"
#pragma link "IdIOHandler"
#pragma link "IdIOHandlerSocket"
#pragma link "IdIOHandlerStack"
#pragma link "IdMessage"
#pragma link "IdMessageClient"
#pragma link "IdSMTP"
#pragma link "IdSMTPBase"
#pragma link "IdSSL"
#pragma link "IdSSLOpenSSL"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

 }

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 IdSMTP1->Host= "smtp.gmail.com";
 IdSMTP1->Username= "gianlucaslucenabenhos@gmail.com";
 IdSMTP1->Password= "lucenabenhos";

 IdMessage1->Clear();
 IdMessage1->Recipients-> EMailAddresses="gianbenhos@gmail.com";
 IdMessage1->Subject="teste";
 IdMessage1->Body->Text= "testando email";

 TIdMessageBuilderPlain* MyMessage= new TIdMessageBuilderPlain();


 try{
   IdSMTP1->Connect();
   IdSMTP1->Send(IdMessage1);
 }

 catch(...){
  ShowMessage("error...");
 }

 IdSMTP1->Disconnect();
 delete MyMessage;
}
//---------------------------------------------------------------------------

