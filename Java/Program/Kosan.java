import java.util.ArrayList;

//Class Kosan simpan data kosan
public class Kosan{
    private int jumlahKamar;
    private String kodeKosan;
    private String namaKosan;
    private String alamatKosan;
    private ArrayList<Kamar> listKamar = new ArrayList<>();
    private ArrayList<KamarPremium> listKamarPremium = new ArrayList<>();
    private ArrayList<FasilitasUmum> listFasilitasUmum = new ArrayList<>();

    //Constructor kosong
    public Kosan(){
        this.kodeKosan = "";
        this.namaKosan = "";
        this.alamatKosan = "";
        this.jumlahKamar = 0;
    }

    //Constructor lengkap
    public Kosan(String kodeKosan, String namaKosan, String alamatKosan, int jumlahKamar){
        this.kodeKosan = kodeKosan;
        this.namaKosan = namaKosan;
        this.alamatKosan = alamatKosan;
        this.jumlahKamar = jumlahKamar;
    }

    //Getter dan Setter untuk setiap atribut
    public String getKodeKosan(){
        return kodeKosan;
    }
    public void setKodeKosan(String kodeKosan){
        this.kodeKosan = kodeKosan;
    }

    public String getNamaKosan(){
        return namaKosan;
    }
    public void setNamaKosan(String namaKosan){
        this.namaKosan = namaKosan;
    }

    public String getAlamatKosan(){
        return alamatKosan;
    }
    public void setAlamatKosan(String alamatKosan){
        this.alamatKosan = alamatKosan;
    }

    public int getJumlahKamar(){
        return jumlahKamar;
    }
    public void setJumlahKamar(int jumlahKamar){
        this.jumlahKamar = jumlahKamar;
    }

    //Tambah Kamar & Fasilitas
    public ArrayList<Kamar> getListKamar(){
        return listKamar;
    }
    public void tambahKamar(Kamar k){
        listKamar.add(k);
    }

    public ArrayList<KamarPremium> getListKamarPremium(){
        return listKamarPremium;
    }
    public void tambahKamarPremium(KamarPremium kp){
        listKamarPremium.add(kp);
    }

    public ArrayList<FasilitasUmum> getListFasilitasUmum(){
        return listFasilitasUmum;
    }
    public void tambahFasilitasUmum(FasilitasUmum f){
        listFasilitasUmum.add(f);
    }
}