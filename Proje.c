#include <stdio.h>
#include <stdlib.h>
int puan[9];
void sorular(){
    char secim,soru;
    int i;
    printf("1. soru: \n");
    printf("Char kac bytedir?\n");
    printf("A)  1byte\n");
    printf("B)  2byte\n");
    printf("C)  4byte\n");
    printf("D)  3byte\n");
    printf("Cevabinizi giriniz:");
    scanf("%s",&secim);

    if(secim=='A' || secim=='a' )
    {
    printf("Cevabiniz dogru\n");
    puan[0]=10;
    printf("%d puan\n",puan[0]);
    }
    else{
    printf("Cevabiniz yanlis\n");
    puan[0]=0;
    printf("%d puan\n",puan[0]);
    }
    printf("\n\n\n");

    printf("2. soru: \n");
    printf("CPU acilimi nedir?\n");
    printf("A) Global photographic union  \n");
    printf("B) Central processing unit \n");
    printf("C) Central processing union \n");
    printf("D) Global processing union\n");
    printf("Cevabinizi giriniz:");
    scanf("%s",&secim);

    if(secim=='B' || secim=='b' )
    {
    printf("Cevabiniz dogru\n");
    puan[1]=10;
    printf("%d puan\n",puan[1]);
    }
    else{
    printf("Cevabiniz yanlis\n");
    puan[1]=0;
    printf("%d puan\n",puan[1]);
    }
        printf("\n\n\n");

    printf("3. soru: \n");
    printf("Return ne ise yarar?\n");
    printf("A)  Fonksiyonu bitirir\n");
    printf("B)  Fonksiyonu baslatir\n");
    printf("C)  Satiri duraklatir\n");
    printf("D)  Hicbiri\n");
    printf("Cevabinizi giriniz:");
    scanf("%s",&secim);

    if(secim=='A' || secim=='a' )
    {
    printf("Cevabiniz dogru\n");
    puan[2]=10;
    printf("%d puan\n",puan[2]);
    }
    else{
    printf("Cevabiniz yanlis\n");
    puan[2]=0;
    printf("%d puan\n",puan[2]);
    }
        printf("\n\n\n");

    printf("4. soru: \n");
    printf("Degiskenler kac turdur?\n");
    printf("A)  1\n");
    printf("B)  2\n");
    printf("C)  3\n");
    printf("D)  4\n");
    printf("Cevabinizi giriniz:");
    scanf("%s",&secim);

    if(secim=='C' || secim=='c' )
    {
    printf("Cevabiniz dogru\n");
    puan[3]=10;
    printf("%d puan\n",puan[3]);
    }
    else{
    printf("Cevabiniz yanlis\n");
    puan[3]=0;
    printf("%d puan\n",puan[3]);
    }
        printf("\n\n\n");

    printf("5. soru: \n");
    printf("C proglamlama dili ile hangisi yapilmaz?\n");
    printf("A)  Isletim sistemi olusturmak\n");
    printf("B)  Veri tabani sistemi gelistirmek\n");
    printf("C)  Windows programlari gelistirmek\n");
    printf("D)  Web sitesi arayuzu olusturmak\n");
    printf("Cevabinizi giriniz:");
    scanf("%s",&secim);

    if(secim=='D' || secim=='d' )
    {
    printf("Cevabiniz dogru\n");
    puan[4]=10;
    printf("%d puan\n",puan[4]);
    }
    else{
    printf("Cevabiniz yanlis\n");
    puan[4]=0;
    printf("%d puan\n",puan[4]);
    }

    bas:
    printf("Dvam etmek icin 1'i basiniz.");
    scanf("%d",&i);
    if(i==1){
    system("cls");
    }
    else
    {
    printf("-Hataki tuslama!\n-Tekrar deneyin.\n");
    goto bas;
    }

   printf("Asagidaki sorularin dogru olanlarin yanina D yanlis olanlarin yanina Y yaziniz.\n\n");
   soru6:
   printf("6. soru\n");
   printf("'Scanf' kullanicidan bilgi almamizi saglar. \n");
   printf("cevabiniz:");
   scanf("%s",&secim);

   switch (secim)
   {
   case 'D': ;
   case 'd': printf("Cevabiniz dogru\n");
   puan[5]=10;
   printf("%d puan \n\n",puan[5]); break;
   case 'Y': ;
   case 'y': printf("Cevabiniz yanlis\n");
   puan[5]=0;
   printf("%d puan\n\n ",puan[5]); break;
   default:printf("Hatali tuslama!\n");goto soru6; break;
   }
   soru7:
   printf("7. soru\n");
   printf("Bellekte yer tutmak icin degiskenleri kullaniriz. \n");
   printf("Cevabiniz:");
   scanf("%s",&secim);

   switch (secim)
   {
   case 'D': ;
   case 'd': printf("Cevabiniz dogru\n");
   puan[6]=10;
   printf("%d puan \n\n",puan[6]); break;
   case 'Y': ;
   case 'y': printf("Cevabiniz yanlis\n");
   puan[6]=0;
   printf("%d puan \n\n",puan[6]); break;
   default:printf("Hatali tuslama!\n");goto soru7; break;
   }
   soru8:
   printf("8. soru\n");
   printf("16 lik sayi sisteminde A harfi 2lik sistemde 12 sayisina denktir. \n");
   printf("Cevabiniz:");
   scanf("%s",&secim);

   switch (secim)
   {
   case 'D': ;
   case 'd': printf("Cevabiniz yanlis\n");
   puan[7]=0;
   printf("%d puan \n\n",puan[7]); break;
   case 'Y': ;
   case 'y': printf("Cevabiniz dogru\n");
   puan[7]=10;
   printf("%d puan \n\n ",puan[7]); break;
   default:printf("Hatali tuslama!\n");goto soru8; break;
   }
   soru9:
   printf("9. soru\n");
   printf(" Diziler ayni turde degiskenleri bir arada tutmaya yarar.   \n");
   printf("Cevabiniz:");
   scanf("%s",&secim);

   switch (secim)
   {
   case 'D': ;
   case 'd': printf("Cevabiniz dogru\n");
   puan[8]=10;
   printf("%d puan \n\n",puan[8]); break;
   case 'Y': ;
   case 'y': printf("Cevabiniz yanlis\n");
   puan[8]=0;
   printf("%d puan \n\n ",puan[8]); break;
   default:printf("Hatali tuslama!\n");goto soru9; break;
   }
   soru10:
   printf("10. soru\n");
   printf("Algoritma akis semalarinda basla komutu kare sembol ile gosterilir.  \n");
   printf("Cevabiniz:");
   scanf("%s",&secim);

   switch (secim)
   {
   case 'D': ;
   case 'd': printf("Cevabiniz yanlis\n");
   puan[9]=0;
   printf("%d puan \n\n",puan[9]); break;
   case 'Y': ;
   case 'y': printf("Cevabiniz dogru\n");
   puan[9]=10;
   printf("%d puan \n\n",puan[9]); break;
   default:printf("Hatali tuslama!\n");goto soru10; break;
   }

   bas1:
   printf("-Sonucu gormek icin 1'i basiniz:");
   scanf("%d",&i);
   if(i==1)
   {
       system("cls");
   }
   else
   {
       printf("-Hatali Tuslama!\n-Tekrar deneyin.\n");
       goto bas1;
   }
}


