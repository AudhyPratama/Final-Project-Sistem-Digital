#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//fungsi penjumlahan
void penjumlahan(){
	
	//bil_1 = bilangan 1, bil_2 = bilangan 2
	int bil_1, bil_2, hasil;
	
	system("cls");
	printf("======= Opeasi Penjumalahan =======");
	
	printf("\n\nMasukan angka pertama	: ");
	scanf("%i",&bil_1);
	
	printf("\nMasukan angka kedua	: ");
	scanf("%i",&bil_2);
	
	printf("\nangka yang anda masukan adalah\n\n'%i + %i'",bil_1,bil_2);
	
	hasil = bil_1 + bil_2;
	
	printf("\n\nhasilnya adalah	: %i",hasil);
}

//fungsi pengurangan
void pengurangan(){
	
	//bil_1 = bilangan 1, bil_2 = bilangan 2
	int bil_1, bil_2, hasil;
	
	system("cls");
	printf("======= Opeasi Pengurangan =======");
	
	printf("\n\nMasukan angka pertama	: ");
	scanf("%i",&bil_1);
	
	printf("\nMasukan angka kedua	: ");
	scanf("%i",&bil_2);
	
	printf("\nangka yang anda masukan adalah\n\n'%i - %i'",bil_1,bil_2);
	
	hasil = bil_1 - bil_2;
	
	printf("\n\nhasilnya adalah	: %i",hasil);
}

//fungsi perkalian
void perkalian(){
	
	//bil_1 = bilangan 1, bil_2 = bilangan 2
	int bil_1, bil_2, hasil;
	
	system("cls");
	printf("======= Opeasi Perkalian =======");
	
	printf("\n\nMasukan angka pertama	: ");
	scanf("%i",&bil_1);
	
	printf("\nMasukan angka kedua	: ");
	scanf("%i",&bil_2);
	
	printf("\nangka yang anda masukan adalah\n\n'%i x %i'",bil_1,bil_2);
	
	hasil = bil_1 * bil_2;
	
	printf("\n\nhasilnya adalah	: %i",hasil);
}

//fungsi pembagian
void pembagian(){
	
	//bil_1 = bilangan 1, bil_2 = bilangan 2
	//hasil menggunakan float agar dapat menampilkan angka koma
	int bil_1, bil_2;
	float hasil;
	
	system("cls");
	printf("======= Opeasi Pembagian =======");
	
	printf("\n\nMasukan angka pertama	: ");
	scanf("%i",&bil_1);
	
	printf("\nMasukan angka kedua	: ");
	scanf("%i",&bil_2);
	
	printf("\nangka yang anda masukan adalah\n\n'%i : %i'",bil_1,bil_2);
	
	hasil = bil_1 / bil_2;
	
	printf("\n\nhasilnya adalah	: %i",hasil);
}

//fungsi pangkat 1
void pangkat1(){
	
	//variabel angka
	int angka, hasil;
	
	printf("\nmasukan angka yang ingin dipangkatkan 1:");
	scanf("%i",&angka);
	
	printf("\nangka yang anda masukan adalah\n\n%i^1",angka);
	
	hasil = angka*1;
	
	printf("\n\nhasilnya adalah: %i",hasil);
	
}

//fungsi pangkat 2
void pangkat2(){
	
	//variabel angka
	int angka, hasil;
	
	printf("\nmasukan angka yang ingin dipangkatkan 2:");
	scanf("%i",&angka);
	
	printf("\nangka yang anda masukan adalah\n\n%i^2",angka);
	
	hasil = angka*angka;
	
	printf("\n\nhasilnya adalah: %i",hasil);
	
}

//fungsi pangkat 3
void pangkat3(){
	
	//variabel angka
	int angka, hasil;
	
	printf("\nmasukan angka yang ingin dipangkatkan 3:");
	scanf("%i",&angka);
	
	printf("\nangka yang anda masukan adalah\n\n%i^3",angka);
	
	hasil = angka*angka*angka;
	
	printf("\n\nhasilnya adalah: %i",hasil);
	
}

