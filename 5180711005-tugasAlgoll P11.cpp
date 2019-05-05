#include <iostream>

using namespace ::std;

int main (){
int harga,jumlah,total,total_bayar,uang_bayar,kembali;
string pembeli,noseri;
char member;
double diskon;
char kode,*nama_barang,jawab;

awal:
        cout<<"masukan nama anda\t\t\t:";cin>>pembeli;
        cout<<"APAKAH ANDA MEMBER [y/t]\t\t:";cin>>member;
    if (member=='y'||member=='y'){
        cout<<"masukan nomer identitas member anda\t:";cin>>noseri;
        cout<<"\n--------------------------------------------";
    if (noseri=="A001"){
        cout<<"\nnama             :bayu"<<endl;
        cout<<"no.identitas     :A001"<<endl;
        cout<<"anda mendapat diskon 5%"<<endl;
}
    else if (noseri=="A002"){
        cout<<"\nnama             :irvan"<<endl;
        cout<<"no.identitas     :A002"<<endl;
         cout<<"anda mendapat diskon 5%"<<endl;
}
 else if (noseri=="A003"){
        cout<<"\nnama             :susiati"<<endl;
        cout<<"no.identitas     :A003"<<endl;
        cout<<"anda mendapat diskon 5%"<<endl;

}
    else if (noseri=="A007"){
        cout<<"\nnama             :diana"<<endl;
        cout<<"no.identitas     :A007"<<endl;
}
    else if (noseri=="A008"){
        cout<<"\nnama             :roni"<<endl;
        cout<<"no.identitas     :A008"<<endl;
        cout<<"anda mendapat diskon 5%"<<endl;
}
}

        cout<<"---------------------------------------"<<endl;
        cout<<"NAMA DAN HARGA BARANG YANG ADA DI TOKO"<<endl;
        cout<<"1. beras          :Rp. 12.000,-"<<endl;
        cout<<"2. telor          :Rp. 25.000,-"<<endl;
        cout<<"3. minyak goreng  :Rp. 22.000,-"<<endl;
        cout<<"---------------------------------------"<<endl;
cout<<"masukan kode barang [A/B/C] :";cin>>kode;
cout<<"=============================================="<<endl;
if(kode=='A'||kode=='a'){
 nama_barang="beras";
 harga=12000;

}
else
if(kode=='B'||kode=='b'){
 nama_barang="telor";
 harga=25000;
}
else
if(kode=='C'||kode=='c'){
 nama_barang="minyak goreng";
 harga=22000;
}
else{
    cout<<"============================================="<<endl;
    cout<<"maaf anda salah memasukan kode"<<endl;
}
    cout<<"masukan jumlah beli :";cin>>jumlah;
total=harga*jumlah;
diskon=total*5/100;
total_bayar=total-diskon;
    cout<<"total bayar         :"<<total<<endl;
    cout<<"masukan uang bayar :";cin>>uang_bayar;
kembali=uang_bayar-total_bayar;
    cout<<"=========================================="<<endl;
    cout<<"nama pembeli\t          :"<<pembeli<<endl;
    cout<<"no identitas member\t  :"<<noseri<<endl;
    cout<<"kode barang\t          :"<<kode<<endl;
    cout<<"nama barang\t          :"<<nama_barang<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"harga per 1 barang\t   :"<<harga<<endl;
    cout<<"anda membli \t\t:"<<jumlah;cout<<" barang"<<endl;
    cout<<"uang yang harus di bayar adalah:"<<total_bayar;cout<<endl;
    cout<<"uang yang di bayar:"<<total;cout<<endl;
    cout<<"kembali\t\t\t:"<<kembali;cout<<endl;
    cout<<"=========================================="<<endl;
    cout<<"apakah anda ingin mengulangnya lagi [y/t]:";cin>>jawab;
if(jawab=='Y'||jawab=='y')
goto awal;
}

