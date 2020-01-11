#include "suomi.h"

tyypitä rakenne {
  liitto {
    kok k;
    merk m[koko(kok)];
  } vaihteleva _liitto;
} _rakenne;

rivillä tupla neliö(pysyvä liuku a) {
  palauta a * a;
}

kok pääohjelma(merk argm, merk** argv) {
  etumerkitön pitkä kok k = 2;
  etumerkillinen kok summa = 0;

  tee {
    jos(k == 0) {
      mene loppu;
    } muutoin jos(k == 1) {
      keskeytä;
    } muutoin {
      summa += (etumerkillinen kok)neliö(2);
    }
  } kunnes(--k);

  _rakenne r;
  r._liitto.k = 0x01;

  kytkin (r._liitto.m[0]) {
    tapaus 0x01:
      summa += 2;
    keskeytä;
  oletus:
    keskeytä;
  }

  kok laskuri;
  kohti(laskuri = summa; laskuri >= 0; laskuri--) {
    r._liitto.k++;
  }

 loppu:
  palauta 0;
}
