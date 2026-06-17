
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TRS_AddDirectionalLight(unsigned long,unsigned long,class CPlacement3D) */

void __cdecl
TRS_AddDirectionalLight
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
                    /* 0x184cc0  3734  ?TRS_AddDirectionalLight@@YAXKKVCPlacement3D@@@Z */
  iVar2 = DAT_363016fc + 1;
  DAT_363016fc = iVar2;
  iVar1 = FUN_36184f30((undefined4 *)&DAT_363016f4);
  if (iVar1 < iVar2) {
    iVar2 = FUN_36184f30((undefined4 *)&DAT_363016f4);
    FUN_361852a0(&DAT_363016f4,iVar2 + _DAT_36301700);
    iVar2 = DAT_363016fc;
  }
  iVar2 = DAT_363016f8 + -0x48 + iVar2 * 0x48;
  *(undefined4 *)(iVar2 + 4) = param_1;
  *(undefined4 *)(iVar2 + 8) = param_2;
  *(undefined4 *)(iVar2 + 0x18) = param_3;
  *(undefined4 *)(iVar2 + 0x1c) = param_4;
  *(undefined4 *)(iVar2 + 0x20) = param_5;
  *(undefined4 *)(iVar2 + 0x24) = param_6;
  *(undefined4 *)(iVar2 + 0x28) = param_7;
  *(undefined4 *)(iVar2 + 0x2c) = param_8;
  return;
}