int main(){
char isim[20],soyisim[20],bolum1[20],bolum2[20];
long int no;
int  i;

printf("**       ALGORITMA TESTI       **\n\n");

printf("-Isminizi giriniz:");
scanf("%s",&isim[20]);

printf("-Soyisminizi giriniz:");
scanf("%s",&soyisim[20]);

printf("-Bolumunuzu giriniz:");
scanf("%s %s",&bolum1[20],&bolum2[20]);

printf("-Numaranizi giriniz:");
scanf("%d",&no);
system("cls");
bas3:
printf("\t\t\t==>Testimiz toplam 10 sorudan olusmaktadir.                            \n");
printf("\t\t\t==>Testimizde 5 tane secmeli 5 tane dogru yanlis sorusu bulunmaktadir. \n");
printf("\t\t\t==>Her soru 10 puandir.                                                \n");
printf("\t\t\t**********BASARILAR************\n");

printf("\t\t\t==>Testi baslamak icin 1'i giriniz\n\n\n");
scanf("%d",&i);

if (i==1){
    system("cls");
    sorular();
   }
   else
   {
    system("cls");
    printf("\t\t\t-Hatali Tuslama!\n\t\t\t-Tekrar deneyin.\n");
    goto bas3;
   }

   printf("==>>%s %s\n",&isim[20],&soyisim[20]);
   printf("==>>%s %s\n",&bolum1[20],&bolum2[20]);
   printf("==>>%d\n",no);
   printf("==>>Puaniniz: %d",toplampuan(puan));


    return 0;
}



int toplampuan(int soru[]){
    int   toplam=0;

    for(int i=0;i<10;i++)
    {
        toplam+=soru[i];
    }

     if(toplam>=50)
     {
        printf("==>>Tebrikler gectiniz.\n");
     }
     else
     {
        printf("==>>Maalesef gecemediniz.\n");
     }
  return toplam;
}