//fungsi perpangkatan
void perpangkatan(){
	
	//pilihan_p = pilihan perpangkatan
	int pilihan_p;
	system ("cls");
	
	printf("======= Operasi Perpangkatan =======");
	
	printf("\n\nPilih operasi perpangkatan dibawah ini: ");
	printf("\n(1). Perpangkatan 1");
	printf("\n(2). Perpangkatan 2");
	printf("\n(3). Perpangkatan 3");
	printf("\npilihan: ");
	scanf("%i",&pilihan_p);
	
	if (pilihan_p == 1){
		pangkat1();
	}
	else if (pilihan_p ==2){
		pangkat2();
	}
	else if (pilihan_p ==3){
		pangkat3();
	}
	else{
		printf("\npilihan tidak ditemukan");
	}
}

//fungsi kalkulator matriks
void matriks(){
	
	system("cls");
	//x= elemen baris, y= elemen kolom, b= jml batas baris, k= batas jumlah kolom
	int x, y, b, k, matriks_1[8][8], matriks_2[8][8], hasil[8][8];
	
	printf("======= Program Kalkulator Matriks =======\n\n");
	
	//untuk memasukan batas jumlah baris
	printf("Masukkan jumlah baris matriks: ");
	scanf("%i", &b);
	
	//untuk memasukan batas jumlah kolom
	printf("Masukkan jumlah kolom matriks: ");
	scanf("%i", &k);
	
	//untuk memasukan angka/elemen matriks pertama
	printf("\nMasukkan elemen matriks pertama: \n");
	for (x = 0; x < b; x++)
	  	{
	    for (y = 0; y < k; y++)
	    	{
	      	scanf("%i", &matriks_1[x][y]);
	    	}
		}
		
		//untuk memasukan angka/elemen matriks kedua
	printf("\nMasukkan elemen matriks kedua: \n");
	for (x = 0; x < b; x++)
	 	{
	    for (y = 0; y < k; y++)
	    	{
	      	scanf("%i", &matriks_2[x][y]);
	    	}
		}
		
	//pilihan untuk operasi penjumlahan/pengurangan
	printf("\npilih macam operasi di bawah ini\n");
	printf("\n(1). penjumlahan");
	printf("\n(2). penjumlahan");
	
	//o= jenis operasi
	int o;
	
	scanf ("%i",&o );
	
	//jika memilih 1 maka akan menuju ke operasi penjumlahan matriks
	if (o == 1){
	
	
	printf("\nhasil penjumlahan matrix: \n");
	for (x = 0; x < b; x++)
	  	{
	    for (y = 0; y < k; y++)
	    	{
	      	hasil[x][y] = matriks_1[x][y] + matriks_2[x][y];
	      	printf("%i \t", hasil[x][y]);
	    	}
	    	printf("\n");
		}
	}
	
	//jika memilih 2 akan menuju ke operasi pengurangan matriks
	if (o == 2){
	
	printf("\nhasil pengurangan matrix: \n");
	for (x = 0; x < b; x++)
	  	{
	    for (y = 0; y < k; y++)
	    	{
	      	hasil[x][y] = matriks_1[x][y] - matriks_2[x][y];
	      	printf("%i \t", hasil[x][y]);
	    	}
	    	printf("\n");
		}
	}	
}

