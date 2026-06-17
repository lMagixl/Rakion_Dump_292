
void __cdecl FUN_3617f490(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [60];
  
  pfVar3 = (float *)(param_2 * 0x2c + *(int *)(param_1 + 0xf4));
  local_60 = DAT_36300d18;
  local_5c = DAT_36300d1c;
  local_6c = DAT_36300d24;
  local_54 = DAT_36300d28;
  local_4c = DAT_36300d30;
  local_58 = DAT_36300d20;
  local_68 = DAT_36300d34;
  local_44 = DAT_36300d3c;
  local_50 = DAT_36300d2c;
  local_40 = DAT_36300d40;
  local_48 = DAT_36300d38;
  local_64 = DAT_36300d44;
  FUN_360bf170(local_3c,pfVar3,&local_6c,&local_60);
  iVar2 = (**(code **)(*DAT_36301400 + 0x2c))(local_3c);
  if (iVar2 != -1) {
    fVar1 = pfVar3[6];
    if (fVar1 == -NAN) {
      pfVar3 = pfVar3 + 7;
      iVar2 = 4;
      do {
        if (*pfVar3 != -NAN) {
          FUN_3617f490(param_1,(int)*pfVar3);
        }
        pfVar3 = pfVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else if ((*(byte *)((int)fVar1 * 0x160 + *(int *)(param_1 + 0x104)) & 1) == 0) {
      pfVar3 = (float *)FUN_36026d50((undefined4 *)&DAT_36301528);
      *pfVar3 = fVar1;
      return;
    }
  }
  return;
}

