#include "func.h"
#include <stdio.h>
#include <stdlib.h>

static int tank_kofe = 15000;
static int tank_moloko = 10000;
static int tank_water = 20000;
static int tank_kakao = 2000;


void vstrechayshay()
{   
        
    char vibor;
    printf("Vi za kofe? (y or n) ");
    scanf("%c", &vibor);
    setbuf(stdin, NULL);
    if (vibor == 'y') {
        zakaz();
    } else {
        
    }
}

void dostavka()
{
    int tank = 0;
    printf("chego nexvataet? (vsego 5)");
    printf("%d \n,%d \n,%d \n,%d \n", tank_kofe, tank_water, tank_moloko,
           tank_kakao);
    scanf("%d", &tank);
    setbuf(stdin, NULL);
    switch (tank) {
    case 1:
        tank_kofe += 10000;
        vstrechayshay();
        break;

    case 2:

        tank_water += 10000;
        vstrechayshay();
        break;

    case 3:
        tank_moloko += 10000;
        vstrechayshay();
        break;
    case 4:
        tank_kakao += 1000;
        vstrechayshay();
        break;

    case 5:
        tank_kofe += 10000;
        tank_moloko += 10000;
        tank_water += 10000;
        tank_kakao += 1000;
        vstrechayshay();
        break;
    
    default:
        break;
    }
}

void zakaz()
{
    char napitok[7] = {'e', 'l', 'd', 'a', 'k', 'l', 'k'};
    int otvet_klient;
    int otvet_klienta;
    if (tank_water < 500){
        dostavka();
    }
    if (tank_kofe < 25) {
        printf("%c (yes - 1, no - 2)", napitok[6]);
        scanf("%d", &otvet_klient);
        setbuf(stdin, NULL);
        if (otvet_klient == 1) {
            otvet_klienta = 6;
            vibor_oplati(otvet_klienta);
        } else {
            dostavka();
        }
    }
    if (tank_kakao < 50) {
        for (int i = 0; i < 5; i++) {
            printf("napitok pomechen cifroi %d, %c \n", i, napitok[i]);
        }
        printf("Vvidete chislo nujnogo napitka: ");
        scanf("%d", &otvet_klienta);
        setbuf(stdin, NULL);
        if (otvet_klienta > 5) {
            printf("Sovsem durak?");
            vstrechayshay();
        }
        vibor_oplati(otvet_klienta);
    }
    for (int i = 0; i < 7; i++) {
        printf("%c pomechen - cifroi: %d \n", napitok[i], i);
    }
    printf("Vvidete chislo nujnogo napitka: ");
    scanf("%d", &otvet_klienta);
    setbuf(stdin, NULL);
    if (otvet_klienta > 6) {
        printf("Sovsem durak?");
        vstrechayshay();
    } else {
        vibor_oplati(otvet_klienta);
    }
}

void vibor_oplati(int otvet_klienta)
{
    int oplata = 0;
    int money_klienta = 0;
    printf("Oplata nalichkoi ili kartoi? (1 ili 2)");
    scanf("%d", &oplata);
    setbuf(stdin, NULL);
    if (oplata == 1) {
        printf("Vnesite dengi: ");
        scanf("%d", &money_klienta); 
        setbuf(stdin, NULL);
        resultat(oplata, otvet_klienta, money_klienta);
    }else{

        resultat(oplata, otvet_klienta, money_klienta);
    }
}

void resultat(int oplata, int otvet_klienta,int money_klienta)
{
    switch (otvet_klienta) {
    case 0:
        espresso(oplata, otvet_klienta,  money_klienta);
        break;
    case 1:
        lungo(oplata, otvet_klienta,  money_klienta);
        break;
    case 2:
        doppio(oplata, otvet_klienta,  money_klienta);
        break;

    case 3:
        amerikano(oplata, otvet_klienta,  money_klienta);
        break;

    case 4:
        kapuchino(oplata, otvet_klienta,  money_klienta);
        break;

    case 5:
        latte(oplata, otvet_klienta,  money_klienta);
        break;

    case 6:
        kakao(oplata, otvet_klienta,  money_klienta);
        break;

    default:
        break;
    }
}

void espresso(int oplata,int otvet_klienta,int money_klienta){
    
    if (oplata == 1){
        int cena = 50;
        int ese_money = 0;
        int sdacha = 0;
        if (money_klienta < cena){
            printf("Ne xvataet %d vnesi eshe money ", cena - money_klienta);
            scanf("%d", &ese_money);
            setbuf(stdin, NULL);
            money_klienta += ese_money;
            espresso(oplata, otvet_klienta, money_klienta);
        }else{
            sdacha = money_klienta - cena;
            printf("Vasha sdacha: %d \n", sdacha);
            
        }
        tankeri(otvet_klienta);
    }else{
    tankeri(otvet_klienta);
    } 
}

