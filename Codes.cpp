#include <iostream.h>
#include <conio.h>
main ()
{
  unsigned int taban,us,toplam=0,sayac1,sayac2,gecici_tbn;
  cout<<"Lutfen bir pozitif tam sayi giriniz:";
  cin>>taban;
  cout<<"Lutfen bir pozitif tam sayi daha giriniz:";
  cin>>us;
  gecici_tbn=taban;
  if(us>0)
  for(sayac1=1;sayac1<us;sayac1++)
	{
	toplam=0;
	for(sayac2=0;sayac2<taban;sayac2++)
		toplam=toplam+gecici_tbn;
	   gecici_tbn=toplam;

	}
	else
	if(us==0)
	toplam=1;
  cout<<taban<<" ^ "<<us<<" = "<<toplam;

getch();
}

