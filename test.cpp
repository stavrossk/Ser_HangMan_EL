//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "test.h"
#include "dstring.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString selected_char, hidden_word;
int remaining_letters = 0;



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
hidden_word=Edit1->Text;
   if (hidden_word.Length() > 0 )
   {
    StringGrid1->ColCount = remaining_letters = hidden_word.Length();
    GroupBox1->Visible=true; GroupBox2->Visible=false;
    GroupBox1->Caption="������ 2, ������� �� ������ ��� ��������� ��� �������� � ����� ����:";
   }

}

void __fastcall TForm1::FormCreate(TObject *Sender)
{
 Edit1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
 TSpeedButton *sb;
 sb = (TSpeedButton *) Sender;
 selected_char =  sb->Caption;

       for (int i=1; i<=hidden_word.Length(); i++)
       {
         if( selected_char==hidden_word[i] )
         {
         StringGrid1->Cells[i-1][0]=selected_char;
         remaining_letters--;
         }
       }
  sb->Enabled=false;

  if ( remaining_letters <= 0 )
  {
   GroupBox1->Visible=false; 
   MessageBox(NULL,"������� ��� �������� ����!","������������!",MB_OK);
   Application->Terminate();
  }

}
//---------------------------------------------------------------------------