void lungo(int oplata,int otvet_klienta,int money_klienta){
    if (oplata == 1){
        int cena = 50;
        int ese_money = 0;
        int sdacha = 0;
        if (money_klienta < cena){
            printf("Ne xvataet %d vnesi eshe money ", cena - money_klienta);
            scanf("%d", &ese_money);
            setbuf(stdin, NULL);
            money_klienta += ese_money;
            lungo(oplata, otvet_klienta,  money_klienta);
        }else{
            sdacha = money_klienta - cena;
            printf("Vasha sdacha: %d \n", sdacha);
        }
    tankeri(otvet_klienta);
    }else{
    tankeri(otvet_klienta);
    }
}

void doppio(int oplata,int otvet_klienta,int money_klienta){
    if (oplata == 1){
        int cena =100;
        int ese_money = 0;
        int sdacha = 0;
        if (money_klienta < cena){
            printf("Ne xvataet %d vnesi eshe money ", cena - money_klienta);
            scanf("%d", &ese_money);
            setbuf(stdin, NULL);
            money_klienta += ese_money;
            doppio(oplata, otvet_klienta,  money_klienta);
        }else{
            sdacha = money_klienta - cena;
            printf("Vasha sdacha: %d \n", sdacha);
        }
    tankeri(otvet_klienta);
    }else{
    tankeri(otvet_klienta);
    }
}

void amerikano(int oplata,int otvet_klienta,int money_klienta){
    if (oplata == 1){
        int cena = 150;
        int ese_money = 0;
        int sdacha = 0;
        if (money_klienta < cena){
            printf("Ne xvataet %d vnesi eshe money ", cena - money_klienta);
            scanf("%d", &ese_money);
            setbuf(stdin, NULL);
            money_klienta += ese_money;
            amerikano(oplata, otvet_klienta,  money_klienta);
        }else{
            sdacha = money_klienta - cena;
            printf("Vasha sdacha: %d \n", sdacha);
        }
    tankeri(otvet_klienta);
    }else{
    tankeri(otvet_klienta);
    }
}

void kapuchino(int oplata,int otvet_klienta,int money_klienta){
    
    if (oplata == 1){
        int cena = 200;
        int ese_money = 0;
        int sdacha = 0;
        if (money_klienta < cena){
            printf("Ne xvataet %d vnesi eshe money ", cena - money_klienta);
            scanf("%d", &ese_money);
            setbuf(stdin, NULL);
            money_klienta += ese_money;
            kapuchino(oplata, otvet_klienta,  money_klienta);
        }else{
            sdacha = money_klienta - cena;
            printf("Vasha sdacha: %d \n", sdacha);
        }
    tankeri(otvet_klienta);
    }else{
    tankeri(otvet_klienta);
    }
}

void latte(int oplata,int otvet_klienta,int money_klienta){
    if (oplata == 1){
        int cena = 200;
        int ese_money = 0;
        int sdacha = 0;
        if (money_klienta < cena){
            printf("Ne xvataet %d vnesi eshe money ", cena - money_klienta);
            scanf("%d", &ese_money);
            setbuf(stdin, NULL);
            money_klienta += ese_money;
            latte(oplata, otvet_klienta,  money_klienta);
        }else{
            sdacha = money_klienta - cena;
            printf("Vasha sdacha: %d \n", sdacha);
        }
    tankeri(otvet_klienta);
    }else{
    tankeri(otvet_klienta);
    }
}

void kakao(int oplata,int otvet_klienta,int money_klienta){
    if (oplata == 1){
        int cena = 150;
        int ese_money = 0;
        int sdacha = 0;
        if (money_klienta < cena){
            printf("Ne xvataet %d vnesi eshe money ", (cena - money_klienta));
            scanf("%d", &ese_money);
            setbuf(stdin, NULL);
            money_klienta += ese_money;
            kakao(oplata, otvet_klienta,  money_klienta);
        }else{
            sdacha = money_klienta - cena;
            printf("Vasha sdacha: %d \n", sdacha);
        }
    tankeri(otvet_klienta);
    }else{
    tankeri(otvet_klienta);
    }
}

void tankeri(int otvet_klienta){
    switch (otvet_klienta)
    {
    case 0:
        tank_kofe -= 25;
        tank_water -= 100;
        OKONCHANIE();
        break;
    case 1:
        tank_kofe -= 25;
        tank_water -= 100;
        OKONCHANIE();
        break;
    case 2:
        tank_kofe -= 50;
        tank_water -= 200;
        OKONCHANIE();
        break;
    case 3:
        tank_kofe -= 25;
        tank_water -= 250;
        OKONCHANIE();
        break;
    case 4:
        tank_kofe -=25;
        tank_water -= 100;
        tank_moloko -=50;
        OKONCHANIE();
        break;
    case 5:
        tank_kofe -= 25;
        tank_water -= 100;
        tank_moloko -= 100;
        OKONCHANIE();
        break;
    case 6:
        tank_moloko-= 200;
        tank_kakao -=50;
        OKONCHANIE();
        break;
    
    default:
        break;
    }
}

void OKONCHANIE(){
    printf("Spasipo cto prishli, vot vash napitok! \n\n");
    vstrechayshay();
}