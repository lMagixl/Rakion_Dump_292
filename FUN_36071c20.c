
void __cdecl FUN_36071c20(uint *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10 [4];
  byte local_c [4];
  int local_8;
  int local_4;
  
  iVar2 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
  local_1c = (int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2;
  if (0 < local_1c) {
    iVar1 = param_3 << 4;
    local_8 = iVar2;
    local_4 = iVar1;
    do {
      iVar3 = iVar2;
      puVar4 = param_1;
      puVar5 = param_2;
      if (0 < iVar2) {
        do {
          FUN_360715c0(puVar4,local_c,local_10,(undefined1 *)&local_14,(undefined1 *)&local_18);
          FUN_36071760(puVar5,(int)puVar4,param_3,(undefined4 *)local_c,(undefined4 *)local_10,
                       &local_14,&local_18);
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 4;
          iVar3 = iVar3 + -1;
          iVar1 = local_4;
          iVar2 = local_8;
        } while (iVar3 != 0);
      }
      param_1 = param_1 + iVar2 * 2;
      param_2 = (undefined4 *)((int)param_2 + iVar1);
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}

