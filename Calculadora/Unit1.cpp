//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
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
	int N1 = 0;
	int N2 = 0;
	int Res = 0;
	N1 = StrToInt(Edit1->Text);
	N2 = StrToInt(Edit2->Text);
	Res = N1 + N2;
	Label1->Caption = IntToStr(Res);
    Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Edit1->Text = "";
	Edit2->Text = "";
	Label1->Caption = "";
    Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
           Application->Terminate();
}
//---------------------------------------------------------------------------
