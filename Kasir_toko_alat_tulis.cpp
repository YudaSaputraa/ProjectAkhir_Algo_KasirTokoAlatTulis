#include <iostream>
#include <string.h>
using namespace std;

void paket_menulis(){
	int jmlh, total_hrg, bayar, hasil_byr;
	cout<<"Paket Menulis\n";
	cout<<"Rincian :\n 1 Pensil\n 1 Pulpen\n 1 Penghapus\n 1 Buku Tulis\n\n";
	cout<<"Khusus pembelian Paket Menulis mendapat potongan harga Rp2000,00\n";
	cout<<"Total Harga : Rp15.000,00\n";
	cout<<"Masukkan Jumlah Pembelian :";
		cin>>jmlh;
	total_hrg = jmlh * 15000 - 2000;
	cout<<"Total Harga"<<total_hrg<<endl;
	cout<<"Silahkan Bayar\t: ";
	cin>>bayar;
	system("cls");
	hasil_byr = bayar - total_hrg;
	if(bayar > total_hrg){
		cout<<"Kembalian: "<<hasil_byr<<endl;
		 }else if(bayar == total_hrg){
			cout<<"Uang Anda Pas"<<endl;
			 }else if(bayar < total_hrg){
				cout<<"Uang Anda Kurang"<<endl;
							}
	
	}

void paket_menggambar(){
	
	int jmlh, total_hrg, bayar, hasil_byr;
	cout<<"Paket Menggambar\n";
	cout<<"Rincian :\n 1 Crayon\n 1 Buku Gambar\n 1 Penggaris 30cm\n\n";
	cout<<"Khusus pembelian Paket Menulis mendapat potongan harga Rp4000,00\n";
	cout<<"Total Harga : Rp45.000,00\n";
	cout<<"Masukkan Jumlah Pembelian :";
		cin>>jmlh;
	total_hrg = jmlh * 45000 - 4000;
	cout<<"Total Harga"<<total_hrg<<endl;
	cout<<"Silahkan Bayar\t: ";
	cin>>bayar;
	system("cls");
	hasil_byr = bayar - total_hrg;
	if(bayar > total_hrg){
		cout<<"Kembalian: "<<hasil_byr<<endl;
		 }else if(bayar == total_hrg){
			cout<<"Uang Anda Pas"<<endl;
			 }else if(bayar < total_hrg){
				cout<<"Uang Anda Kurang"<<endl;
							}
	}
