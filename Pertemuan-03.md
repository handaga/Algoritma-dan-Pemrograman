## Pedoman Penyusunan Algoritma
Bab ini menjelaskan mengenai ketentuan yang digunakan untuk menyusun Algoritma dan Pseudocode.

* Dasar Penyusunan Algoritma
* Pedoman Penyusunan Pseudocode

### Dasar Penyusunan Algoritma 

Sampai saat ini belum ada aturan baku tentang bagaiaman menyusun sebuah algoritma. Pada prinsipnya setiap orang memiliki kebebasan untuk menyusun algoritma sesuai dengan cara pikirnya. Untuk mewujudkan Algoritma, agar dapat dipahami oleh orang lain, maka orang perlu menulis algoritma, dengan menggunakan diagram alir ataupun pseudocode.

Namun demikian terdapat beberapa hal yang perlu diperhatikan dalam menyusun algoritma. Terdapat LIMA CIRI penting yang harus dimiliki oleh sebuah algoritma, yaitu FINITENESS, DEFINITENESS, INPUT, OUPUT, dan EFFECTIVITY (Knuth, 1973; Horowitz, 1999).

1. **Finiteness** (memiliki akhir) : menyatakan bahwa setelah melakukan proses maka apapun kondisinya suatu algoritma harus memiliki akhir.
2. **Definiteness** (setiap perintah harus pasti) : menyatakan bahwa setiap langkah harus dinyatakan dengan jelas (tidak mengandung lebih dari satu satu maksud)
3. **Input**: Setiap algoritma boleh memiliki satu input, banyak input atau tidak memiliki input.
4. **Output**: Setiap algoritma harus memiliki minimum satu output, algoritma boleh memiliki banyak output. 
5. **Effective** (efektif): Algoritma yang baik adalah algoritma yang beklerja secara efektif, yaitu semua operasi yang dilakukan oleh algoritma tersebut bersifat sederhana dan dapat diselesaikan dengan waktu yang terbatas.

### Pedoman Penyusunan Pseudocode

Penyusunan algoritma dengan menggunakan pseudocode juga tidak ada standar yang baku, pedoman berikut ini adalah merupakan pedoman penyusunan algoritma dengan menggunakan pseudocode yang umum digunakan.

1. Notasi  `<-` digunakan untuk memberi nilai pada sebuah variabel, contoh: `x <- 0` pseudocode tersebut untuk menyatakan bahwa variabel `x` akan diberi nilai `0` (nol).
2. Setiap pernyataan atau perintah yang dapat berdiri sendiri ditulis dalam baris tersendiri. Contoh: `x <- 1 + 2` merupakan pernyataan untuk menugaskan atau mengisi hasil penjumlahan bilangan `1` dan `2` ke dalam variabel `x`.
3. Setiap variabel  skalar ditulis dengan menggunakan huruf kecil. Variabel skalar adalah sebuah nama atau simbol yang digunakan untuk menyimpan SEBUAH data yang dapat berubah nilainya. contoh variabel x, dapat digunakan untuk menyimpan SEBUAH angka berapapun nilainya. Variabel larik (deret) ditulis dengan huruf BESAR. Variabel larik dapat digunakan untuk meyimpan BEBERAPA data yang sejenis. Contoh variabel `A <- [1,4,5]`, variabel `**A**` berisi TIGA buah angka yaitu 1, 4, dan 5. Angka 1 merupakan elemen pertama dari variabel `A`, angka 4 merupakan elemen ke 2, dan angka 5 meruipakan elemen ke 3 dari variabel `A`.
4. Notasi seperti  `A[i]` menyatakan elemen ke i pada variabel larik `A`.  Nilai terkecil dari indek i adalah 0 (NOL), sehingga `A[0]` merupakan elemen pertama dari sebuah variabel larik. Untuk variabel larik dimensi-dua, ditulis dengan notasi  `A[i,j]`, dengan i adalah indek untuk baris, dan j adalah indek untuk kolom.  Contoh : `A[0,1]` untuk membaca atau menulis variabel larik `A` pada baris ke-0, kolom ke-1. 
5. Vaiabel majemuk yaitu variabel yang dapat digunakan untuk menyimpan data tipe majemuk, satu variabel dapat menyimpan beberpa jenis data sekaligus. Notasi untuk variabel majemuk adalah sebagai berikut: 

		mahasiswa = KUMPULAN
			nama
			umur
			nim
		AKHIR-KUMPULAN
	
     sedangkan untuk membaca atau mengisi varaiabel majemuk dapat digunakan notasi sebagai berikut:   `mahasiswa->nama` dst.

6. Indentasi atau penjorokan ke kanan digunakan untuk menuliskan pernyataan-pernyataan yang berada dalam suatu struktur blok yang sama. contoh:

		JIKA  x>1 MAKA
			pernyataan-1
			pernyataan-2
			pernyataan-3
		AKHIR-JIKA

atau

		if (x>1) then 
			pernyataan-1
			pernyataan-2
			pernyataan-3
		end-if

7. Simbol  `//`  digunakan untuk menyatakan komentar atau keterangan mengenai perintah, contoh:

		//A adalah larik dan n adalah jumlah elemen dalam larik
		bil  <- bil + 1 // isi variabel bil ditambah dengan 1
	
     untuk menulis komentar lebih dari dari satu baris digunakan simbol  

		/* 
			di sini letak komentar baris 1\
			baris 2    
			dst 
		*/






