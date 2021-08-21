#include <iostream>

using namespace std;

int main(){
	struct bebas{
		int tipe_rumah;
		int jumlah_kamar;
	};
		
	bebas rumah;
	rumah.tipe_rumah;
	rumah.jumlah_kamar;
		
	cout<<"Tipe Rumah : "<<&rumah.tipe_rumah<<endl;
	cout<<"Jumlah Kamar : "<<&rumah.jumlah_kamar;
}
