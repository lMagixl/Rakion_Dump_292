
/* public: int __thiscall CLightSource::PolygonHasLayer(class CBrushPolygon &) */

int __thiscall CLightSource::PolygonHasLayer(CLightSource *this,CBrushPolygon *param_1)

{
  int *piVar1;
  int *piVar2;
  
                    /* 0x148680  2775  ?PolygonHasLayer@CLightSource@@QAEHAAVCBrushPolygon@@@Z */
  piVar2 = *(int **)(param_1 + 0x160);
  do {
    if ((int *)*piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = piVar2 + 5;
    piVar2 = (int *)*piVar2;
  } while ((CLightSource *)*piVar1 != this);
  return 1;
}

