
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: int __thiscall CGfxLibrary::StartDisplayMode(enum GfxAPIType,long,long,long,enum
   DisplayDepth) */

int __thiscall
CGfxLibrary::StartDisplayMode
          (CGfxLibrary *this,GfxAPIType param_1,long param_2,long param_3,long param_4,
          DisplayDepth param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
                    /* 0x855b0  3659
                       ?StartDisplayMode@CGfxLibrary@@AAEHW4GfxAPIType@@JJJW4DisplayDepth@@@Z */
  _DAT_362c4d50 = 0x4479c000;
  _DAT_362c4d4c = 0x4479c000;
  _DAT_362c4d48 = 0x4479c000;
  DAT_362c4d38 = 999;
  _DAT_362c4d44 = 0x4479c000;
  _DAT_362c4d40 = 0x4479c000;
  _DAT_362c4d3c = 0x4479c000;
  if ((param_3 < 1) || (bVar1 = true, param_4 < 1)) {
    bVar1 = false;
  }
  *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 4;
  *(int *)(this + 0xa50) = *(int *)(this + 0xa50) + 1;
  *(undefined4 *)(this + 0xaf4) = 0;
  *(undefined4 *)(this + 0xae0) = 0;
  DAT_362c4d80 = 0;
  DAT_362c4d84 = 0;
  DAT_362c4d88 = 0;
  if (param_1 == 0) {
    FUN_3608d470();
    if (bVar1) {
      iVar2 = FUN_36060340(param_3,param_4,param_5);
      if (iVar2 == 0) {
        pcVar5 = s_ETRSFailed__CDS_SetMode___3622dbd0;
        goto LAB_360856f8;
      }
    }
    else {
      FUN_36060580();
    }
    iVar2 = InitDriver_OGL(this,(uint)(param_2 != 0));
    if (iVar2 == 0) {
      FUN_36060580();
      pcVar5 = s_ETRSFailed__InitDriver_OGL___3622dbec;
      goto LAB_360856f8;
    }
    *(undefined4 *)(this + 0xa38) = 0;
    *(undefined4 *)(this + 0xad8) = 0x4d2;
    DAT_362a1590 = 0;
  }
  else {
    if (param_1 == 1) {
      iVar2 = InitDriver_D3D(this);
      if (iVar2 == 0) {
        pcVar5 = s_ETRSFailed__InitDriver_D3D___3622dc0c;
LAB_360856f8:
        pcVar5 = Translate(pcVar5,4);
        CPrintF(pcVar5);
        return 0;
      }
      iVar2 = InitDisplay_D3D(this,param_2,param_3,param_4,param_5);
      if (iVar2 == 0) {
        pcVar5 = s_ETRSFailed__InitDisplay_D3D___3622dc2c;
        goto LAB_360856f8;
      }
      DAT_362a1590 = 1;
    }
    else {
      DAT_362a1590 = 0xffffffff;
    }
    *(undefined4 *)(this + 0xa38) = DAT_362a1590;
  }
  *(undefined4 *)(this + 0xafc) = 1;
  *(undefined4 *)(this + 0xa30) = 0;
  if (bVar1) {
    uVar3 = *(uint *)(this + 0xa54) | 0x200;
  }
  else {
    uVar3 = *(uint *)(this + 0xa54) & 0xfffffdff;
  }
  *(uint *)(this + 0xa54) = uVar3;
  *(undefined4 *)(this + 0xae4) = 0;
  FUN_360837d0(*(int *)(this + 0xa38));
  *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 2;
  DAT_362c4d74 = AllocMemory(0x1000);
  DAT_362c4d78 = DAT_362c4d74 + 0x200;
  puVar4 = DAT_362c4d74;
  for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_362c4d7c = 0;
  return 1;
}

