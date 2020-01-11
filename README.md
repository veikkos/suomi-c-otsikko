# Suomenkielinen otsikkotiedosto C:lle

Oletko aina halunnut kirjoittaa koodia kokonaan Suomeksi? Nyt se on
mahdollista `suomi.h`:lla!

``` c
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
  etumerkit�n pitk� kok k = 3;
  tupla summa = 0;

  kunnes(k--) {
    jos(k == 0) {
      mene loppu;
    } muutoin jos(k == 1) {
      keskeyt�;
    } muutoin {
      summa += neli�(7);
    }
  }

  _rakenne r;
  r._liitto.k = 0x01;

  kytkin (r._liitto.m[0]) {
    tapaus 0x01:
      summa += 6;
    keskeyt�;
  oletus:
    keskeyt�;
  }

 loppu:
  palauta 0;
}

```
