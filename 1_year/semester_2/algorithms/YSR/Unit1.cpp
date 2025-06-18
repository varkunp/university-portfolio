//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double k=1,a,b,h,y_min,y_max;
  int n ;
  typedef double (*Tfun)(double);
  Tfun f;
  double fun0(double);
  double fun1(double);
  //------------------------------------------------------------
  double fun0(double r ) {
		return pow(-1,k+1)*(pow(r,2*k)/4*pow(k,2)-1);
  }
  double fun1(double r) {
		return (1+pow(r,2))/2*atan(r)-b/2;
  }



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
Close () ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
double x, r;
a=StrToFloat(Edit1->Text);
b=StrToFloat(Edit2->Text);
n=StrToInt(Edit3->Text);
h = (b-a)/n;
switch(RadioGroup1->ItemIndex) {
        case 0: f = fun0; break;
        case 1: f = fun1; break;

}
y_min = y_max = f(a);
for (x = a+h; x<=b; x+=h) {
                r = f(x);
                if(y_min>r) y_min = r;
                if(y_max<r) y_max = r;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Chart1->Series[0]->Clear();			// Очистка графика
for(double x=a; x<=b; x+=h)
      Chart1->Series[0]->AddXY(x,f(x));

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 Chart1->CopyToClipboardMetafile(True);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
int xmax, ymax, xt, yt, y0, x0;
double hx,hy,x;
  Image1->Canvas->Pen->Color=clBlack; 	// Установка цвета пера
// Поиск координат правого нижнего угла холста Image
 xmax = Image1->Width;		  ymax = Image1->Height;
// Закрашивание холста Image текущей белой кистью
  Image1->Canvas->Rectangle(0,0,xmax,ymax);
// Поиск середины холста
  y0=ymax/2;	  x0=xmax/2;
// Вычерчивание координатных линий
  Image1->Canvas->MoveTo(0,y0);
  Image1->Canvas->LineTo(xmax,y0);
  Image1->Canvas->MoveTo(x0,0);
  Image1->Canvas->LineTo(x0,ymax);
  Image1->Canvas->Pen->Color=clRed; 		// Установка цвета пера
  Image1->Canvas->Pen->Width=2; 		// Установка ширины пера
// Поиск шагов по х и у с масштабированием
hx=(b-a)/xmax;	  hy=(y_max-y_min)/ymax;
Image1->Canvas->MoveTo(ceil(x0+a/hx),ceil(y0-f(a)/hy));
for(x=a; x<=b; x+=h)
   Image1->Canvas->LineTo(ceil(x0+x/hx),ceil(y0-f(x)/hy));
   //------------------------------------------------------------


}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{     Edit1->Text="-3,1416";    	// a
		Edit2->Text="3,1416";     	// b
		Edit3->Text="50";		// n
		RadioGroup1->ItemIndex = 0;

}
//---------------------------------------------------------------------------