void bangun_datar(){

//membuat variabel. kl = keliling/luas, bd = bangun datar 
	int pilihan_kl,pilihan_bd;
	float phi=3.14, jari, panjang, lebar, sisi,sisi_1, sisi_2, sisi_3, alas, tinggi, miring, keliling, luas;
	
	printf("_ _ _ _ _ SELAMAT DATANG DI PROGRAM PERHITUNGAN BANGUN DATAR _ _ _ _ _\n\n");
	
	printf("silahkan pilih operasi di bawah ini\n");
	printf("\n1. keliling	(cm)");
	printf("\n2. luas		(cm)\n");

	//pilihan operasi keliling/luas
	printf("\npilihan anda :");
	scanf("%i",&pilihan_kl);
	
	//pilihan operasi keliling
	if(pilihan_kl==1){
		printf("\n+ + + pilih bangun datar yang akan dihitung kelilingnya + + +\n\n");
	
		printf("1. persegi");
		printf("\n2. persegi panjang");
		printf("\n3. segitiga");
		printf("\n4. jajargenjang");
		printf("\n5. lingkaran\n");
		
		//pilihan bangun datar yang akan dihitung kelilingnya
		printf("\npilihan anda :");
		scanf("%i",&pilihan_bd);
	
		switch(pilihan_bd){
			//keliling bangun datar persegi
			case 1 :
				printf("\n= = = keliling persegi = = =\n\n");
				
				printf("masukan panjang sisi (cm):");
				scanf("%f",&sisi);
			
				printf("\nkeliling persegi = 4 x %f",sisi);
				keliling = 4*sisi;
			
				printf("\n\nkeliling persegi adalah: %.8f", keliling);
				break;
			//keliling bangun datar persegi panjang
			case 2 :
				printf("\n= = = keliling persegi panjang = = =\n\n");
			
				printf("masukan panjang persegi panjang	(cm):");
				scanf("%f",&panjang);				
			
				printf("masukan lebar persegi panjang	(cm):");
				scanf("%f",&lebar);
				
				printf("\nkeliling persegi panjang = 2 x (%f + %f)",panjang,lebar);
				keliling = 2*(panjang+lebar);
				
				printf("\n\nkeliling persegi panjang adalah = %8f",keliling);
				break;
			//keliling bangun datar segitiga	
			case 3 :
				printf("\n= = = keliling segitiga = = =\n\n");
			
				printf("masukan panjang salah satu sisi segitiga	 (cm):");
				scanf("%f",&sisi_1);				
			
				printf("masukan panjang salah satu sisi segitiga lainnya (cm):");
				scanf("%f",&sisi_2);
				
				printf("masukan panjang salah satu sisi segitiga lainnya (cm):");
				scanf("%f",&sisi_3);
				
				printf("\nkeliling segitiga = %f + %f + %f",sisi_1,sisi_2,sisi_3);
				keliling = sisi_1+sisi_2+sisi_3;
				
				printf("\n\nkeliling segitiga adalah = %8f",keliling);
				break;
			//keliling bangun datar jajargenjang
			case 4 :
				printf("\n= = = keliling jajargenjang = = =\n\n");
			
				printf("masukan panjang jajargenjang		(cm):");
				scanf("%f",&panjang);				
			
				printf("masukan sisi miring jajargenjang	(cm):");
				scanf("%f",&miring);
				
				printf("\nkeliling jajargenjang = 2 x (%f + %f)",panjang,miring);
				keliling = 2*(panjang+miring);
				
				printf("\n\nkeliling jajargenjang adalah = %8f",keliling);
				break;
			//keliling bangun datar lingkaran
			case 5 :
				printf("\n= = = keliling lingkaran = = =\n\n");
			
				printf("masukan jari-jari lingkaran (cm):");
				scanf("%f",&jari);				
				
				printf("\nkeliling lingkaran = 2 x phi(3.14) x %f",jari);
				keliling = 2*phi*jari;
				
				printf("\n\nkeliling lingkaran adalah = %8f",keliling);
				break;
			//jika pilihan bangun datar tidak ada dalam daftar
			default :
				printf("\nbangun datar tidak ditemukan");
		}
	
	}
		//pilihan operasi luas 
		else if(pilihan_kl==2){
			printf("\n+ + + pilih bangun datar yang akan dihitung luasnya + + +\n\n");
			printf("1. persegi");
			printf("\n2. persegi panjang");
			printf("\n3. segitiga");
			printf("\n4. jajargenjang");
			printf("\n5. lingkaran\n");
			
			printf("\npilihan anda :");
			scanf("%i",&pilihan_bd);
			
			//pilihan bangun datar yang akan dihitung luasnya
			switch(pilihan_bd){
				//luas bangun datar persegi
				case 1 :
					printf("\n= = = luas persegi = = =\n\n");
					
					printf("masukan panjang sisi (cm):");
					scanf("%f",&sisi);
				
					printf("\nluas persegi = %f x %f",sisi,sisi);
					luas = sisi*sisi;
				
					printf("\n\nluas persegi adalah: %.8f",luas);
					break;
				//luas bangun datar persegi panjang
				case 2 :
					printf("\n= = = luas persegi panjang = = =\n\n");
				
					printf("masukan panjang persegi panjang	(cm):");
					scanf("%f",&panjang);				
				
					printf("masukan lebar persegi panjang	(cm):");
					scanf("%f",&lebar);
					
					printf("\nluas persegi panjang = %f x %f",panjang,lebar);
					luas = panjang*lebar;
					
					printf("\n\nluas persegi panjang adalah = %8f",luas);
					break;
				//luas bangun datar segitiga
				case 3 :
					printf("\n= = = luas segitiga = = =\n\n");
				
					printf("masukan alas segitiga	(cm):");
					scanf("%f",&alas);				
				
					printf("masukan tinggi segitiga	(cm):");
					scanf("%f",&tinggi);
					
					printf("\nluas segitiga = 1/2 x %f x %f",alas,tinggi);
					luas = alas*tinggi/2;
					
					printf("\n\nluas segitiga adalah = %8f",luas);
					break;
				//luas bangun datar jajargenjang
				case 4 :
					printf("\n= = = luas jajargenjang = = =\n\n");
				
					printf("masukan alas jajargenjang	(cm):");
					scanf("%f",&alas);				
				
					printf("masukan tinggi jajargenjang	(cm):");
					scanf("%f",&tinggi);
					
					printf("\nluas jajargenjang = %f x %f",alas,tinggi);
					luas = alas*tinggi;
					
					printf("\n\nluas jajargenjang adalah = %8f",luas);
					break;
				//luas bangun datar lingkaran
				case 5 :
					printf("\n= = = luas lingkaran = = =\n\n");
				
					printf("masukan jari-jari lingkaran (cm):");
					scanf("%f",&jari);				
					
					printf("\nluas lingkaran = phi(3.14) x %f x %f",jari,jari);
					luas = phi*jari*jari;
					
					printf("\n\nluas lingkaran adalah = %8f",luas);
					break;
				//jika pilihan bangun datar tidak ada dalam daftar
				default :
					printf("\nbangun datar tidak ditemukan");
			}
		}
	//jika pilihan operasi tidak ada dalam daftar
	else{
		printf("\noperasi tidak ditemukan");
	}
}

