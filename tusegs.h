#ifndef TUSEGS_H_INCLUDED
#define TUSEGS_H_INCLUDED
#include <iostream>

using namespace std;

typedef struct elm_MK *adr_MK;

typedef struct elm_Mhs *adr_Mhs;

typedef struct eml_relation *adr_relation;

struct infotype_mk {
    string nama_mk;
    string nama_kelas;
    int kuota_maks;
    int jumlah;
    string jenis_mk_mhs;
};

struct infotype_mhs {
    string nama_mhs;
    string nim_mhs;
    string asal_kelas;
    string jenis_mhs;
};

struct elm_MK {
    infotype_mk info;
    adr_MK next;

};

struct elm_Mhs {
    infotype_mhs info;
    adr_Mhs next;
};

struct elm_relation {
    adr_Mhs next_mhs;
    adr_relation next;
};

struct List_MK {
    adr_MK first;
    adr_MK last;
};

struct List_Mhs {
    adr_Mhs first;
};

struct list_relation {
    adr_relation first;
};

void createList_mk(List_MK &list_MK);
void createList_mhs(List_Mhs &list_MHS);
void insertLast_MK(List_MK &list_MK,adr_MK P);
void printList(List_MK L);
adr_MK createElementMK(infotype_mk dataBaru);
void printList(List_MK L);
void deleteFirst(List_MK &L,adr_MK P);
void deleteLast(List_MK &L,adr_MK P);
void deleteAfter(adr_MK prec, adr_MK &P);
adr_MK search_mk(List_MK L,string nama_mk);
adr_Mhs createElement_mhs(infotype_mhs dataBaru);
void deleteMK(List_MK &L,adr_MK P);
void testprintList(List_Mhs L);
void insertLast_Mhs(List_Mhs &L, adr_Mhs P);
void insertFirst_Mhs(List_Mhs &L,adr_Mhs P);
void deleteFirst_mhs(List_Mhs &L,adr_Mhs P);
void deteleAfter_mhs(adr_Mhs prec, adr_Mhs &P);
void deleteLast_mhs(List_Mhs &L,adr_Mhs P);
adr_Mhs search_mhs(List_Mhs L,string nama_mhs);
void deleteMhs(List_Mhs &L,adr_Mhs P);
#endif // TUSEGS_H_INCLUDED
