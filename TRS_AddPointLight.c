
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TRS_AddPointLight(float,float,unsigned long,class CPlacement3D) */

void __cdecl
TRS_AddPointLight(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x184c20  3735  ?TRS_AddPointLight@@YAXMMKVCPlacement3D@@@Z */
  iVar3 = DAT_363016ec + 1;
  DAT_363016ec = iVar3;
  iVar2 = FUN_36184f00((undefined4 *)&DAT_363016e4);
  if (iVar2 < iVar3) {
    iVar3 = FUN_36184f00((undefined4 *)&DAT_363016e4);
    FUN_361851d0(&DAT_363016e4,iVar3 + _DAT_363016f0);
    iVar3 = DAT_363016ec;
  }
  puVar1 = (undefined4 *)(iVar3 * 0x5c + -0x5c + DAT_363016e8);
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
              param_3 << 0x18;
  *puVar1 = 0;
  puVar1[7] = param_4;
  puVar1[8] = param_5;
  puVar1[9] = param_6;
  puVar1[10] = param_7;
  puVar1[0xb] = param_8;
  puVar1[0xc] = param_9;
  return;
}

