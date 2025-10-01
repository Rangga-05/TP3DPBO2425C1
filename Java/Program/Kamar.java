//Class Kamar merepresentasikan kamar di kosan
public class Kamar{
    private long hargaKamar;
    private String kodeKamar;
    private String tipeKamar;
    private String luasKamar;
    private String statusKamar;
    private String deskripsiKamar;
    private String fasilitasKamar;

    //Constructor kosong
    public Kamar(){
        this.kodeKamar = "";
        this.tipeKamar = "";
        this.luasKamar = "";
        this.hargaKamar = 0L;
        this.statusKamar = "";
        this.deskripsiKamar = "";
        this.fasilitasKamar = "";
    }

    //Constructor lengkap
    public Kamar(String kodeKamar, String tipeKamar, String luasKamar, long hargaKamar, String statusKamar, String deskripsiKamar, String fasilitasKamar){
        this.kodeKamar = kodeKamar;
        this.tipeKamar = tipeKamar;
        this.luasKamar = luasKamar;
        this.hargaKamar = hargaKamar;
        this.statusKamar = statusKamar;
        this.deskripsiKamar = deskripsiKamar;
        this.fasilitasKamar = fasilitasKamar;
    }

    //Getter dan Setter untuk setiap atribut
    public String getKodeKamar(){
        return kodeKamar;
    }
    public void setKodeKamar(String kodeKamar){
        this.kodeKamar = kodeKamar;
    }

    public String getTipeKamar(){
        return tipeKamar;
    }
    public void setTipeKamar(String tipeKamar){
        this.tipeKamar = tipeKamar;
    }

    public String getLuasKamar(){
        return luasKamar;
    }
    public void setLuasKamar(String luasKamar){
        this.luasKamar = luasKamar;
    }

    public long getHargaKamar(){
        return hargaKamar;
    }
    public void setHargaKamar(long hargaKamar){
        this.hargaKamar = hargaKamar;
    }

    public String getStatusKamar(){
        return statusKamar;
    }
    public void setStatusKamar(String statusKamar){
        this.statusKamar = statusKamar;
    }

    public String getDeskripsiKamar(){
        return deskripsiKamar;
    }
    public void setDeskripsiKamar(String deskripsiKamar){
        this.deskripsiKamar = deskripsiKamar;
    }

    public String getFasilitasKamar(){
        return fasilitasKamar;
    }
    public void setFasilitasKamar(String fasilitasKamar){
        this.fasilitasKamar = fasilitasKamar;
    }
}