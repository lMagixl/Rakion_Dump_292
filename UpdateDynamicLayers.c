
/* public: unsigned long __thiscall CShadowMap::UpdateDynamicLayers(void) */

ulong __thiscall CShadowMap::UpdateDynamicLayers(CShadowMap *this)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
                    /* 0x92620  3910  ?UpdateDynamicLayers@CShadowMap@@QAEKXZ */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffffe;
  iVar1 = (**(code **)(*(int *)this + 8))();
  if (iVar1 == 0) {
    if (*(void **)(this + 0x34) == (void *)0x0) {
      return 0x1f;
    }
    DAT_362c9a34 = 1;
    FreeMemory(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
    return *(ulong *)(this + 0x3c);
  }
  if (*(int *)(this + 0x34) == 0) {
    pvVar2 = AllocMemory(*(long *)(this + 0x38));
    *(void **)(this + 0x34) = pvVar2;
    DAT_362c9a34 = 1;
  }
  iVar1 = DAT_362a4080 + -2;
  if (iVar1 < 5) {
    iVar1 = 5;
  }
  if ((DAT_362a4084 < iVar1) || (iVar1 = DAT_362a4080, DAT_362a4080 < DAT_362a4084)) {
    DAT_362a4084 = iVar1;
  }
  lVar3 = ClampTextureSize(1 << ((char)DAT_362a4084 * '\x02' & 0x1fU),*(long *)(_pGfx + 0xad4),
                           *(int *)(this + 0x28) >> ((byte)*(undefined4 *)(this + 0x3c) & 0x1f),
                           *(int *)(this + 0x2c) >> ((byte)*(undefined4 *)(this + 0x3c) & 0x1f));
  uVar5 = lVar3 + *(int *)(this + 0x3c);
  uVar4 = *(ulong *)(this + 0x18);
  if (DAT_362a40a0 == 0) {
    uVar4 = uVar5;
  }
  (*(code *)**(undefined4 **)this)(uVar5,uVar4,1);
  if (((byte)this[0x10] & 2) == 0) {
    DAT_362c9a34 = 1;
    return uVar5;
  }
  return 0x1f;
}

