#include "suomi.h"

tyypit� rakenne {
  liitto {
    kok k;
    merk m[koko(kok)];
  } vaihteleva _liitto;
} _rakenne;

rivill� tupla neli�(pysyv� liuku a) {
  palauta a * a;
}

kok p��ohjelma(merk argm, merk** argv) {
  etumerkit�n pitk� kok k = 2;
  etumerkillinen kok summa = 0;

  tee {
    jos(k == 0) {
      mene loppu;
    } muutoin jos(k == 1) {
      keskeyt�;
    } muutoin {
      summa += (etumerkillinen kok)neli�(2);
    }
  } kunnes(--k);

  _rakenne r;
  r._liitto.k = 0x01;

  kytkin (r._liitto.m[0]) {
    tapaus 0x01:
      summa += 2;
    keskeyt�;
  oletus:
    keskeyt�;
  }

  kok laskuri;
  kohti(laskuri = summa; laskuri >= 0; laskuri--) {
    r._liitto.k++;
  }

 loppu:
  palauta 0;
}
