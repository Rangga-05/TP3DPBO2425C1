//Class Penyewa turunan dari Orang untuk simpan data tambahan atribut
public class Penyewa extends Orang {
    private String kodeSewa;
    private String tanggalMasuk;
    private String jatuhTempo;
    private String statusPembayaran;
    private Kosan kosan;
    private Kamar kamar;

    //Constructor kosong
    public Penyewa() {
        super();
        this.kodeSewa = "";
        this.tanggalMasuk = "";
        this.jatuhTempo = "";
        this.statusPembayaran = "";
        this.kosan = null;
        this.kamar = null;
    }

    //Constructor lengkap
    public Penyewa(long noKtp, String nama, String alamat, String noTelp, String kodeSewa, Kosan kosan, Kamar kamar, String tanggalMasuk, String jatuhTempo, String statusPembayaran) {
        super(noKtp, nama, alamat, noTelp);
        this.kodeSewa = kodeSewa;
        this.kosan = kosan;
        this.kamar = kamar;
        this.tanggalMasuk = tanggalMasuk;
        this.jatuhTempo = jatuhTempo;
        this.statusPembayaran = statusPembayaran;
    }

    //Getter & Setter khusus atribut Penyewa
    public String getKodeSewa(){
        return kodeSewa;
    }
    public void setKodeSewa(String kodeSewa){
        this.kodeSewa = kodeSewa;
    }

    public Kosan getKosan(){
        return kosan;
    }
    public void setKosan(Kosan kosan){
        this.kosan = kosan;
    }

    public Kamar getKamar(){
        return kamar;
    }
    public void setKamar(Kamar kamar){
        this.kamar = kamar;
    }

    public String getTanggalMasuk(){
        return tanggalMasuk;
    }
    public void setTanggalMasuk(String tanggalMasuk){
        this.tanggalMasuk = tanggalMasuk;
    }

    public String getJatuhTempo(){
        return jatuhTempo;
    }
    public void setJatuhTempo(String jatuhTempo){
        this.jatuhTempo = jatuhTempo;
    }

    public String getStatusPembayaran(){
        return statusPembayaran;
    }
    public void setStatusPembayaran(String statusPembayaran){
        this.statusPembayaran = statusPembayaran;
    }
}