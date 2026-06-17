
void __cdecl FUN_36071cf0(int param_1,uint *param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte local_14 [4];
  byte local_10 [4];
  int local_c;
  int local_8;
  int local_4;
  
  puVar1 = param_3;
  iVar2 = (int)((int)param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
  local_20 = (int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2;
  if (0 < local_20) {
    iVar3 = (int)param_3 << 4;
    param_3 = param_2;
    iVar5 = iVar2 << 4;
    local_c = iVar2;
    local_8 = iVar3;
    local_4 = iVar5;
    do {
      iVar4 = param_1;
      puVar6 = param_3;
      param_4 = iVar2;
      if (0 < iVar2) {
        do {
          FUN_360715c0((uint *)(iVar4 + 8),local_10,local_14,(undefined1 *)&local_18,
                       (undefined1 *)&local_1c);
          FUN_36071760(puVar6,iVar4 + 8,(int)puVar1,(undefined4 *)local_10,(undefined4 *)local_14,
                       &local_18,&local_1c);
          FUN_36071820(puVar6,iVar4,(int)puVar1);
          param_4 = param_4 + -1;
          iVar2 = local_c;
          iVar3 = local_8;
          iVar4 = iVar4 + 0x10;
          iVar5 = local_4;
          puVar6 = puVar6 + 4;
        } while (param_4 != 0);
      }
      param_1 = param_1 + iVar5;
      param_3 = (uint *)((int)param_3 + iVar3);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}

