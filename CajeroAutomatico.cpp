#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <string.h>
#define T 100
using namespace std;

void gotoxy(float x,float y);
void cajero();
void cajero2(int *cash);
void Bienvenido();
void miniMenu();
void retirar(int *ptr);
int Mayus(char);
void depositar(int *ptr);



int main(){
char opc,caracter,opc3,let,opc2;
char comotu[6];
int x=0,comprobar=0,pos,band2=0,dinero[100],pos2=0,lol=0;
string contrasenia[100],usuario[100];
string usuario1,contrasenia1;
system("color f1");
do{
         do{
                system("cls");
                cajero();
gotoxy(62,13);cout<<"1.-REGISTRARSE  ";
gotoxy(62,14);cout<<"2.-INGRESAR     ";
gotoxy(62,15);cin>>opc3;
switch(opc3){
case '1':
    band2=0;
    system("cls");
    cajero();
    gotoxy(59,12);getline(cin,usuario[x]);
    gotoxy(59,13);cout<<"Ingresa tu usuario:   "<<endl;
    gotoxy(59,14);getline(cin,usuario[x]);
    gotoxy(59,15);cout<<"Ingresa tu contrasenia:  "<<endl;
    caracter = getch();
    contrasenia[x]="";
    gotoxy(59,16);
    while(caracter!=13){
        if(caracter != 8){
            contrasenia[x].push_back(caracter);
            cout<<"*";
        }else{
          if(contrasenia[x].length() > 0){
            cout<<"";
            contrasenia[x]=contrasenia[x].substr(0,contrasenia[x].length()-1);
          }
        }
        caracter=getch();
    }
    for(int y=0;y<x;y++){
        if(usuario[y]==usuario[x]){
            if(contrasenia[y]==contrasenia[x]){
                    system("cls");
            cajero();
                gotoxy(62,14);cout<<"USUARIO YA REGISTRADO "<<endl;
                gotoxy(52,15);system("pause");
                band2=1;
            }
        }
    }
    if(band2==0){
            string cad=contrasenia[x];
            let=cad[0];
            cout<<let;
            if(Mayus(let)==0){
                    system("cls");
            cajero();
                gotoxy(52,14);cout<<"LA PRIMERA LETRA NO ES MAYUSCULA\n";
               gotoxy(52,15);system("pause");
            }else{
                    for(int i=0;i<6;i++){
                        comotu[i]=cad[i];
                    }
                    int i=strlen(comotu);
                    if(i != 4){
                            system("cls");
                            cajero();
                        gotoxy(46,14);cout<<"LA CADENA DEBE TENER 4 DIGIOS Y/O CARARCTERES";
                        gotoxy(52,15);system("pause");
                    }
                    else{


    x++;
    system("cls");
    cajero();
    comprobar=0;
    gotoxy(62,14);cout<<"REGISTRADO!!!  "<<endl;
    gotoxy(52,15);system("pause");
            }
        }
    }
    break;
case '2':
     system("cls");
     cajero();
    getline(cin,usuario[x]);
    gotoxy(59,13);cout<<"Ingresa tu usuario:    "<<endl;
    gotoxy(59,14);getline(cin,usuario1);
    gotoxy(59,15);cout<<"Ingresa tu contrasenia:  "<<endl;
    caracter = getch();
    contrasenia1="";
    gotoxy(59,16);
    while(caracter!=13){
        if(caracter != 8){
            contrasenia1.push_back(caracter);
            cout<<"*";
        }else{
          if(contrasenia1.length() > 0){
            cout<<"";
            contrasenia1=contrasenia1.substr(0,contrasenia[x].length()-1);
          }
        }
        caracter=getch();
    }
    for(int i=0;i<x;i++){
        if(usuario[i]==usuario1){
            if(contrasenia[i]==contrasenia1){
                comprobar=1;
                opc3='0';
                pos2=i;
            }
        }
    }
    if(comprobar==0){
            system("cls");
    cajero();
        gotoxy(50,14);cout<<"USUARIO Y/O CONTRASEÑA INCORRECTO/S!!! "<<endl;
        gotoxy(52,15);system("pause");
    }
    break;
case '0':
    comprobar=0;
    opc3='0';
    break;
default:
    system("cls");
    cajero();
    gotoxy(55,14);cout<<"SU OPCION NO SE ENCUENTRA!!!"<<endl;
    gotoxy(52,15);system("pause");
    break;
}
}while(opc3!='0');
if(comprobar==1){
        system("cls");
cajero();
Bienvenido();
int *aux;
aux=&dinero[pos2];
do{
miniMenu();
gotoxy(62,16);cin>>opc2;
switch(opc2){
case '1':
    //depositar
    depositar(aux);
    break;
case '2':{
    //retirar
    retirar(aux);
    break;
}
case '0':
    break;
}
}while(opc2!='0');
 }
}while(lol!=1);
return 0;
}

