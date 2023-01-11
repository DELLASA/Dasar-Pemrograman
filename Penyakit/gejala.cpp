//judul : Simulasi deteksi penyakit dengan 3 gejala string (minimal 5 penyakit)
//memo : Della Sabrina
// 6 Oktober 2022
//Dasar Pemrograman


//kamus
#include<iostream>
#include<string>
using namespace std;

    int a,b,c,d,e;
    string coba;
    string pilih;
    string ulang;
    string kepala;
    char sakitkepala;


//diskripsi
int main()
{
    do
    {
        cout<<           "Macam macam Penyakit yang mungkin dialami"<<endl;
        cout<< "==========================================================="<<endl;
        cout<< "Pilih Gejala yang sedang anda alami : "<<endl;
        cout<< "1. Nyeri pada ulu hati"<<endl;
        cout<< "2. Pusing, lelah, lesu, mual, kesulitan berkonsentrasi"<<endl;
        cout<< "3. Demam Tinggi, keringat berlebih"<<endl;
        cout<< "4. Hidung tersumbat, pusing"<<endl;
        cout<< "5. Kulit dan mata tampak menguning"<<endl;
        cout<< "6. Sakit di bagian dada"<<endl;


        cout<< " "<<endl;
        cout<< "Masukkan gejala penyakit anda dengan menuliskannya sama dengan yang diatas : "<<endl;
        cout<< " "<<endl;

        getline(cin,pilih);

         if(pilih=="Nyeri pada ulu hati")
        {
            cout<< "Jika terasa nyeri pada ulu hati"<<" maka anda mengalami penyakit:"<<endl;
            cout<< "1. Maag"<<endl;
            cout<< "\n"<<endl;
            cout<< "Cara agar maag anda cepat sembut adalah dengan cara dibawah ini: "<<endl;
            cout<< "1. Batasi Minuman Bergula"<<endl;
            cout<< "2. Makan lebih banyak protein sehat"<<endl;
            cout<< "3. Tambah Asupan Probiotik"<<endl;
            cout<< " "<<endl;

        }
        else    if(pilih=="Pusing, lelah, lesu, mual, kesulitan berkonsentrasi")
        {
            cout<< "Jika anda mengalami Pusing, lelah, lesu, mual, kesulitan berkonsentrasi, "<<"itu tandanya anda mengalami penyakit:"<<endl;
            cout<< "1. Darah Rendah"<<endl;
            cout<< "\n"<<endl;
            cout<< "Cara yang dapat anda lakukan agar Darah Rendah tidak kambuh lagi adalah dengan:"<<endl;
            cout<< "1. Membatasi minum alkohol dan perbanyak minum air putih"<<endl;
            cout<< "2. Ubah Pola Makan"<<endl;
            cout<< "3. Tidak Berdiri Terlalu Lama"<<endl;
            cout<< " "<<endl;


        }
        else    if( pilih=="sakitkepala")
        {
            cout<< "Apakah anda merasa sakit yang sangat hebat di kepala ? (y/t)" <<endl;
            cin >> sakitkepala;
                    switch(toupper(sakitkepala))
                    {
                        case 'Y':
                        {
                            cout<< "Anda mengalami Sakit Kepala Cluster"<<endl;
                            cout<< "\n"<<endl;
                            cout<< "Cara Mengobati:"<<endl;
                            cout<< "1. Terapi Oksigen murni yang dihirup selama 15 menit"<<endl;
                            cout<< "2. Mengkonsumsi Obat Sumatriptan"<<endl;
                            cout<< ""<<endl;
                            break;
                        }
                        case 'T':
                        {
                            cout<< "Anda mungkin mengalami sakit kepala biasa"<<endl;
                            cout<< " "<<endl;
                            break;
                        }

                    }


        }
        else    if(pilih=="Hidung tersumbat, pusing ")
        {
            cout<< "Jika hidung tersumbat, pusing"<<" mungkin anda sedang terkena penyakit:"<<endl;
            cout<< "flu"<<endl;
            cout<< "\n"<<endl;
            cout<< "Berikut cara yang dapat anda lakukan agar terhindar dari flu:"<<endl;
            cout<< "1. Rutin berolahraga"<<endl;
            cout<< "2. Konsumsi makanan bergizi"<<endl;
            cout<< "3. Tidur yang cukup"<<endl;
            cout<< "4. Lakukan Vaksinasi Flu"<<endl;

        }
        else    if(pilih=="Kulit dan mata tampak menguning")
        {
            cout<< "Penyakit yang anda derita adalah: "<<endl;
            cout<< "Penyakit Liver atau Hati"<<endl;
            cout<< "\n"<<endl;
            cout<< "Pengobatan yang dapat lakukan adalah dengan cara: "<<endl;
            cout<< "1. Menurunnkan berat badan bila obesitas"<<endl;
            cout<< "2. Berhenti minum alkohol"<<endl;
            cout<< "3. Meminum rutin Jamu Temulawak dan Sambiloto"<<endl;
        }
        else    if(pilih=="Sakit di bagian dada")
        {
                cout<<"Bagian mana yang merasakan nyeri ? (kanan/kiri)"<<endl;
                getline(cin,kepala);
                if(kepala=="kanan")
                {
                    cout<< "bisa saja berasal dari stres ekstrem atau gangguan kecemasan "<<endl;
                    cout<< " terkadang nyeri dada bagian kanan muncul karena otot dada yang menegang"<<endl;
                    cout<< " "<<endl;
                    cout<< "Cara yang dapat dilakukan untuk pencegahan: "<<endl;
                    cout<< "1. Relax kan pikiran"<<endl;
                    cout<< "2. Jangan terlalu stres"<<endl;
                }
                else    if(kepala=="kiri")
                {
                    cout<< "nyeri dada bagian kiri bisa disebabkan oleh : "<<endl;
                    cout<< "1. Serangan jantung"<<endl;
                    cout<< "2. Gangguan Pencernaan"<<endl;
                    cout<< "3. Pneumonia"<<endl;
                    cout<< " "<<endl;
                    cout<< "Cara untuk mengatasinya antara lain:"<<endl;
                    cout<< "1. Meminum Obat yang disarankan oleh dokter"<<endl;
                }
                    else
                        {
                            cout<<"CERMATI!"<<endl;
                            cout<<"_________________________________________________________"<<endl;
                        }





        }
        cout<<"Apakah anda merasa masih mempunyai gejala penyakit? (y/t)"<<endl;
        getline(cin,ulang);
        cout<<"==================================================================="<<endl;
    }

        while(ulang!="t") ;

        cout<<"~~SEMOGA MEMBANTU~~"<<endl;

    return (0);
}
