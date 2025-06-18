//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
  double a,b,h,y_min,y_max;
  int n;
  typedef double (*Tfun)(double);
  Tfun f;
  double fun0(double);


__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
		Edit1->Text="-3,1416";    	// a
		Edit2->Text="3,1416";     	// b
		Edit3->Text="50";		// n

}

void __fastcall TForm2::Button2Click(TObject *Sender)
{
Chart1->Series[0]->Clear();			// Очистка графика
for(double x=a; x<=b; x+=h)
	  Chart1->Series[0]->AddXY(x,f(x));

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
double x, r;
a=StrToFloat(Edit1->Text);
b=StrToFloat(Edit2->Text);
n=StrToInt(Edit3->Text);
h = StrToFloat(Edit4->Text);
f=fun0;
y_min = y_max = f(a);
for (x = a+h; x<=b; x+=h) {
				r = f(x);
				if(y_min>r) y_min = r;
				if(y_max<r) y_max = r;
}


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
a=StrToFloat(Edit1->Text);
b=StrToFloat(Edit2->Text);
n=StrToInt(Edit3->Text);
h = StrToFloat(Edit4->Text);
int k;
double x,m,s,g;

for(x = a+h; x<=b; x+=h) {
		m = s = 1;
				for(k = 1; k<=n; k++) {
					   m=(pow(-1,k+1))*(pow(x,2*k+1))/(4*(k*k)-1);
					   m+=m;


				}
				Memo1->Lines->Add("Значение x="+FloatToStr(x)+"\nЗначение S(x) = "+FloatToStr(m));


				}


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{int k;
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
for(x=a; x<=b; x+=h){
   Image1->Canvas->LineTo(ceil(x0+x/hx),ceil(y0-f(x)/hy));}
}
//------------------------------------------------------------
  double fun0(double r) {
		return ((1+r*r)/2)*atan(r)-(r/2);
  }


//---------------------------------------------------------------------------





