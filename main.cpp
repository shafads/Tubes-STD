#include "tusegs.h"

int main()
{
    List_MK Matakuliah;
    adr_MK P;
    adr_Mhs Q;
    infotype_mk data_mk;
    infotype_mhs data_mhs;
    createList_mk(Matakuliah);
    data_mk = {nama_mk: "Strukkuso", nama_kelas: "IF-44-NURIX", kuota_maks: 10, jumlah: 0,jenis_mk_mhs: "premium"};
    P = createElementMK(data_mk);
    insertLast_MK(Matakuliah,P);
    data_mk = {nama_mk: "Matodisu", nama_kelas: "IF-44-NURIX", kuota_maks: 10, jumlah: 0,jenis_mk_mhs: "premium"};
    P = createElementMK(data_mk);
    insertLast_MK(Matakuliah,P);
    data_mk = {nama_mk: "anime", nama_kelas: "IF-44-NURIX", kuota_maks: 10, jumlah: 0,jenis_mk_mhs: "premium"};
    P = createElementMK(data_mk);
    insertLast_MK(Matakuliah,P);
    printList(Matakuliah);
    cout<<"==================="<<endl;
    P = search_mk(Matakuliah,"Matodisu");
    deleteMK(Matakuliah,P);
    printList(Matakuliah);
    cout<<"==================="<<endl;
    //=========================================
    List_Mhs mahasiswa;
    createList_mhs(mahasiswa);
    data_mhs = {nama_mhs: "Fadil",nim_mhs: "1",asal_kelas: "IF-44-NURIX",jenis_mhs: "reguler"};
    Q = createElement_mhs(data_mhs);
    insertLast_Mhs(mahasiswa,Q);
    data_mhs = {nama_mhs: "Rapli",nim_mhs: "1",asal_kelas: "IF-44-NURIX",jenis_mhs: "reguler"};
    Q = createElement_mhs(data_mhs);
    insertLast_Mhs(mahasiswa,Q);
    data_mhs = {nama_mhs: "Sien",nim_mhs: "1",asal_kelas: "IF-44-NURIX",jenis_mhs: "reguler"};
    Q = createElement_mhs(data_mhs);
    insertLast_Mhs(mahasiswa,Q);
    testprintList(mahasiswa);
    cout<<"==================="<<endl;
    Q = search_mhs(mahasiswa,"Rapli");
    deleteMhs(mahasiswa,Q);
    testprintList(mahasiswa);
    return 0;
}
