#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fiyat[8][4]={
    {49,46,50,40},
    {43,40,46,33},
    {70,75},
    {47},
    {52},
    {54},
    {69,73},
    {73},
    };

int ana_menu()
{
    int secim;
    system("cls");
    system("color E0");
    printf("\n\n\n\n\t\t\t\t\t\tKAHVE CESITLERI\n");
    printf("\t\t\t\t\t--------------------------------\n");
    printf("\t\t\t\t\t 1-TURK KAHVESI \t %dTL\n\n",fiyat[0][3]);
    printf("\t\t\t\t\t 2-ESPROSSO \t\t %dTL\n\n",fiyat[1][3]);
    printf("\t\t\t\t\t 3-MOCHA \t\t %dTL\n\n",fiyat[2][0]);
    printf("\t\t\t\t\t 4-AMERICANO \t\t %dTL\n\n",fiyat[3][0]);
    printf("\t\t\t\t\t 5-CAPPUCINO \t\t %dTL\n\n",fiyat[4][0]);
    printf("\t\t\t\t\t 6-CAFFE LATTE \t\t %dTL\n\n",fiyat[5][0]);
    printf("\t\t\t\t\t 7-SICAK CIKOLATA \t %dTL\n\n",fiyat[6][0]);
    printf("\t\t\t\t\t 8-SALEP \t\t %dTL\n\n\n",fiyat[7][0]);
    printf("\t\t\t\t\tLutfen seciminizi yapiniz:");
    scanf("%d",&secim);
    return secim;

}

int turk_kahve()
{
    int secim;
    system("cls");
    system("color E0");
    printf("\n\n\n\n\t\t\t\t\t\tTURK KAHVESI MENUSU\n");
    printf("\t\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t\t 1-SUTLU TURK KAHVBESI \t\t %dTL\n\n",fiyat[0][0]);
    printf("\t\t\t\t\t 2-DAMLA SAKIZLI TURK KAHVESI \t %dTL\n\n",fiyat[0][1]);
    printf("\t\t\t\t\t 3-CIKOLATALI TURK KAHVESI \t %dTL\n\n",fiyat[0][2]);
    printf("\t\t\t\t\t 4-SADE TURK KAHVESI \t\t %dTL\n\n",fiyat[0][3]);
    printf("\t\t\t\t\tLutfen seciminizi yapiniz:");
    scanf("%d",&secim);
    return secim;

}

int espresso()
{
    int secim;
    system("cls");
    system("color E0");
    printf("\n\n\n\n\t\t\t\t\t\tESPRESSO MENU\n");
    printf("\t\t\t\t\t--------------------------------------\n");
    printf("\t\t\t\t\t 1-DOUBLE ESPRESSO \t\t %dTL\n\n",fiyat[1][0]);
    printf("\t\t\t\t\t 2-ESPRESSO MACCHIATO \t\t %dTL\n\n",fiyat[1][1]);
    printf("\t\t\t\t\t 3-DOUBLE ESPRESSO MACCHIATO \t %dTL\n\n",fiyat[1][2]);
    printf("\t\t\t\t\t 4-ESPRESSO \t\t\t %dTL\n\n",fiyat[1][3]);
    printf("\t\t\t\t\tLutfen seciminizi yapiniz:");
    scanf("%d",&secim);

    system("cls");
    system("color E0");
    return secim;

}

int mocha()
{
    int secim;
    system("cls");
    system("color E0");
    printf("\n\n\n\n\t\t\t\t\t\tMOCHA MENU\n");
    printf("\t\t\t\t\t---------------------------------\n");
    printf("\t\t\t\t\t 1-SADE MOCHA \t\t 70TL\n\n",fiyat[2][0]);
    printf("\t\t\t\t\t 2-CIKOLATALI MOCHA \t 75TL\n\n\n",fiyat[2][1]);
    printf("\t\t\t\t\tLutfen seciminizi yapiniz:");
    scanf("%d",&secim);
    return secim;

}

