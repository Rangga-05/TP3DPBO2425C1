//Class FasilitasUmum untuk simpan data tentang fasilitas
public class FasilitasUmum{
    private String kodeFasilitasUmum;
    private String namaFasilitasUmum;

    //Constructor kosong
    public FasilitasUmum(){
        this.kodeFasilitasUmum = "";
        this.namaFasilitasUmum = "";
    }

    //Constructor lengkap
    public FasilitasUmum(String kodeFasilitasUmum, String namaFasilitasUmum){
        this.kodeFasilitasUmum = kodeFasilitasUmum;
        this.namaFasilitasUmum = namaFasilitasUmum;
    }

    //Getter dan Setter untuk setiap atribut
    public String getKodeFasilitasUmum(){
        return kodeFasilitasUmum;
    }
    public void setKodeFasilitasUmum(String kodeFasilitasUmum){
        this.kodeFasilitasUmum = kodeFasilitasUmum;
    }

    public String getNamaFasilitasUmum(){
        return namaFasilitasUmum;
    }
    public void setNamaFasilitasUmum(String namaFasilitasUmum){
        this.namaFasilitasUmum = namaFasilitasUmum;
    }
}