int main()
{
	int menu, jmlh, total_hrg, bayar, hasil_byr;
	char nama[20], back, choose, tampil_produk;
	string username, password, username_log, password_log, pilih_brg, nama_brg, no_tlp;
do{
	cout<<" ================================================"<<endl;
	cout<<"|               TOKO ALAT TULIS                  |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<"selamat datang..."<<endl;
	cout<<"Jl. Bhayangkara, No.12, Yogyakarta"<<endl;
	cout<<"Telp/fax (0362) 140219"<<endl<<endl;

	cout<<"Daftar Menu:"<<endl;
	cout<<"1. Buat akun/Register"<<endl;
	cout<<"2. Login Kasir & Tampilkan Produk"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Pilih Menu: ";
	cin>>menu;
	system("CLS");

	switch(menu){
	  case 1 :
		  cout<<"+======================================+\n";
		  cout<<"+           BUAT AKUN KASIR            +\n";
		  cout<<"+--------------------------------------+\n";
		 
		  cout<<"Masukkan Nama\t\t:";
			cin.ignore();
			cin.getline(nama, 20);
		  cout<<"Masukkan Nomor HP\t:";
		     cin>>no_tlp;
		  cout<<"Buat Username\t\t:";
			cin>>username;
		  cout<<"Buat Password\t\t:";
			cin>>password;
		  cout<<"Akun Berhasil Dibuat\n";
	  break;
	  case 2:
		cout<<"+===================================+\n";
		cout<<"+            LOGIN KASIR            +\n";
		cout<<"+-----------------------------------+\n";
		
		  cout<<"Masukkan Username\t:";
			cin>>username_log;
		  cout<<"Masukkan Password\t:";
			cin>>password_log;
			if(username_log == username && password_log == password){
				cout<<"Login Berhasil\n";
				cout<<"Tampilkan Produk? (Y/N)";
				cin>>tampil_produk;
				system("cls");
				if(tampil_produk == 'Y' || tampil_produk == 'y'){
					do{
			cout<<"User/Pengguna :"<<username<<endl;
			switch(no_tlp[2]){
				case '1' : cout<<no_tlp<<" [XL]"<<endl;
				break;
				case '2' : cout<<no_tlp<<" [Telkomsel]"<<endl;
				break;
				case '3' : cout<<no_tlp<<" [Axis]"<<endl;
				break;
				case '5' : cout<<no_tlp<<" [By.u]"<<endl;
				break;
				case '7' : cout<<no_tlp<<" [XL]"<<endl;
				break;
				case '8' : cout<<no_tlp<<" [Smartfren]"<<endl;
				break;
				default : cout<<"Tidak Terdaftar"<<endl;
				
				}
			cout<<"+======================================================================+\n";
			cout<<"+                               PRODUK                                 +\n";
			cout<<"+-----+--------------------+-------------------------------------------+"<<endl;
			cout<<"+  No |    Kode Barang     |         Barang       |     Harga Barang   +"<<endl;
			cout<<"+-----+--------------------+-------------------------------------------+"<<endl;
			cout<<"|  1. | A0120              | Pensil               | Rp2.000,00         |"<<endl;
			cout<<"|  2. | A0130              | Pulpen               | Rp3.000,00         |"<<endl;
			cout<<"|  3. | A0201              | Penghapus            | Rp3.000,00         |"<<endl;
			cout<<"|  4. | A0202              | Crayon               | Rp35.000,00        |"<<endl;
			cout<<"|  5. | A0203              | Kotak Pensil         | Rp15.000,00        |"<<endl;
			cout<<"|  6. | A0204              | Spidol               | Rp6.000,00         |"<<endl;
			cout<<"|  7. | B1001              | Buku Tulis           | Rp4.000,00         |"<<endl;
			cout<<"|  8. | B1002              | Buku Gambar          | Rp7.000,00         |"<<endl;
			cout<<"|  9. | C2002              | Penggaris 30cm       | Rp3.000,00         |"<<endl;
			cout<<"|  10.| C2003              | Penggaris 1m         | Rp25.000,00        |"<<endl;
			cout<<"|  11.| D0401              | Paket Menulis        | Rp15.000,00        |"<<endl;
			cout<<"|  12.| D0402              | Paket Menggambar     | Rp45.000,00        |"<<endl;
			cout<<"+-----+--------------------+----------------------+--------------------+"<<endl;
			
			
			cout<<"Pilih Barang (kode barang/nomor barang)\t: ";
			cin>>pilih_brg;
			if(pilih_brg == "A0120" || pilih_brg == "1"){
				cout<<"Kode Barang\t: A0120\n";
				cout<<"Nama Barang\t: Pensil\n";
				nama_brg = "Pensil";
				cout<<"Harga Barang\t: Rp2.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 2000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
							
				}else if(pilih_brg == "A0130" || pilih_brg == "2"){
				cout<<"Kode Barang\t: A0130\n";
				cout<<"Nama Barang\t: Pulpen\n";
				nama_brg = "pulpen";
				cout<<"Harga Barang\t: Rp3.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 3000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
				}else if(pilih_brg == "A0201" || pilih_brg == "3"){
				cout<<"Kode Barang\t: A00201\n";
				cout<<"Nama Barang\t: Penghapus\n";
				nama_brg = "Penghapus";
				cout<<"Harga Barang\t: Rp3.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 3000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
				}else if(pilih_brg == "A0202" || pilih_brg == "4"){
				cout<<"Kode Barang\t: A0202\n";
				cout<<"Nama Barang\t: Crayon\n";
				nama_brg = "Crayon";
				cout<<"Harga Barang\t: Rp35.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 35000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
				}else if(pilih_brg == "A0203" || pilih_brg == "5"){
				cout<<"Kode Barang\t: A0203\n";
				cout<<"Nama Barang\t: Kotak Pensil\n";
				nama_brg = "Kotak Pensil";
				cout<<"Harga Barang\t: Rp15.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 15000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
				}else if(pilih_brg == "A0204" || pilih_brg == "6"){
				cout<<"Kode Barang\t: A0204\n";
				cout<<"Nama Barang\t: Spidol\n";
				nama_brg = "Spidol";
				cout<<"Harga Barang\t: Rp6.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 6000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
				
				}else if(pilih_brg == "B1001" || pilih_brg == "7"){
				cout<<"Kode Barang\t: B1001\n";
				cout<<"Nama Barang\t: Buku Tulis\n";
				nama_brg = "Buku Tulis";
				cout<<"Harga Barang\t: Rp4.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 4000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
				
				}else if(pilih_brg == "B1002" || pilih_brg == "8"){
				cout<<"Kode Barang\t: B1002\n";
				cout<<"Nama Barang\t: Buku Gambar\n";
				nama_brg = "Buku Gambar";
				cout<<"Harga Barang\t: Rp7.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 7000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
				}else if(pilih_brg == "C2002" || pilih_brg == "9"){
				cout<<"Kode Barang\t: C2002\n";
				cout<<"Nama Barang\t: Penggaris 30cm\n";
				nama_brg = "Penggaris 30cm";
				cout<<"Harga Barang\t: Rp5.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 5000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
				}else if(pilih_brg == "C2003" || pilih_brg == "10"){
				cout<<"Kode Barang\t: C2003\n";
				cout<<"Nama Barang\t: Penggaris 1m\n";
				nama_brg = "Penggaris 1m";
				cout<<"Harga Barang\t: Rp25.000,00\n\n";
				cout<<"Masukkan Jumlah Pembelian:";
					cin>>jmlh;
				total_hrg = jmlh * 25000;
				cout<<"Total Harga "<<total_hrg<<endl;
				cout<<"Silahkan Bayar\t:";
				cin>>bayar;
				system("cls");
				hasil_byr = bayar - total_hrg;
					
				}else if(pilih_brg == "D0401" || pilih_brg == "11"){
					paket_menulis();
					nama_brg = "Paket Menulis";
					}else if(pilih_brg == "D0402" || pilih_brg == "12"){
					paket_menggambar();
					nama_brg = "Paket Menggambar";
					}
					if(bayar > total_hrg){
							cout<<"+==========================================+"<<endl;
							cout<<"+              NOTA PEMBELIAN              +"<<endl;
							cout<<"+------------------------------------------+"<<endl;
							cout<<"|Terimakasih...                            |"<<endl;
							cout<<"|Jl. Bhayangkara, No.12, Yogyakarta        | "<<endl;
							cout<<"|Telp/fax (0362) 140219                    |"<<endl;
							cout<<"|                                          |"<<endl;
							cout<<"|..........................................|"<<endl;
							cout<<"|"<<nama_brg<<"                   Qty "<<jmlh<<endl;
							cout<<"|                                          "<<endl;
							cout<<"|Total Harga "<<total_hrg<<"               "<<endl;
							cout<<"|Uang Yang Dibayarkan "<<bayar<<"          "<<endl;
							cout<<"|Kembalian: "<<hasil_byr<<"                "<<endl;
							cout<<"+------------------------------------------+"<<endl;

						}else if(bayar == total_hrg){
							cout<<"+==========================================+"<<endl;
							cout<<"+              NOTA PEMBELIAN              +"<<endl;
							cout<<"+------------------------------------------+"<<endl;
							cout<<"|Terimakasih...                            |"<<endl;
							cout<<"|Jl. Bhayangkara, No.12, Yogyakarta        | "<<endl;
							cout<<"|Telp/fax (0362) 140219                    |"<<endl;
							cout<<"|                                          |"<<endl;
							cout<<"|..........................................|"<<endl;
							cout<<"|"<<nama_brg<<"                   Qty "<<jmlh<<endl;
							cout<<"|                                          "<<endl;
							cout<<"|Total Harga "<<total_hrg<<"               "<<endl;
							cout<<"|Uang Yang Dibayarkan "<<bayar<<"          "<<endl;
							cout<<"|Kembalian: 0                "<<endl;
							cout<<"Uang Anda Pas"<<endl;
							cout<<"+------------------------------------------+"<<endl;
							
							}else if(bayar < total_hrg){
								cout<<"Uang Anda Kurang"<<endl;
							}


		 cout<<endl;
		 cout<<"Ulangi Transaksi? (Y/N): ";
		 cin>>choose;
		 system ("cls");
		}while (choose == 'Y' || choose == 'y');
					
					}
				}else{
					cout<<"Login Gagal\n";
					}
		break;
		case 3 :
		cout<<"Anda Telah Keluar"<<endl;
		break;

	  default : cout<<"Menu Tidak Terdaftar"<<endl;
	  break;

}

cout<<endl;
cout<<"Back to Menu? (Y/N): ";
cin>>back;
system("cls");
}while(back == 'Y' || back == 'y');


}
