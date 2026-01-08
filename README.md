Uzay Simülasyonu – Algoritmalar ve Programlama Dönem Projesi

Bu proje,Algoritmalar ve Programlama dersi kapsamında C dili kullanılarak geliştirilmiş, konsol tabanlı bir uzay simülasyonu uygulamasıdır. Proje bireysel olarak hazırlanmıştır ve Güneş Sistemi’ndeki gezegenlerin yerçekimi ivmeleri dikkate alınarak çeşitli fizik deneylerinin simülasyonunu yapmaktadır.

Proje Amacı:

-C dilinde modüler programlama mantığını kavramak,
-Diziler ve pointer kullanımı konusunda pratik kazanmak,
-Fiziksel formüllerin yazılım ortamında nasıl simüle edilebileceğini göstermek,
-Kullanıcı etkileşimli, hatalara dayanıklı bir konsol uygulaması geliştirmektir.

*Programın Genel Çalışma Mantığı

Program çalıştırıldığında aşağıdaki adımlar izlenir:

1. Kullanıcıdan isim bilgisi alınır.
2. Deney menüsü ekrana yazdırılır.
3. Kullanıcı bir deney seçer.
4. Seçilen deney için gerekli metrik değerler kullanıcıdan alınır.
5. Hesaplamalar, Güneş Sistemi’ndeki tüm gezegenlerin yerçekimi ivmeleri için ayrı ayrı yapılır.
6. Sonuçlar birimleriyle birlikte konsola yazdırılır.
7. Kullanıcı yeni bir deney seçebilir veya -1 girerek programdan çıkabilir.

*Uygulamada Yer Alan Deneyler

Programda toplam 9 adet fizik deneyi bulunmaktadır:

1. Serbest Düşme Deneyi
2. Yukarı Atış Deneyi
3. Ağırlık Deneyi
4. Kütleçekimsel Potansiyel Enerji Deneyi
5. Hidrostatik Basınç Deneyi
6. Arşimet Kaldırma Kuvveti Deneyi
7. Basit Sarkaç Periyodu Deneyi
8. Sabit İp Gerilmesi Deneyi
9. Asansör Deneyi

Her deney, ayrı bir fonksiyon içerisinde hesaplanmakta ve sonuçlar tüm gezegenler için listelenmektedir.

*Teknik Özellikler ve Kurallar

- Tüm program C dili ile yazılmıştır.
- Gezegenlerin yerçekimi ivmeleri bir **dizi** içerisinde tutulmaktadır.
- Dizilere yalnızca **pointer mantığı** ile erişilmektedir.
- Her deney ayrı bir fonksiyon olarak tanımlanmıştır.
- Kütle, uzunluk, süre ve hacim gibi negatif olamayan değerler **ternary operatörü** kullanılarak mutlak değere çevrilmiştir.
- Menü sistemi döngüsel yapıdadır ve kullanıcı tekrar tekrar deney seçebilir.
- Çıktılar birimleriyle birlikte kullanıcıya sunulmaktadır.


*Proje Dosya Yapısı

```
Uzay-Simulasyonu/
│
├── main.c          → Programın kaynak kodu
├── README.md       → Proje tanıtım dosyası
├── screenshots/    → Konsol çıktıları ve kod ekran görüntüleri
│   ├── sekil1.png
│   ├── sekil2.png
│   └── ...
```
*Programın Çalıştırılması

1. Bir C derleyicisi kullanınız.
2. main.c dosyasını derleyiniz.
3. Programı çalıştırınız.
4. Konsolda istenen bilgileri girerek deneyleri simüle ediniz.

Ekran Görüntüleri

Projenin çalışma aşamalarına ait konsol çıktıları ve kod ekran görüntüleri screenshots/ klasörü içerisinde yer almaktadır. Bu görseller, raporda ilgili bölümlerde Şekil 1, Şekil 2 şeklinde referans verilerek kullanılmıştır.

*Geliştirici Bilgileri

- Ad Soyad: Efe Yaman
- Öğrenci No: 24360859026
- Bölüm: Bilgisayar Mühendisliği
- Ders: Algoritmalar ve Programlama

*Kaynaklar

* Serway, R. A., & Jewett, J. W. *Physics for Scientists and Engineers*
* Young, H. D., & Freedman, R. A. *University Physics with Modern Physics*
* NASA – Planetary Fact Sheet

Not: Bu proje eğitim amaçlıdır ve bireysel olarak hazırlanmıştır.