//menu utama
int main(){

printf("\n\n\n\t\t\t\t\tloading");
sleep(1); 
printf(".");

sleep(1);
printf(".");
 
sleep (1);
printf(".");

system("cls");
//pilihan_op = pilihan operasi
int pilihan_op;

printf("\n\t\t +-+-+-+-+ SELAMAT DATANG DI PROGRAM KALKULATOR +-+-+-+-+ \n");

printf("\nPilih beberapa operasi dibawah ini: ");
printf("\n[1]. Penjumlahan");
printf("\n[2]. Pegurangan");
printf("\n[3]. Perkalian");
printf("\n[4]. Pembagian");
printf("\n[5]. Perpangkatan");
printf("\n[6]. Matriks");
printf("\n[7]. Menghitung bangun datar");

printf("\npilihan: ");
scanf("%i",&pilihan_op);

switch (pilihan_op){
	//operasi penjumlahan
	case 1 :
		penjumlahan();
		break;	
	case 2 :
		pengurangan();
		break;
	case 3 :
		perkalian();
		break;
	case 4 :
		pembagian();
		break;
	case 5 :
		perpangkatan();	
		break;
	case 6 :
		matriks();
		break;
	case 7 :
		bangun_datar();
		break;
	default:
		printf("\npilihan opeerasi tidak ditemukan");
	}
	
	
	return 0;
}



