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
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{

 AnsiString msg;
 msg="";
        if(X < Button1->Width/3)
        {
                msg="��������";
        }
        else if  (X < ((Button1->Width/3)*2) )
        {
                msg="������";
        }
        else
        {
                msg="�����";
        }


        if(Y < Button1->Height/3)
        {
                msg="��������";
        }
        else if  (X < ((Button1->Height/3)*2) )
        {
                msg="������";
        }
        else
        {
                msg="�����";
        }


       ShowMessage(msg);
}//---------------------------------------------------------------------------
