
/* public: virtual void __thiscall CBrushShadowMap::CheckLayersUpToDate(void) */

void __thiscall CBrushShadowMap::CheckLayersUpToDate(CBrushShadowMap *this)

{
  CLightSource *this_00;
  ulong uVar1;
  int *piVar2;
  
                    /* 0x140d30  1194  ?CheckLayersUpToDate@CBrushShadowMap@@UAEXXZ */
  if ((((*(int *)(this + 0x34) != 0) && (((byte)this[0x10] & 2) == 0)) ||
      (((byte)this[0x10] & 8) != 0)) && (*(int *)(this + 0x30) != 0)) {
    piVar2 = *(int **)(this + 0x90);
    while ((*piVar2 != 0 &&
           ((((*(byte *)(piVar2 + -1) & 4) != 0 ||
             (this_00 = (CLightSource *)piVar2[5], this_00 == (CLightSource *)0x0)) ||
            ((uVar1 = CLightSource::GetLightColor(this_00), piVar2[0xc] == uVar1 ||
             (CShadowMap::Invalidate((CShadowMap *)this,*(uint *)(this_00 + 0x1c) & 0x80),
             (char)this_00[0x1c] < '\0'))))))) {
      piVar2 = (int *)*piVar2;
    }
  }
  return;
}

