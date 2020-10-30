#include <iostream>
#include <string>
using namespace std;



int main(){
	int islem;
	int a,b,adet,i;
	int cevap=1;
	int toplam=0;
	int sayilar[adet];
	float cevap1;
	cout <<"Hesap makinesine hosgeldiniz" << endl;
	cout <<"1- Toplama" << endl;
	cout <<"2- Bolme" << endl;
	cout <<"3- Carpma" << endl;
	
	
	cout <<" UYARI \n Bolme islemini sectiginiz takdirde yalnizca 2 sayi secebilirsiniz. Program büyügü kücüge bölecektir..\n" ;
	cout <<" Islem sayi degerini giriniz\n";   
	
	cin >> islem;
	
	
	
	switch (islem){
		case 1:
			cout << "Lutfen isleme sokmak istediginiz sayi adedini giriniz:" << endl;
	
	
			cin >> adet;
			for(i=0;i<adet;i++){
				cout << "Girilecek sayi:" << endl;  
				cin >> sayilar[i];
			}
			
			for(i=0;i<adet;i++){
				toplam +=sayilar[i];
			}
			cout << "Sonucunuz:" << toplam << endl;
			break;
		case 2:
			
			for(i=0;i<2;i++){
				cout <<"Sayilari giriniz:" << endl;
				cin >> sayilar[i];
				}
			if(sayilar[0]>sayilar[1]){
				cout << "Bölüm:" << sayilar[0]/ sayilar[1];
				
			}
			else{
				cout << sayilar[1]/sayilar[0];
			}
			break;
		
		case 3:
			cout << "Lutfen isleme sokmak istediginiz sayi adedini giriniz:" << endl;
	 
	
			cin >> adet;
			for(i=0;i<adet;i++){
				cout << "Girilecek sayi:" << endl;
				cin >> sayilar[i];
			}
			
			for(i=0;i<adet;i++){
				cevap = cevap*sayilar[i];
				
			}
			cout << "Sonucunuz:"<< cevap << endl;
			break;
		default:
			break;
	}
			
			
				
		
		
		
		
	
		
	
	
	
	
	
	return 0;
}
