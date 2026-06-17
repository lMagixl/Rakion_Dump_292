
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36145720(undefined4 *param_1)

{
  float fVar1;
  bool bVar2;
  byte *pbVar3;
  undefined3 extraout_var;
  void *pvVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_84;
  float local_64;
  float local_60;
  float local_5c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pbVar3 = AllocMemory(param_1[0xd] + 8);
  param_1[0x2f] = pbVar3;
  if (*(byte **)(param_1[1] + 0x9c) == (byte *)0x0) {
    iVar7 = 0;
    if (0 < (int)param_1[0xc]) {
      do {
        bVar5 = (byte)iVar7;
        iVar6 = 1 << (bVar5 & 0x1f);
        local_84 = 0;
        fVar1 = (float)iVar6;
        local_10 = (float)iVar6 * _DAT_36227cf0;
        local_18 = ((float)param_1[0x37] + (float)param_1[0x3a]) * local_10;
        local_14 = ((float)param_1[0x38] + (float)param_1[0x3b]) * local_10;
        local_10 = ((float)param_1[0x39] + (float)param_1[0x3c]) * local_10;
        local_64 = (float)param_1[0x34] + local_18;
        local_60 = (float)param_1[0x35] + local_14;
        local_5c = (float)param_1[0x36] + local_10;
        if (0 < (int)param_1[0xb] >> (bVar5 & 0x1f)) {
          do {
            local_30 = local_64;
            local_2c = local_60;
            iVar6 = 0;
            local_28 = local_5c;
            if (0 < (int)param_1[10] >> (bVar5 & 0x1f)) {
              do {
                bVar2 = FUN_36146700((int *)*param_1,(int)&local_30);
                *pbVar3 = -(CONCAT31(extraout_var,bVar2) != 0);
                local_24 = (float)param_1[0x37] * fVar1;
                pbVar3 = pbVar3 + 1;
                local_20 = (float)param_1[0x38] * fVar1;
                iVar6 = iVar6 + 1;
                local_1c = (float)param_1[0x39] * fVar1;
                local_30 = local_30 + local_24;
                local_2c = local_2c + local_20;
                local_28 = local_28 + local_1c;
              } while (iVar6 < (int)param_1[10] >> (bVar5 & 0x1f));
            }
            local_c = (float)param_1[0x3a] * fVar1;
            local_8 = (float)param_1[0x3b] * fVar1;
            local_4 = (float)param_1[0x3c] * fVar1;
            local_84 = local_84 + 1;
            local_64 = local_64 + local_c;
            local_60 = local_60 + local_8;
            local_5c = local_5c + local_4;
          } while (local_84 < (int)param_1[0xb] >> (bVar5 & 0x1f));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_1[0xc]);
    }
    pvVar4 = AllocMemory((int)(param_1[0xd] + 7 + (param_1[0xd] + 7 >> 0x1f & 7U)) >> 3);
    *(void **)(param_1[1] + 0x9c) = pvVar4;
    FUN_361440d0((byte *)param_1[0x2f],*(byte **)(param_1[1] + 0x9c));
    return;
  }
  FUN_36144130(*(byte **)(param_1[1] + 0x9c),pbVar3);
  return;
}

