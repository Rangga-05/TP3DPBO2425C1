//Class Pemilik turunan dari Orang untuk simpan data tambahan atribut
public class Pemilik extends Orang{
    private String kodePemilik;
    private String kodeKosan;
    private String noRekening;

    //Constructor kosong
    public Pemilik(){
        super(); // panggil constructor Orang
        this.kodePemilik = "";
        this.kodeKosan = "";
        this.noRekening = "";
    }

    //Constructor lengkap
    public Pemilik(long noKtp, String nama, String alamat, String noTelp, String kodePemilik, String kodeKosan, String noRekening){
        super(noKtp, nama, alamat, noTelp); // panggil constructor Orang dengan parameter
        this.kodePemilik = kodePemilik;
        this.kodeKosan = kodeKosan;
        this.noRekening = noRekening;
    }

    //Getter & Setter khusus atribut Pemilik
    public String getKodePemilik(){
        return kodePemilik;
    }
    public void setKodePemilik(String kodePemilik){
        this.kodePemilik = kodePemilik;
    }

    public String getKodeKosan(){
        return kodeKosan;
    }
    public void setKodeKosan(String kodeKosan){
        this.kodeKosan = kodeKosan;
    }

    public String getNoRekening(){
        return noRekening;
    }
    public void setNoRekening(String noRekening){
        this.noRekening = noRekening;
    }
}