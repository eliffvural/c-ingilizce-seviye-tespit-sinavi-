#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hosgeldinizfonksiyonu(){
    printf("*** INGILIZCE SEVIYE TESPIT SINAVI ***\n");
    printf("======================================\n");
}
struct ogrenciler{
	char isim[20],soyisim[20];
	int dogumyili;
};
void bilgilerigoster(struct ogrenciler bilgi){
	printf("Ogrencinin adi: %s\n", bilgi.isim);
	printf("Ogrencinin soyadi: %s\n", bilgi.soyisim);
	printf("Ogrencinin dogum yili: %s", bilgi.dogumyili);
}

int girisfonksiyonu(){
    char istenenkullaniciadi[20],istenenparola[20];
    while(1){
    	 printf("Lutfen kullanici adinizi giriniz: ");
         scanf("%s", &istenenkullaniciadi);
         printf("Lutfen parolanizi giriniz: ");
         scanf("%s", &istenenparola);	
         if(strcmp(istenenkullaniciadi,"elif")==0 && strcmp(istenenparola,"elif2002")==0){
         printf("Giris basarili.\n\n");
         break;
         }
         else{
         printf("Giris basarisiz.\n");
         continue;
         }   
    }
}


int main() {
   
   hosgeldinizfonksiyonu();
   struct ogrenciler ogrencibir={"Elif","Vural",2002};
   bilgilerigoster(ogrencibir);
   printf("Online ingilizce seviye tespit sinavina hosgeldiniz.\nSistemde2002 kayitli iseniz lutfen giris yapiniz. Kayitli degilseniz lutfen kayit olmak icin asagidaki adimlari takip ediniz.\n\nAsagidaki seceneklerden kendinize uygun olani seciniz.\n\n[1]---Kayit Ol\n[2]---Giris Yap");
   scanf("%d", &secim);
   if(secim==1){
       printf("Kaydinizin gerceklesmesi icin asagidaki sorulari cevaplayiniz.\n\n");
       printf("Adiniz: ");
       scanf("%s", &ad);
       printf("Soyadiniz: ");
       scanf("%s", &soyad);
       printf("Dogum yiliniz: ");
       scanf("%d", &dogumyili);
       printf("Bir kullanici adi olusturunuz: ");
       scanf("%s", &kullaniciadi);
       while(1){
           printf("Lutfen parola olusturunuz: ");
           scanf("%s", &parola);
           if(strlen(parola)>=8){
           printf("Parolaniz basariyla olusturuldu.");
           break;
           }
           else{
           printf("Parola icin girdiginiz karakterler yetersiz.");
           continue;
           }
       }
       printf("Kaydiniz basariyla gerceklesti.\n**** Giris ekranina yonlendiriliyorsunuz. ****\n");
       girisfonksiyonu();
   }
   else if(secim==2){
       girisfonksiyonu();
   }
   char cevap[1];
   int puan=0;
   printf("Asagida bulunan 5 soru seviyenizi olcmek icin hazirlanmistir. Bunlardan 3 tanesi dilbilgisi, 2 tanesi kelime bilgisi olcmeye yonelik sorulardir. Her soru 5 puandir. Sinavda basarilar dileriz.\n\n");
   printf(" Answer the following multiple-choice questions.\n\n");
   printf("Puaniniz: %d\n\n", puan);
   
   	printf("[Soru-1]- Hello! My name ___ Samuel. What is ___ name?\n a) is-your\n b) are-your\n c) are-our\n d) is-their\n");
    scanf("%s", &cevap);
    if(strcmp(cevap,"a")==0){
       printf("Cevabiniz dogru.\n");
       puan+=5;
       printf("Guncel puaniniz: %d\n\n", puan);
    }
    else{
       printf("Cevabiniz yanlis. Dogru cevap a sikkidir.\n");
       printf("Guncel puaniniz: %d\n\n", puan);
       }
    
       printf("[Soru-2]- She is running right now.\nWhich tense?\n a) Future Tense\n b) Past Tense\n c) Present Continuous Tense\n d) Simple Present Tense\n");
       scanf("%s", &cevap);
       if(strcmp(cevap,"c")==0){
           printf("Cevabiniz dogru.\n");
           puan+=5;
           printf("Guncel puaniniz: %d\n\n", puan);
        }
       else{
           printf("Cevabiniz yanlis. Dogru cevap c sikkidir.\n");
           printf("Guncel puaniniz: %d\n\n", puan);
        }
    
    	printf("[Soru-3]- I ____ studied English for six years.\n a) am\n b) was\n c) have\n d) has\n");
    	scanf("%s", &cevap);
    	if(strcmp(cevap,"c")==0){
    		printf("Cevabiniz dogru.\n");
    		puan+=5;
    		printf("Guncel puaniniz: %d\n\n", puan);
		}
		else{
			printf("Cevabiniz yanlis. Dogru cevap c sikkidir.\n");
			printf("Guncel puaniniz: %d\n\n", puan);
		}
	
		printf("[Soru-4]- Calm\nWhich of the following is the synonym of this word?\n a) beautiful\n b) peaceful\n c) red\n d) bright\n");
		scanf("%s", &cevap);
		if(strcmp(cevap,"b")==0){
			printf("Cevabiniz dogru.\n");
			puan+=5;
			printf("Guncel puaniniz: %d\n\n", puan);
		}
		else{
			printf("Cevabiniz yanlis. Dogru cevap b sikkidir.\n");
			printf("Guncel puaniniz: %d\n\n", puan);
		}
	
		printf("[Soru-5]- She is a ___ person. She cannot lie about something.\n a) shy\n b) attractive\n c) talkative\n d) honest\n");
		scanf("%s", &cevap);
		if(strcmp(cevap,"d")==0){
			printf("Cevabiniz dogru.\n");
			puan+=5;
			printf("Guncel puaniniz: %d\n\n", puan);	
		}
		else{
			printf("Cevabiniz yanlis. Dogru cevap d sikkidir.\n");
			printf("Guncel puaniniz: %d\n\n", puan);
		}
	
	printf("Sinaviniz tamamlanmistir.\nSinav sonu toplam puaniniz: %d\n", puan);
	int seviye;
	if(puan<10){
	    printf("Seviyeniz: A1");
	}
	else if(puan>=10 && puan<=20){
	    printf("Seviyeniz: A2");
	}
	else{
	    printf("Seviyeniz: B1");
	}
	
