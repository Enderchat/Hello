#include <stdio.h>
int tank_kofe = 15000, tank_moloko = 10000, tank_water = 20000,
    tank_kakao = 2000;

int vibor_oplati(int oplata_klienta);
int resultat(int otvet_klient, int money_klienta);

int vstrechayshay()
{
    char vibor;
    printf("Vi za kofe? (y or n)");
    scanf("%c", &vibor);
    if (vibor == 'y') {
        int proverka_kofe();
    } else {
        int servise();
    }
}

int dostavka()
{
    int tank = 0;
    int skok_dobavit = 0;
    printf("chego nexvataet? (vsego 4)");
    printf("%d \n,%d \n,%d \n,%d \n", tank_kofe, tank_water, tank_moloko,
           tank_kakao);
    scanf("%d", &tank);
    switch (tank) {
    case 1:
        scanf("%d", &skok_dobavit);
        tank_kofe += skok_dobavit;
        vstrechayshay();
        break;

    case 2:
        scanf("%d", &skok_dobavit);
        tank_water += skok_dobavit;
        vstrechayshay();
        break;
    case 3:
        scanf("%d", &skok_dobavit);
        tank_moloko += skok_dobavit;
        vstrechayshay();
        break;
    case 4:
        scanf("%d", &skok_dobavit);
        tank_kakao += skok_dobavit;
        vstrechayshay();
        break;
    case 5:
        printf("snachalo kofe");
        scanf("%d", &skok_dobavit);
        tank_kofe += skok_dobavit;
        printf("Moloko");
        scanf("%d", &skok_dobavit);
        tank_moloko += skok_dobavit;
        scanf("%d", &skok_dobavit);
        printf("water");
        tank_water += skok_dobavit;
        scanf("%d", &skok_dobavit);
        printf("kakao");
        tank_kakao += skok_dobavit;
        vstrechayshay();
        break;
    }
}

int proverka_kofe()
{

    if (tank_water < 100) {
        printf("Ostalosi malo water");
        dostavka();
    }
    if (tank_kofe < 25) {
        if (tank_kakao < 50) {
            printf("kofe i kakao net");
            dostavka();
        }
        int zakaz();
    }
    int zakaz();
}

int zakaz()
{
    char napitok[7];
    int otvet_klient;
    int otvet_klienta;
    int i = 0;
    if (tank_kofe < 25) {
        printf("%c (yes - 1, no - 2)", napitok[6]);
        scanf("%d", &otvet_klient);
        if (otvet_klient == 1) {
            otvet_klienta = 6;
            vibor_oplati(otvet_klienta);
        } else {
            vstrechayshay();
        }
    }
    if (tank_kakao < 50) {
        for (i = 0; i < 5; i++) {
            printf("napitok pomechen cifroi %d, %c \n", i, napitok[i]);
        }
        printf("Vvidete chislo nujnogo napitka: ");
        scanf("%d", &otvet_klienta);
        if (otvet_klienta > 6)
            ;
        {
            printf("Sovsem durak?");
            vstrechayshay();
        }
        vibor_oplati(otvet_klienta);
    }
    for (i = 0; i < 6; i++) {
        printf("napitok pomechen cifroi %d %c \n", i, napitok[i]);
    }
    printf("Vvidete chislo nujnogo napitka: ");
    scanf("%d", &otvet_klienta);
    if (otvet_klienta > 7) {
        printf("Sovsem durak?");
        vstrechayshay();
        vibor_oplati(otvet_klienta);
    }
}

int vibor_oplati(int otvet_klienta)
{
    int oplata = 0;
    int money_klienta = 0;
    printf("Oplata nalichkoi ili kartoi? (1 ili 2)");
    scanf("%d", &oplata);
    if (oplata == 1) {
        printf("Vnesite dengi");
        scanf("%d", &money_klienta);
    }
}
int resultat(int otvet_klient, int money_klienta)
{
    int cena = 0;
    int sdacha = 0;
    switch (otvet_klient) {
    case 1:
        cena = 50;
        if (money_klienta < cena) {
            printf("Vnesite eshe");
            scanf("%d", &money_klienta);
            resultat(otvet_klient, money_klienta);
        }
        tank_kofe -= 25;
        tank_water -= 100;
        if (money_klienta - cena > 0) {
            sdacha = money_klienta - cena;
            printf("vasha sdacha %d", sdacha);
        }
        printf("Spasibo chto polsuetesi nashimi uslugami!");
        break;
    case 2:

        cena = 50;
        if (money_klienta < cena) {
            printf("Vnesite eshe");
            scanf("%d", &money_klienta);
            resultat(otvet_klient, money_klienta);
        }
        tank_kofe -= 25;
        tank_water -= 100;
        if (money_klienta - cena > 0) {
            sdacha = money_klienta - cena;
            printf("vasha sdacha %d", sdacha);
        }
        printf("Spasibo chto polsuetesi nashimi uslugami!");
        break;
    case 3:

        cena = 100;
        if (money_klienta < cena) {
            printf("Vnesite eshe");
            scanf("%d", &money_klienta);
            resultat(otvet_klient, money_klienta);
        }
        tank_kofe -= 50;
        tank_water -= 200;
        if (money_klienta - cena > 0) {
            sdacha = money_klienta - cena;
            printf("vasha sdacha %d", sdacha);
        }
        printf("Spasibo chto polsuetesi nashimi uslugami!");
        break;

    case 4:
        cena = 150;
        if (money_klienta < cena) {
            printf("Vnesite eshe");
            scanf("%d", &money_klienta);
            resultat(otvet_klient, money_klienta);
        }
        tank_kofe -= 25;
        tank_water -= 250;
        if (money_klienta - cena > 0) {
            sdacha = money_klienta - cena;
            printf("vasha sdacha %d", sdacha);
        }
        printf("Spasibo chto polsuetesi nashimi uslugami!");
        break;

    case 5:
        tank_kofe -= 25;
        tank_water -= 100;
        tank_moloko -= 50;
        if (money_klienta - cena > 0) {
            sdacha = money_klienta - cena;
            printf("vasha sdacha %d", sdacha);
        }
        printf("Spasibo chto polsuetesi nashimi uslugami!");
        break;

    case 6:
        cena = 150;
        if (money_klienta < cena) {
            printf("Vnesite eshe");
            scanf("%d", &money_klienta);
            resultat(otvet_klient, money_klienta);
        }
        tank_kofe -= 25;
        tank_water -= 100;
        tank_moloko -= 100;
        if (money_klienta - cena > 0) {
            sdacha = money_klienta - cena;
            printf("vasha sdacha %d", sdacha);
        }
        printf("Spasibo chto polsuetesi nashimi uslugami!");
        break;

    case 7:
        cena = 150;
        if (money_klienta < cena) {
            printf("Vnesite eshe");
            scanf("%d", &money_klienta);
            resultat(otvet_klient, money_klienta);
        }
        tank_moloko -= 200;
        tank_kakao -= 50;
        if (money_klienta - cena > 0) {
            sdacha = money_klienta - cena;
            printf("vasha sdacha %d", sdacha);
        }
        printf("Spasibo chto polsuetesi nashimi uslugami!");
        break;
    }
}