void gotoxy(float x,float y){
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
SetConsoleCursorPosition(hcon,dwPos);
}
int Mayus(char letra){
    if(letra=='A' || letra=='B' || letra=='C' || letra=='D' || letra=='E' || letra=='F' || letra=='G' || letra=='H' || letra=='I' || letra=='J' || letra=='K' || letra=='L' || letra=='M' || letra=='N' || letra=='O' || letra=='P' || letra=='Q' || letra=='R' || letra=='S' || letra=='T' || letra=='U' || letra=='V' || letra=='W' || letra=='X' || letra=='Y' || letra=='Z'){
    return 1;
  }
return 0;
}


void cajero(){
gotoxy(30,4);   cout<<" ________________________________________________________________________________";
gotoxy(30,5);   cout<<"|  __   |                                                            |    __     |";
gotoxy(30,6);   cout<<"| |  |  |                     BANCO BANCOMER                         |   |  |    |";
gotoxy(30,7);   cout<<"| |<-|  |                         BBVA                               |   |->|    |";
gotoxy(30,8);   cout<<"| |__|  |      ________________________________________________      |   |__|    |";
gotoxy(30,9);   cout<<"|       |     |                                                |     |           |";
gotoxy(30,10);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,11);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,12);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,13);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,14);  cout<<"|       |     |                                                |     |  __CARD__ |";
gotoxy(30,15);  cout<<"|       |     |                                                |     | |________||";
gotoxy(30,16);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,17);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,18);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,19);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,20);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,21);  cout<<"|       |     |________________________________________________|     |           |";
gotoxy(30,22);  cout<<"|       |                                                            |           |";
gotoxy(30,23);  cout<<"|_______|____________________________________________________________|___________|";
gotoxy(30,24);  cout<<"|        ___  ___  ___        ________                                           |";
gotoxy(30,25);  cout<<"|\\      |_1_||_2_||_3_|     | CANCEL |                                          /|";
gotoxy(30,26);  cout<<"| \\      ___  ___  ___      |________|                                         / |";
gotoxy(30,27);  cout<<"|  \\    |_4_||_5_||_6_|      ________                                         /  |";
gotoxy(30,28);  cout<<"|   \\    ___  ___  ___      | ACEEPT |                                       /   |";
gotoxy(30,29);  cout<<"|    \\  |_7_||_8_||_9_|     |________|                                      /    |";
gotoxy(30,30);  cout<<"|     \\      |_0_|                                                         /     |";
gotoxy(30,31);  cout<<"|      \\__________________________________________________________________/      |";
gotoxy(30,32);  cout<<"|      /                                                                  \\      |";
gotoxy(30,33);  cout<<"|     /                                                ____CASH____        \\     |";
gotoxy(30,34);  cout<<"|    /                                                |____________|        \\    |";
gotoxy(30,35);  cout<<"|   /                                                                        \\   |";
gotoxy(30,36);  cout<<"|__/__________________________________________________________________________\\  |";
gotoxy(30,37);  cout<<"|                                                                              \\_|";
gotoxy(30,38);  cout<<"|                                                                                |";
gotoxy(30,39);  cout<<"|                                                                                |";
gotoxy(30,40);  cout<<"|                                                                                |";
gotoxy(30,41);  cout<<"|                                                                                |";
gotoxy(30,42);  cout<<"|                                                                                |";
gotoxy(30,43);  cout<<"|                                                                                |";
gotoxy(30,44);  cout<<"|                                                                                |";
gotoxy(30,45);  cout<<"|                                                                                |";
gotoxy(30,46);  cout<<"|                                                                                |";
gotoxy(30,47);  cout<<"|                                                                                |";
gotoxy(30,48);  cout<<"|                                                                                |";
gotoxy(30,49);  cout<<"|                                                                                |";
gotoxy(30,50);  cout<<"|                                                                                |";
gotoxy(30,51);  cout<<"|________________________________________________________________________________|";

}

