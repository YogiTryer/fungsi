# FUNGSI

Fungsi adalah  bagian atau blok program yang berisi satu tugas spesifik. Ketika dipanggil, fungsi ada yang menghasilkan atau mengembalikan nilai ada juga yang tidak.
Nilaiyag dihasilkan oleh fungsi disebut dengan istilah nilai balik (return value). Dalam beberapa bahasa pemrograman lain, fungsi dengan nilai balik disebut dengan fungsi dan fungsi tanpa nilai balik disebut prosedur. Fungsi hanya perlu didefinisikan satu kali, tapi dapat digunakan atau dipanggil berkali-kali.

# Mendefinisikan Fungsi
    Bentuk umum fungsi yang mengembalikan nilai adalah seperti dibawah ini.

    tipe namafungsi(tipe parameter1, tipe parameter2, ...){
        # badan fungsi
        return nilai;
    }

    Daftar parameter dari suatu fungsi bersifat opsional tetapi sebagian besar fungsi pada umumnya memiliki satu paramter atau lebih.

    * contoh program fungsi dengan nilai balik

        double kali (double a , double b){
            double hasil = a * b;
            return hasil;
        }
     /* fungsi kali diatas memiliki dua parameter yang bertipe double (a dan b), dan akan menghasilkan nilai dengan tipe double . Variable hasil yang dideklarasikan di dalam fungsi disebut dengan lokal variable. Artinya, variable tersebut hanya di akan berlaku di dalam fungsi tersebut. Fungsi bernilai blik  memiliki perintah return yang akan diikuti dnegan nilai yang akan dikembalikan. Fungsi di atas juga dapat ditulis sebagai berikut:

     double kali (double a , double b){
            return a * b;
        } 

    */


    * contoh  program fungsi tanpa nilai balik

        #Bentuk Umum
        void namafungsi(tipe parameter1, tipe parameter2,..){
            #Badan Fungsi
        }

        #contoh
        void tulis(std::string a){
            std::cout<<a;
        }
#Memanggil fungsi

    Cara memanggil fungsi adalah seperti kodingan dibawah ini.

        double kali (double a, double b){
	             return a *b;
        }

            void tulis(double a){
            std::cout<<a;
        }



int main(int argc, char** argv) {
	
	
	double hasil;
	
	hasil = kali(4.0,2.0);
	
	tulis (hasil);
	
	
	return 0;
}




    

