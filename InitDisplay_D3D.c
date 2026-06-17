
/* private: int __thiscall CGfxLibrary::InitDisplay_D3D(long,long,long,enum DisplayDepth) */

int __thiscall
CGfxLibrary::InitDisplay_D3D
          (CGfxLibrary *this,long param_1,long param_2,long param_3,DisplayDepth param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 **ppuVar7;
  undefined1 *puStack_134;
  undefined1 local_e4 [4];
  undefined1 auStack_e0 [4];
  uint uStack_dc;
  uint uStack_d4;
  int iStack_34;
  undefined1 *puStack_14;
  int iStack_10;
  
                    /* 0x734f0  2313  ?InitDisplay_D3D@CGfxLibrary@@AAEHJJJW4DisplayDepth@@@Z */
  puStack_134 = local_e4;
  (**(code **)(**(int **)(this + 0xa58) + 0x20))(*(int **)(this + 0xa58),param_1);
  puVar6 = (undefined4 *)&stack0xfffffedc;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(**(int **)(this + 0xa58) + 0x34))(*(int **)(this + 0xa58),param_1,1,auStack_e0);
  if (DAT_362c53f8 < 0xc) {
    DAT_362c53f8 = 0;
  }
  else if (DAT_362c53f8 < 0x15) {
    DAT_362c53f8 = 0x10;
  }
  else {
    DAT_362c53f8 = (uint)(0x1b < DAT_362c53f8) * 8 + 0x18;
  }
  if (((int)puStack_14 < 1) || (iStack_10 < 1)) {
    puStack_134 = (undefined1 *)0x8;
    uVar1 = FUN_36072fc0(param_1);
    FUN_36072f60();
    *(undefined4 *)(this + 0xad8) = 0xffffffff;
  }
  else {
    uVar1 = FUN_36072fc0(param_1);
    FUN_36072f60();
    if (DAT_362c53ec < 0) {
LAB_3607363d:
      DAT_362c53ec = 0;
LAB_3607364a:
      if (-1 < (int)uStack_dc) {
        DAT_362c53ec = 1;
      }
    }
    else {
      if (DAT_362c53ec < 4) {
        if (DAT_362c53ec == 3) goto LAB_3607360c;
        if (DAT_362c53ec == 2) goto LAB_36073622;
        if (DAT_362c53ec == 1) goto LAB_36073638;
        if (DAT_362c53ec != 0) goto LAB_36073658;
        goto LAB_3607364a;
      }
      DAT_362c53ec = 3;
LAB_3607360c:
      if ((uStack_dc & 4) == 0) {
        DAT_362c53ec = 2;
LAB_36073622:
        if ((uStack_dc & 2) == 0) {
          DAT_362c53ec = 1;
LAB_36073638:
          if ((uStack_dc & 1) == 0) goto LAB_3607363d;
        }
      }
    }
LAB_36073658:
    *(int *)(this + 0xad8) = DAT_362c53ec;
    puStack_134 = puStack_14;
  }
  uVar3 = *(uint *)(this + 0xa54);
  uVar5 = 0x20;
  *(uint *)(this + 0xa54) = uVar3 & 0xfffff3ff;
  *(undefined4 *)(this + 0xab8) = 0x10;
  if ((uStack_d4 & 0x10000) != 0) {
    *(uint *)(this + 0xa54) = uVar3 & 0xfffff3ff | 0x400;
    *(int *)(this + 0xab8) = iStack_34;
    if (3 < iStack_34) {
      if (DAT_362a40bc != 0) {
        DAT_362a40bc = 1;
        uVar5 = 0x40;
        *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 0x800;
      }
      goto LAB_36073759;
    }
  }
  DAT_362a40bc = 0;
LAB_36073759:
  ppuVar7 = &puStack_134;
  iVar4 = (**(code **)(**(int **)(this + 0xa58) + 0x3c))
                    (*(int **)(this + 0xa58),param_1,1,DAT_362b2a94,uVar5,ppuVar7,this + 0xa5c);
  if (iVar4 == 0) {
    *(undefined4 *)(this + 0xa60) = uVar5;
    *(undefined4 *)(this + 0xa64) = uVar1;
    *(uint *)(this + 0xa4c) = (uint)ppuVar7 & 0x7ffffff;
    if (((uint)ppuVar7 & 0x8000000) == 0) {
      uVar3 = *(uint *)(this + 0xa54) & 0xffffffbf;
    }
    else {
      uVar3 = *(uint *)(this + 0xa54) | 0x40;
    }
    *(uint *)(this + 0xa54) = uVar3;
    return 1;
  }
  pcVar2 = Translate(s_ETRSFailed__D3D_CreateDevice__36228af8,4);
  CPrintF(pcVar2);
  pcVar2 = Translate(s_ETRS_iAdapter___d__d3dDevType____36228b18,4);
  CPrintF(pcVar2);
  return 0;
}

