# Suomenkielinen otsikkotiedosto C:lle

Oletko aina halunnut kirjoittaa koodia kokonaan Suomeksi? Nyt se on
mahdollista `suomi.h`:lla!

``` c
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
  etumerkitön pitkä kok k = 3;
  tupla summa = 0;

  kunnes(k--) {
    jos(k == 0) {
      mene loppu;
    } muutoin jos(k == 1) {
      keskeytä;
    } muutoin {
      summa += neliö(7);
    }
  }

  _rakenne r;
  r._liitto.k = 0x01;

  kytkin (r._liitto.m[0]) {
    tapaus 0x01:
      summa += 6;
    keskeytä;
  oletus:
    keskeytä;
  }

 loppu:
  palauta 0;
}

```
