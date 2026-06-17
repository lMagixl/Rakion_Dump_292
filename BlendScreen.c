
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::BlendScreen(void) */

void __thiscall CDrawPort::BlendScreen(CDrawPort *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
                    /* 0x68b80  1087  ?BlendScreen@CDrawPort@@QAEXXZ */
  local_c = *(uint *)(this + 0x58);
  if (local_c != 0) {
    iVar2 = (int)(0x10000 / (ulonglong)local_c);
    iVar1 = *(int *)(this + 0x4c);
    local_8 = (uint)(*(int *)(this + 0x50) * iVar2) >> 0x10;
    local_4 = (uint)(*(int *)(this + 0x54) * iVar2) >> 0x10;
    if (0xff < local_c) {
      local_c = 0xff;
    }
    (*DAT_362c45f8)();
    (*DAT_362c461c)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x1c);
    (*DAT_362c4628)();
    (*DAT_362c4634)();
    FUN_360605c0(&uStack_10,
                 CONCAT31(CONCAT21(CONCAT11((char)((uint)(iVar1 * iVar2) >> 0x10),
                                            (undefined1)local_8),(undefined1)local_4),
                          (undefined1)local_c));
    DAT_362c54e0 = 0;
    DAT_362c5500 = 0;
    DAT_362c5510 = 0;
    _DAT_362c5520 = 0;
    _DAT_362c5530 = 0;
    _DAT_362c5540 = 0;
    DAT_362c5560 = 0;
    puVar3 = (undefined4 *)FUN_36062560(&DAT_362c54d8,4);
    FUN_360627d0(&DAT_362c5508,4);
    puVar4 = (undefined4 *)FUN_36062630(&DAT_362c54f8,4);
    local_8 = *(int *)(this + 0x10) - *(int *)(this + 8);
    local_4 = *(int *)(this + 0x14) - *(int *)(this + 0xc);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = (float)(int)local_4;
    puVar3[10] = 0;
    puVar3[2] = 0x3c23d70a;
    puVar3[5] = 0x3c23d70a;
    puVar3[6] = (float)(int)local_8;
    puVar3[8] = 0x3c23d70a;
    puVar3[0xb] = 0x3c23d70a;
    puVar3[7] = (float)(int)local_4;
    puVar3[9] = (float)(int)local_8;
    *puVar4 = uStack_10;
    puVar4[1] = uStack_10;
    puVar4[2] = uStack_10;
    puVar4[3] = uStack_10;
    FUN_36083610();
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
  }
  return;
}

