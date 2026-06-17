
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36071150(CDrawPort *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  if (DAT_362cce78 == 0) {
    if (DAT_362a4184 == 0) {
      return;
    }
  }
  else {
    DAT_362a4184 = 1;
  }
  CDrawPort::SetOrtho(param_1);
  (*DAT_362c45f8)();
  (*DAT_362c461c)();
  (*DAT_362c462c)();
  (*DAT_362c4628)();
  (*DAT_362c4634)();
  (*DAT_362c4614)();
  FUN_360605c0(&uStack_c,param_2 | 0xff);
  iStack_4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
  iStack_8 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc);
  DAT_362c54e0 = 0;
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  _DAT_362c5520 = 0;
  _DAT_362c5530 = 0;
  _DAT_362c5540 = 0;
  DAT_362c5560 = 0;
  puVar1 = (undefined4 *)FUN_36062560(&DAT_362c54d8,4);
  FUN_360627d0(&DAT_362c5508,4);
  puVar2 = (undefined4 *)FUN_36062630(&DAT_362c54f8,4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = (float)iStack_8;
  puVar1[3] = 0;
  puVar1[10] = 0;
  puVar1[2] = 0x3f800000;
  puVar1[6] = (float)iStack_4;
  puVar1[5] = 0x3f800000;
  puVar1[8] = 0x3f800000;
  puVar1[7] = (float)iStack_8;
  puVar1[0xb] = 0x3f800000;
  puVar1[9] = (float)iStack_4;
  *puVar2 = uStack_c;
  puVar2[1] = uStack_c;
  puVar2[2] = uStack_c;
  puVar2[3] = uStack_c;
  *(int *)(_pGfx + 0xb34) = *(int *)(_pGfx + 0xb34) + 6;
  FUN_36083610();
  return;
}

