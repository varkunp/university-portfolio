//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
void serp2(double x1, double y1, double x2, double y2, double x3, double y3, int n)
{
  if (n > 0)
  {
    double new_x1, new_x2, new_x3, new_y1, new_y2, new_y3;
	new_x1 = (x1 + x2)/2;
    new_y1 = (y1 + y2)/2;
	new_x2 = (x2 + x3)/2;
	new_y2 = (y2 + y3)/2;
    new_x3 = (x1 + x3)/2;
	new_y3 = (y1 + y3)/2;
	Form1->Image1->Canvas->Pen->Color=clGreen;
	Form1->Image1->Canvas->MoveTo(new_x1, new_y1);
	Form1->Image1->Canvas->LineTo(new_x2, new_y2);
	Form1->Image1->Canvas->LineTo(new_x3, new_y3);
	Form1->Image1->Canvas->LineTo(new_x1,new_y1);
	serp2(x1, y1, new_x1, new_y1, new_x3, new_y3, n-1);
	serp2(x2, y2, new_x1, new_y1, new_x2, new_y2, n-1);
	serp2(x3, y3, new_x2, new_y2, new_x3, new_y3, n-1);
  };};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Image1->Picture->Bitmap->FreeImage();
     Image1->Picture->Bitmap=NULL;
  double q,w,e,r,t,y,u;
  q=StrToFloat(Edit1->Text);
  w=StrToFloat(Edit2->Text);
  e=StrToFloat(Edit3->Text);
  r=StrToFloat(Edit4->Text);
  t=StrToFloat(Edit5->Text);
  y=StrToFloat(Edit6->Text);
  u=StrToFloat(Edit7->Text);
  serp2(q,w,e,r,t,y,u);
}
//---------------------------------------------------------------------------