int sicak_ciko()
{
    int secim;
    system("cls");
    system("color E0");
    printf("\n\n\n\n\t\t\t\t\t\tSICAK CIKOLATA MENU\n");
    printf("\t\t\t\t\t----------------------------------------\n");
    printf("\t\t\t\t\t 1-KAHVELI SICAK CIKOLATA \t %dTL\n\n",fiyat[6][0]);
    printf("\t\t\t\t\t 2-BEYAZ SICAK CIKOLATA \t %dTL\n\n\n",fiyat[6][1]);
    printf("\t\t\t\t\tLutfen seciminizi yapiniz:");
    scanf("%d",&secim);
    return secim;

}

int salep()
{
    int secim;
    system("cls");
    system("color E0");
    printf("\n\n\n\n\t\t\t\t\t\tSALEP MENU\n");
    printf("\t\t\t\t\t---------------------------------\n");
    printf("\t\t\t\t\t 1-SEKERLI\n\n");
    printf("\t\t\t\t\t 2-SEKERSIZ \n\n");
    printf("\t\t\t\t\tLutfen seciminizi yapiniz:");
    scanf("%d",&secim);
    return secim;

}

void odeme(int fiyat)
{
    int ucret;
    int toplam=0;
    system("cls");
    system("color E0");
    printf("\t\t\t\t\t TOPLAM ODEMENIZ GEREKEN TUTAR: %dTL\n",fiyat);
    printf("\t\t\t\t\t Yatiracaginiz ucreti giriniz:");
    scanf("%d",&ucret);
    toplam=fiyat-ucret;
    while(toplam>0)
    {
        system("cls");
        system("color E0");
        printf("\t\t\t\t\t ODEME MIKTARI YETERSIZ!!\n\n");
        printf("\t\t\t\t\t TOPLAM ODEMENIZ GEREKEN TUTAR: %dTL\n\n",fiyat);
        printf("\t\t\t\t\t KALAN ODEME MIKTARI: %dTL\n\n",toplam);
        printf("\t\t\t\t\t EK UCRETI GIRINIZ: ");
        scanf("%d",&ucret);
        toplam = toplam - ucret;
    }
    system("cls");
    system("color E0");
    if(toplam==0)
    {
        printf("\t\t\t\t\t ODEMENIZ ALINMISTIR\n");
        printf("\t\t\t\t\t AFIYET OLSUN YINE BEKLERIZ\n\n");

    }
    else
    {
        toplam = abs(toplam);
        printf("\t\t\t\t\t ODEMENIZ ALINMISTIR\n");
        printf("\t\t\t\t\t GERI ODENEN UCRET: %d TL\n",toplam);
        printf("\t\t\t\t\t AFIYET OLSUN YINE BEKLERIZ\n\n");

    }



}

int main()
{
    system("cls");
    system("color E0");
    printf("\n\n\n\n\n\n\t\t\t        ________________________________________________  \n");
    printf("\t\t\t       |                                                | \n");
    printf("\t\t\t       |            SANAL KAFEYE HOSGELDINIZ            | \n");
    printf("\t\t\t       |                                                | \n");
    printf("\t\t\t       |   Devam etmek icin D veya d tusuna basiniz     | \n");
    printf("\t\t\t       |   CIKIS icin ESC tusuna basiniz                | \n");
    printf("\t\t\t       |________________________________________________| \n");

    char tus=getch();
    if(tus==27)
    {
        system("cls");
        printf("cikmak istediginize emin misiniz? (E/H)");
        tus=getch();
        if(tus=='E' || tus=='e')
        {
            return 0;
        }
        else if(tus=='H' || tus=='h')
        {
            return main();
        }
    }
    if(tus=='D' || tus=='d')
    {
        int f;
        int sec=ana_menu();
        switch (sec)
        {
            case 1:
                f=turk_kahve();
                odeme(fiyat[0][f-1]);
                break;
            case 2:
                f=espresso();
                odeme(fiyat[1][f-1]);
                break;
            case 3:
                f=mocha();
                odeme(fiyat[2][f-1]);
                break;
            case 4:
                odeme(fiyat[3][0]);
                break;
            case 5:
                odeme(fiyat[4][0]);
                break;
            case 6:
                odeme(fiyat[5][0]);
                break;
            case 7:
                f=sicak_ciko();
                odeme(fiyat[6][f-1]);
                break;
            case 8:
                f=salep();
                odeme(fiyat[7][f-1]);
                break;

        }

    }

    return 0;
}
