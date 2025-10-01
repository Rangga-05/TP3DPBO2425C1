//Class KamarPremium turunan dari Kamar dengan atribut tambahan
public class KamarPremium extends Kamar{
    private long tambahanHarga;
    private String fasilitasKamarPremium;

    //Constructor kosong
    public KamarPremium(){
        super();
        this.tambahanHarga = 0L;
        this.fasilitasKamarPremium = "";
    }

    //Constructor lengkap
    public KamarPremium(String kodeKamar, String luasKamar, long hargaKamar, String statusKamar, String deskripsiKamar, String fasilitasKamar, long tambahanHarga, String fasilitasKamarPremium){
        super(kodeKamar, "Premium", luasKamar, hargaKamar, statusKamar, deskripsiKamar, fasilitasKamar);
        this.tambahanHarga = tambahanHarga;
        this.fasilitasKamarPremium = fasilitasKamarPremium;
    }

    //Getter & Setter khusus atribut KamarPremium
    public long getTambahanHarga(){
        return tambahanHarga;
    }
    public void setTambahanHarga(long tambahanHarga){
        this.tambahanHarga = tambahanHarga;
    }

    public String getFasilitasKamarPremium(){
        return fasilitasKamarPremium;
    }
    public void setFasilitasKamarPremium(String fasilitasKamarPremium){
        this.fasilitasKamarPremium = fasilitasKamarPremium;
    }
}