void cajero2(int *cash){
gotoxy(30,4);   cout<<" ________________________________________________________________________________";
gotoxy(30,5);   cout<<"|  __   |                                                            |    __     |";
gotoxy(30,6);   cout<<"| |  |  |                     BANCO BANCOMER                         |   |  |    |";
gotoxy(30,7);   cout<<"| |<-|  |                         BBVA                               |   |->|    |";
gotoxy(30,8);   cout<<"| |__|  |      ________________________________________________      |   |__|    |";
gotoxy(30,9);   cout<<"|       |     |                                                |     |           |";
gotoxy(30,10);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,11);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,12);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,13);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,14);  cout<<"|       |     |                                                |     |  __CARD__ |";
gotoxy(30,15);  cout<<"|       |     |                                                |     | |________||";
gotoxy(30,16);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,17);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,18);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,19);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,20);  cout<<"|       |     |                                                |     |           |";
gotoxy(30,21);  cout<<"|       |     |________________________________________________|     |           |";
gotoxy(30,22);  cout<<"|       |                                                            |           |";
gotoxy(30,23);  cout<<"|_______|____________________________________________________________|___________|";
gotoxy(30,24);  cout<<"|        ___  ___  ___        ________             DINERO DISPONIBLE              |";
gotoxy(30,25);  cout<<"|\\      |_1_||_2_||_3_|     | CANCEL |       _____________________________      /|";
gotoxy(30,26);  cout<<"| \\      ___  ___  ___      |________|      |                             |    / |";
gotoxy(30,27);  cout<<"|  \\    |_4_||_5_||_6_|      ________       |      $                      |   /  |";
gotoxy(30,28);  cout<<"|   \\    ___  ___  ___      | ACEEPT |      |_____________________________|  /   |";
gotoxy(30,29);  cout<<"|    \\  |_7_||_8_||_9_|     |________|                                      /    |";
gotoxy(30,30);  cout<<"|     \\      |_0_|                                                         /     |";
gotoxy(30,31);  cout<<"|      \\__________________________________________________________________/      |";
gotoxy(30,32);  cout<<"|      /                                                                  \\      |";
gotoxy(30,33);  cout<<"|     /                                                ____CASH____        \\     |";
gotoxy(30,34);  cout<<"|    /                                                |____________|        \\    |";
gotoxy(30,35);  cout<<"|   /                                                                        \\   |";
gotoxy(30,36);  cout<<"|__/__________________________________________________________________________\\  |";
gotoxy(30,37);  cout<<"|                                                                              \\_|";
gotoxy(30,38);  cout<<"|                                                                                |";
gotoxy(30,39);  cout<<"|                                                                                |";
gotoxy(30,40);  cout<<"|                                                                                |";
gotoxy(30,41);  cout<<"|                                                                                |";
gotoxy(30,42);  cout<<"|                                                                                |";
gotoxy(30,43);  cout<<"|                                                                                |";
gotoxy(30,44);  cout<<"|                                                                                |";
gotoxy(30,45);  cout<<"|                                                                                |";
gotoxy(30,46);  cout<<"|                                                                                |";
gotoxy(30,47);  cout<<"|                                                                                |";
gotoxy(30,48);  cout<<"|                                                                                |";
gotoxy(30,49);  cout<<"|                                                                                |";
gotoxy(30,50);  cout<<"|                                                                                |";
gotoxy(30,51);  cout<<"|________________________________________________________________________________|";
gotoxy(84,27);cout<<*cash;
}


void Bienvenido(){
    gotoxy(52,15);system("pause");
gotoxy(45,15);cout<<"O";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"DO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"IDO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"NIDO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"ENIDO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"VENIDO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"NVENIDO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"ENVENIDO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"IENVENIDO";
Sleep(200);
system("cls");
cajero();
gotoxy(45,15);cout<<"BIENVENIDO";
Sleep(200);
system("cls");
cajero();
for(int i=1;i<39;i++){
    gotoxy(45+i,15);cout<<"BIENVENIDO";
Sleep(200);
system("cls");
cajero();
}
gotoxy(84,15);cout<<"BIENVENID";
Sleep(200);
system("cls");
cajero();
gotoxy(85,15);cout<<"BIENVENI";
Sleep(200);
system("cls");
cajero();
gotoxy(86,15);cout<<"BIENVEN";
Sleep(200);
system("cls");
cajero();
gotoxy(87,15);cout<<"BIENVE";
Sleep(200);
system("cls");
cajero();
gotoxy(88,15);cout<<"BIENV";
Sleep(200);
system("cls");
cajero();
gotoxy(89,15);cout<<"BIEN";
Sleep(200);
system("cls");
cajero();
gotoxy(90,15);cout<<"BIE";
Sleep(200);
system("cls");
cajero();
gotoxy(91,15);cout<<"BI";
Sleep(200);
system("cls");
cajero();
gotoxy(92,15);cout<<"B";
Sleep(200);
system("cls");
cajero();

}

