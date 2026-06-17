
/* public: virtual int __thiscall CBrushShadowMap::HasDynamicLayers(void) */

int __thiscall CBrushShadowMap::HasDynamicLayers(CBrushShadowMap *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
                    /* 0x140da0  2254  ?HasDynamicLayers@CBrushShadowMap@@UAEHXZ */
  piVar3 = *(int **)(this + 0x90);
  do {
    piVar2 = (int *)*piVar3;
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = piVar3 + 5;
    piVar3 = piVar2;
  } while ((*piVar1 == 0) || ((*(byte *)(*piVar1 + 0x1c) & 0x80) == 0));
  return 1;
}

