//Melike Kurt Bu program kullanicinin girdigi sayida sutun ve satira sahip baklava deseni cizer

#include<stdio.h>
int main (){


int i,y,yildiz,yildiz2,yildiz3,yildiz4,arti2,arti,x,satir;//gerekli olan degiskenleri atiyoruz
  scanf("%d",&satir);//satir sayisini kullanicidan aliyoruz
  for(i=1;i<=satir/2;i++)//desen icin once girilen satir sayisinin yarýsýn kadar sutun-satir aliyoruz ve donguye sokuyoruz
  {
    for(yildiz=1;yildiz<=(satir/2)-i+1;yildiz++)//yildiz deseni once bastirilmali ve (satir/2)-i+1 formuluyle istenilen yildiz sayisina ulasiyoruz
    printf("*");
    for(arti=1;arti<=i;arti++)//arti yildizdan hemen sonra bastirilmali ve i kadar bastiriyoruz yani once bir sonra iki
    printf("+");
    for(x=arti-2;x>0;x--)//artilari tamamlamak icin kullanilir
    printf("+");
    for(yildiz2=1;yildiz2<=(satir/2)-i+1;yildiz2++)//geri kalan yildizi ayni yontemle bastirir
    printf("*"); 
    printf("\n");//i belirlenen sinira gelince alt satira gecer
  }  
    for(y=1;y<=1;y++)//desenin ortasindaki artilar satir sayisi kadar olmali
  {
    for(arti2=1;arti2<=satir;arti2++)
    printf("+");
  } 
    printf("\n");//baklavanin ikinci kismina gecis
	int z;   
    for(z=1;z<=(satir/2);z++)//z i ile ayni islevi gorur yeni bir fora gecis icin kullanilir
    {
      for(yildiz3=1;yildiz3<=z;yildiz3++)//yildizla baslanmali ve bu sefer yildiz sayisi arttilarak gitmeli
      printf("*");
      for(arti2=1;arti2<=satir-(2*z);arti2++)//artilar azaltilmali bu da bu formulle mevcut = satir-(2*z)
      printf("+");
      for(yildiz4=1;yildiz4<=z;yildiz4++)//yilldizla desen tamamlanir
      printf("*");
      printf("\n");// z belirlenen sinira gelince alt satira gecer
    }

     return 0;
}
