//Class Orang merepresentasikan data umum tentang orang
public class Orang{
    //Atribut dasar
    private long noKtp;
    private String nama;
    private String alamat;
    private String noTelp;

    //Constructor kosong
    public Orang(){
        this.noKtp = 0;
        this.nama = "";
        this.alamat = "";
        this.noTelp = "";
    }

    //Constructor lengkap
    public Orang(long noKtp, String nama, String alamat, String noTelp){
        this.noKtp = noKtp;
        this.nama = nama;
        this.alamat = alamat;
        this.noTelp = noTelp;
    }

    //Getter dan Setter untuk setiap atribut
    public long getNoKtp(){
        return noKtp;
    }
    public void setNoKtp(long noKtp){
        this.noKtp = noKtp;
    }

    public String getNama(){
        return nama;
    }
    public void setNama(String nama){
        this.nama = nama;
    }

    public String getAlamat(){
        return alamat;
    }
    public void setAlamat(String alamat){
        this.alamat = alamat;
    }

    public String getNoTelp(){
        return noTelp;
    }
    public void setNoTelp(String noTelp){
        this.noTelp = noTelp;
    }
}