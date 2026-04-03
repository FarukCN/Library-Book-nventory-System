Book Library Inventory System
Bu program, C dili kullanılarak geliştirilmiş, komut satırı üzerinden çalışan temel bir kütüphane envanter yönetim sistemidir. Kullanıcıların kitap eklemesine, mevcut kitapları listelemesine ve son eklenen kaydı silmesine olanak tanır.

Özellikler
Kitap Ekleme: Kitap numarası, isim, kategori, yazar, basım yılı ve dil bilgilerini sisteme kaydeder.

Envanter Listeleme: Sisteme kayıtlı tüm kitapları düzenli bir liste halinde ekrana basar.

Kayıt Silme: Envanterdeki son eklenen kitabı sistemden kaldırır.

Renkli Arayüz: Terminal çıktılarını daha okunabilir kılmak için ANSI renk kodlarını kullanır.

Veri Yapısı
Sistem, kitap bilgilerini organize etmek için struct (yapı) kullanır. Veriler struct Library tipindeki bir dizide saklanır:

C
struct Library {
    int BookNUM;           // Kitap ID/Numarası
    char BookName[40];     // Kitap Adı
    char BookType[40];     // Kategori
    char BookWritten[40];  // Yazar
    int BookYear;          // Basım Yılı
    char BookLanguage[20]; // Dil
};
Kullanım Talimatları
Derleme: Programı derlemek için bir C derleyicisi (GCC gibi) kullanın.

Bash
gcc library_system.c -o library_system
Çalıştırma:

Bash
./library_system
İşlem Seçimi: Ana menüdeki numaraları (0-3) kullanarak yapmak istediğiniz işlemi seçin.

Teknik Notlar ve Sınırlamalar
Bellek Yönetimi: Program şu anda verileri RAM üzerinde (struct dizisi) tutmaktadır. Program kapatıldığında veriler silinir (Dosya kayıt sistemi henüz eklenmemiştir).

Kapasite: Sistem en fazla 100 kitap kaydetmek üzere yapılandırılmıştır.

Giriş Formatı: Kitap detaylarını girerken kelimeler arasında boşluk bırakılmalıdır. String (metin) girişleri içinde boşluk karakteri kullanımı mevcut scanf yapısı nedeniyle beklenmedik sonuçlar doğurabilir.

Silme Mantığı: DeleteBook fonksiyonu mevcut haliyle bookCount değerini bir azaltarak son kaydı erişilemez kılar.

Geliştirme Planı
Dosya okuma/yazma (txt veya bin) desteği ile kalıcı veri depolama.

ID numarasına göre spesifik kitap silme özelliği.

Kitap arama (isime veya yazara göre) fonksiyonu.
