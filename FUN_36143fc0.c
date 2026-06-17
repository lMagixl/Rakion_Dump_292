
void __fastcall FUN_36143fc0(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int in_EAX;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *local_14;
  int local_10;
  
  pbVar4 = param_1 + in_EAX * param_2;
  pbVar6 = pbVar4;
  local_14 = param_1;
  while ((pbVar1 = pbVar6, iVar2 = in_EAX / 2, 0 < iVar2 && (param_2 = param_2 / 2, 0 < param_2))) {
    pbVar6 = pbVar1;
    local_10 = param_2;
    if (0 < param_2) {
      do {
        pbVar3 = local_14;
        iVar5 = iVar2;
        if (0 < iVar2) {
          do {
            *pbVar6 = (byte)((uint)pbVar3[in_EAX + 1] + (uint)pbVar3[in_EAX] + (uint)pbVar3[1] +
                             (uint)*pbVar3 >> 2);
            pbVar6 = pbVar6 + 1;
            iVar5 = iVar5 + -1;
            pbVar3 = pbVar3 + 2;
          } while (iVar5 != 0);
        }
        local_14 = local_14 + in_EAX * 2;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    pbVar6 = pbVar1 + param_2 * iVar2;
    local_14 = pbVar1;
    in_EAX = iVar2;
  }
  for (; pbVar4 < pbVar1; pbVar4 = pbVar4 + 1) {
    *pbVar4 = -(0x80 < *pbVar4);
  }
  return;
}

