# include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	int i, j, N, k=0, max;
	int a[10][10];
	cout << " Input N (<=10)= ";
	cin >> N;                        // Ввод массива
	for (i = 0; i < N; i++) {//кол-во  сторок
		for (j = 0; j < N; j++)//кол-во  столбцов
			a[i][j] = rand() % 100;  //Значения элемеентов массива
	}
	cout <<"\n";
	cout <<"\n\tMaccuB  " << endl;//Выыод массива на экран НАЧАЛО
	cout <<"\n";
	for (i = 0; i < N; i++) {// Вывод элементов массива
		for (j = 0; j < N; j++) {
			cout <<"\t"<< a[i][j] << "  ";
		}
		cout << "\n";// Вывод массива на экран КОНЕЦ
	}
	for (j = 0; j < N; j++) {// НАхождение амксимальнов эл в столбце
		max = fabs(a[0][j]);
		for (i = 0; i < N; i++)
		if (fabs(a[i][j]) > max)
						max = fabs(a[i][j]);
						a[k][k]=max ;
						k++;

			cout<<"\n\tMAX element B "<<j+1<<" stolbce =  " << max;
			cout << "\n";//Вывод макс элемента
	}
	cout<<"\n";
		for (i = 0; i < N; i++) {// Вывод элементов массива
		for (j = 0; j < N; j++) {
			cout <<"\t"<< a[i][j] << "  ";
		}
		cout << "\n";// Вывод массива на экран КОНЕЦ
	}
	getch();
	return 0;
}