void miniMenu(){
gotoxy(62,13);cout<<"1.-DEPOSITAR ";
gotoxy(62,14);cout<<"2.-RETIRAR ";
gotoxy(62,15);cout<<"0.-SALIR ";
}
void retirar(int* ptr){
    int cash=0,cash1=0;
    int band=0;
    if(ptr==0){
        gotoxy(52,13);cout<<"NO TIENES DINERO PARA REIRAR";
    }else{
    do{
            system("cls");
        cajero2(ptr);
gotoxy(50,13);cout<<"                    __________________";
gotoxy(50,14);cout<<"DIGITA LA CANTIDAD |                  |";
gotoxy(50,15);cout<<"  MULTIPLO DE 100  |                  |";
gotoxy(50,16);cout<<"  -------------->  |__________________|";
gotoxy(74,15);cin>>cash1;
if(*ptr>=cash1){
 if(cash1>101){
cash=cash1%100;
 }
 else{
cash=1;
 }
cout<<"cash="<<cash<<endl;
if(cash==0){
        system("cls");
         cajero2(ptr);
    gotoxy(62,14);cout<<"CANTIDAD ACEPTADA!!!\n";
    *ptr=*ptr-cash1;
    gotoxy(52,15);system("pause");system("cls");cajero2(ptr);

    band=1;
}
else{
    system("cls");
    cajero2(ptr);
    gotoxy(62,14);cout<<"NO ES MULTIPLO DE 100!!!\n";
    gotoxy(52,15);system("pause");
}
}else{
    system("cls");
    cajero2(ptr);
gotoxy(52,14);cout<<"NO CUENTAS CON ESA CANTIDAD DISPONIBLE"<<endl;
gotoxy(52,15);system("pause");
}
    }while(band==0);
    }
}

void depositar(int *ptr){
int dinero,cont20=0,cont50=0,deposito=0;
char op;
system("cls");
gotoxy(58,13);cout<<"SOLO ACEPTA BILLETES\n";
gotoxy(58,14);cout<<"DEBE SER MULTIPLO 100\n";
do {
        system("cls");
        cajero2(ptr);
    gotoxy(61,14);cout<<"INGRESA BILLETE: \n";
        gotoxy(61,15);cin>>dinero;
    switch(dinero){
        case 20:{
            *ptr+=20;
            cont20++;
            break;
        }
        case 50:{
            *ptr+=50;
            cont50++;
            break;
        }
        case 100:{
            *ptr+=100;
        break;
        }
        case 200:{
            *ptr+=200;break;
        }
        case 500:{
            *ptr+=500;break;

        }
        case 1000:{
            *ptr+=1000;
        break;
        }
        default:{
            gotoxy(52,14);cout<<"ESTA CANTIDAD NO ES PERMITIDA\n";gotoxy(1,55);system("pause");}
    }

    system("cls");
    cajero2(ptr);
    gotoxy(58,13);cout<<"0.-ACEPTAR DEPOSITO";
    gotoxy(58,14);cout<<"1.-SEGUIR DEPOSITANDO";
    gotoxy(58,15);cin>>op;
    if(op=='0'){
        if(cont20%5!=0){
                int aux;
                system("cls");
    cajero2(ptr);
            gotoxy(46,13);cout<<"LA CANTIDAD DEPOSITADA NO ES UN MULTIPLO DE 100\n";
            aux=cont20%5;
            aux=aux-5;
            aux=aux*-1;
            gotoxy(46,14);cout<<"LA CANTIDAD DE BILLETES DE 20 QUE FALTA SON: "<<aux<<endl;
            op='1';
            gotoxy(52,15);system("pause");
            }

            if(cont50%2!=0){
                int aux;
                 system("cls");
              cajero2(ptr);
            gotoxy(52,13);cout<<"LA CANTIDAD DEPOSITADA NO ES MULTIPLO DE 100\n";
            gotoxy(62,14);cout<<"TE FALTA 1 BILLETE DE 50"<<endl;
            gotoxy(62,15);system("pause");
            op='1';
            }
        }
}while(op!='0');
 system("cls");
    cajero2(ptr);
}
