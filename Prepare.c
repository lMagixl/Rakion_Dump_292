
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CShadowMap::Prepare(void) */

void __thiscall CShadowMap::Prepare(CShadowMap *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_c;
  int local_8;
  ulong *local_4;
  
                    /* 0x92a50  2815  ?Prepare@CShadowMap@@QAEXXZ */
  iVar1 = FUN_36085480(*(uint *)(this + 0x48),*(int *)(this + 0x4c));
  if (DAT_362a4080 < 5) {
    DAT_362a4080 = 5;
  }
  else if (8 < DAT_362a4080) {
    DAT_362a4080 = 8;
  }
  lVar2 = ClampTextureSize(1 << ((char)DAT_362a4080 * '\x02' & 0x1fU),*(long *)(_pGfx + 0xad4),
                           *(int *)(this + 0x28) >> ((byte)*(undefined4 *)(this + 0x14) & 0x1f),
                           *(int *)(this + 0x2c) >> ((byte)*(undefined4 *)(this + 0x14) & 0x1f));
  iVar5 = lVar2 + *(int *)(this + 0x14);
  iVar7 = iVar5;
  if (*(int *)(this + 0x18) < iVar5) {
    iVar7 = *(int *)(this + 0x18);
  }
  iVar6 = *(int *)(this + 0x28) >> ((byte)iVar5 & 0x1f);
  iVar5 = *(int *)(this + 0x2c) >> ((byte)iVar5 & 0x1f);
  *(undefined4 *)(this + 0x40) = 0x1f;
  iVar8 = iVar6 * iVar5;
  if ((iVar8 < 0x401) ||
     (((*(uint *)(this + 0x10) & 0x200000) != 0 && (-1 < *(int *)(_pGfx + 0xb08))))) {
    iVar1 = 0;
  }
  else if (iVar1 != 0) {
    local_4 = (ulong *)0x0;
    local_c = iVar5;
    local_8 = iVar6;
    lVar2 = GetMipmapOfSize(0x100,&local_4,&local_8,&local_c);
    if (lVar2 < 2) {
      iVar1 = 0;
    }
    else {
      iVar7 = iVar7 + lVar2;
    }
  }
  if ((*(int *)(this + 0x30) == 0) || (iVar7 < *(int *)(this + 0x3c))) {
    Cache(this,iVar7);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x3c);
  }
  if ((((byte)this[0x10] & 1) != 0) && (uVar3 = UpdateDynamicLayers(this), (int)uVar3 < 0x1f)) {
    *(ulong *)(this + 0x40) = uVar3;
  }
  if ((1 < _iStatsMode) && (*(int *)(this + 0x80) != *(int *)(_pGfx + 0xafc))) {
    *(int *)(this + 0x80) = *(int *)(_pGfx + 0xafc);
    local_c = FUN_3607ac80(*(int *)(this + 0x60));
    local_c = local_c * iVar8;
    if (*(int *)(this + 0x74) == 0) {
      local_c = (local_c * 4) / 3;
    }
    *(float *)(DAT_362bef74 + 0x124) = *(float *)(DAT_362bef74 + 0x124) + _DAT_36223384;
    *(float *)(DAT_362bef74 + 0x138) = (float)local_c + *(float *)(DAT_362bef74 + 0x138);
  }
  if (iVar1 != 0) {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x100000;
    return;
  }
  if (*(int *)(this + 0x40) < 0x1f) {
    bVar4 = (byte)*(int *)(this + 0x40);
    *(uint *)(_pGfx + 0xb08) =
         *(int *)(_pGfx + 0xb08) -
         (*(int *)(this + 0x28) >> (bVar4 & 0x1f)) * (*(int *)(this + 0x2c) >> (bVar4 & 0x1f)) *
         ((uint)(DAT_362a4094 != 0) * 2 + 2);
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffefffff;
  return;
}

