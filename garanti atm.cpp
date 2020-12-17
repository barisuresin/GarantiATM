#include <stdio.h>
#include<windows.h>

int main()
{
	
	char isim;
	int sifre,paracekme,miktar,havale,anamenu,havalesecim,parayatirma,hesaphareketleri,bakiyesorgulama,kartiade,islem;
	
	printf("Lutfen isminizi giriniz: ");
	scanf("%s", &isim);	
	printf("Sifrenizi giriniz: ");
	scanf("%d", &sifre);
	if(sifre ==	123456)
	{
		printf("\n     Giris Basarili!! \n ********************** \n 			Garanti Bankasina Hosgeldiniz.\n      				ISLEMLER\n");
		system("color 2E");
	
	}
	else
	{
		printf("Giris Basarisiz");
		system("pause");	
		
	}
	
	printf("																										1) Para cekme\n"); 
	printf(" 2) Para Yatirma\n ");
	printf("																										3) Hesap Hareketleri\n ");
	printf("4) Bakiye Sorgulama\n ");
	printf("																										5) Kart Iade\n ");
	printf("6) Havale Yapma\n ");
	printf("Lutfen 1-6 arasi islemlerden birisiniz seciniz: ");
	scanf("%d", &islem);
	int bakiye=1000; 
	/*bakiyeyi burda tanýmlamamýn nedeni: Yukarda tanýmladýðýmda islemlerdeki sayý kadar basamak eksiliyor yani 16,
	 aslýnda 1016 yazsaydým düzelirdi fakat burda tanýmlýyým dedim
	 */
	switch(islem)
	{
	
		case 1:
			printf("\nBakiyeniz: %d \nCekmek istediginiz miktari giriniz:",bakiye);
			scanf("%d", &miktar);
			bakiye = bakiye - miktar;
			printf("\nIsleminiz gerceklestiriliyor...\n Yeni tutariniz: %d \n Cekilen para: %d",bakiye,miktar);
			printf("\nKartinizi almayi unutmayiniz, Iyi gunler dileriz.");
			scanf("%d",anamenu);
	
			break;
			
			
		case 2:
				printf("\nBakiyeniz: %d \nYatirmak istediginiz miktari giriniz:",bakiye);
				scanf("%d", &miktar);
				bakiye = bakiye + miktar;
				printf("\nIsleminiz gerceklestiriliyor...\n Yeni tutariniz: %d \n Yatirilan para: %d",bakiye,miktar);
			break;
			
			
		case 3:
			printf("\nBu hesabinizda son bir ayda hareketiniz bulunmuyor.");
			break;
			
			
		case 4:
			printf("\nAnlik bakiye durumu: %d",bakiye);
			break;
			
			
		case 5:
			printf("\nKartinizi almayi unutmayiniz, Iyi gunler dileriz.");
			break;
			
		case 6:
			printf("\nHavale yapacaginiz hesabin ibanini giriniz: ");
			scanf("%d", &havale);
			printf("Havale yapacaginiz hesabin ibani: '%d'\n",havale);
			printf("Girdiginiz hesap ibanini dogruluyor musunuz? (evet ise 1, Hayir ise 2)");
			scanf("%d", &havalesecim);
			if ( havalesecim == 1)
			{
					printf("\nBakiyeniz: %d \nYatirmak istediginiz miktari giriniz:",bakiye);
				scanf("%d", &miktar);
				bakiye = bakiye - miktar;
				printf("\nIsleminiz gerceklestiriliyor...\n '%d' hesabina gonderdiginiz '%d' miktar para islemi tamamlanmistir.\n Yeni tutariniz: %d \n Yatirilan para: %d",havale,miktar,bakiye,miktar);
			}
			else
			{
					printf("\nHavale yapacaginiz hesabin ibanini giriniz: ");
			scanf("%d", &havale);
			printf("Havale yapacaginiz hesabin ibani: '%d'\n",havale);
			printf("Girdiginiz hesap ibanini dogruluyor musunuz? (evet ise 1, Hayir ise 2)");
			scanf("%d", &havalesecim);
			if ( havalesecim == 1)
			{
					printf("\nBakiyeniz: %d \nYatirmak istediginiz miktari giriniz:",bakiye);
				scanf("%d", &miktar);
				bakiye = bakiye - miktar;
				printf("\nIsleminiz gerceklestiriliyor...\n '%d' hesabina gonderdiginiz '%d' miktar para islemi tamamlanmistir.\n Yeni tutariniz: %d \n Yatirilan para: %d",havale,miktar,bakiye,miktar);
			}
			}
			
			
			break;
			
		
		default:
			printf("\nBoyle bir islemimiz yoktur...");
			break;
	}
		
return 0;
}
