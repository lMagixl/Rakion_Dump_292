
void __cdecl FUN_360fdf20(char *param_1,int param_2,byte *param_3,uint *param_4)

{
  ushort *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  byte *pbVar7;
  ushort *puVar8;
  short sVar9;
  
  sVar9 = 0;
  puVar8 = (ushort *)(param_1 + 1);
  puVar1 = (ushort *)(param_1 + param_2);
  pbVar7 = param_3;
  if (*param_1 != '\x01') {
    while (puVar8 != puVar1) {
      if (sVar9 == 0) {
        sVar9 = 0x10;
        param_1 = (char *)(uint)*puVar8;
        puVar8 = puVar8 + 1;
      }
      bVar2 = (byte)*puVar8;
      if (((uint)param_1 & 1) == 0) {
        *pbVar7 = bVar2;
        pbVar7 = pbVar7 + 1;
        puVar8 = (ushort *)((int)puVar8 + 1);
      }
      else {
        pbVar3 = (byte *)((int)puVar8 + 1);
        uVar6 = (bVar2 & 0xf) + 1;
        puVar8 = puVar8 + 1;
        pbVar3 = pbVar7 + -((uint)(bVar2 & 0xf0) * 0x10 + (uint)*pbVar3);
        if (uVar6 != 0) {
          uVar5 = (uint)uVar6;
          do {
            *pbVar7 = *pbVar3;
            pbVar7 = pbVar7 + 1;
            pbVar3 = pbVar3 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      param_1 = (char *)((uint)param_1 >> 1 & 0x7fff);
      sVar9 = sVar9 + -1;
    }
    *param_4 = (int)pbVar7 - (int)param_3;
    return;
  }
  uVar5 = param_2 - 1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)puVar8;
    puVar8 = puVar8 + 2;
    param_3 = param_3 + 4;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_3 = (byte)*puVar8;
    puVar8 = (ushort *)((int)puVar8 + 1);
    param_3 = param_3 + 1;
  }
  *param_4 = uVar5;
  return;
}

