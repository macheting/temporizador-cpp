#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main () {
	system("color 9")
    system("color A");
    system("title Temporizador");
      int h, m, s, fin=1;
      cout<<"Ingrese el tiempo a temporizar (entre 0-60):"<<endl;
      cout<<"Horas: ";
      cin>>h;
      cout<<"Minutos: ";
      cin>>m;
      cout<<"Segundos: ";
      cin>>s;
      if (h<0 or m<0 or s<=0 or m>60 or s>60) {
        cout<<"Ingrese un tiempo valido"<<endl;
        getch();
        return 0;
      }

      while (fin==1) {
        system("cls");
        cout<<"Temporizando"<<endl;
      	cout<<h<<":"<<m<<":"<<s<<endl;
      	sleep_for(seconds(1));
      	s--;

      	if (m==0 && s==0) {
      	    h--;
      	    m=59;
      	    s=60;
      	}

      	if (s==0) {
      	    m--;
      	    s=60;
      	}
      	if (h==-1){
            h++;
            fin=0;
      	}
      }
      system("cls");
      cout<<"Temporizador"<<endl;
      cout<<"0:0:0"<<endl;
      cout<<"Se termino el tiempo";
      getch();
}
