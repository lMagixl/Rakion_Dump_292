
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_360fdc80(byte *param_1,uint param_2,undefined1 *param_3,int *param_4)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint local_4018;
  char local_4014;
  byte *local_4010;
  undefined4 auStack_4000 [4096];
  
  pbVar5 = param_1 + param_2;
  local_4018 = 0;
  sVar1 = 0;
  *param_3 = 0;
  pbVar7 = param_1;
  pbVar10 = param_3 + 3;
  local_4010 = param_3 + 1;
LAB_360fdcd3:
  sVar3 = 0x10;
  if (param_3 + param_2 < pbVar10) {
    pbVar7 = param_3 + 1;
    for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar7 = *param_1;
      param_1 = param_1 + 1;
      pbVar7 = pbVar7 + 1;
    }
    *param_3 = 1;
    *param_4 = param_2 + 1;
    return;
  }
  pbVar8 = pbVar10;
  if (pbVar7 <= pbVar5 + -0x100) goto LAB_360fdd6d;
  sVar3 = 1;
  if (pbVar7 <= pbVar5 + -0x10) goto LAB_360fdd6d;
  if (pbVar7 == pbVar5) {
    local_4014 = (char)sVar1;
    local_4018._0_2_ = (ushort)local_4018 >> (0x10U - local_4014 & 0x1f);
    *local_4010 = (byte)local_4018;
    local_4010[1] = (byte)((ushort)local_4018 >> 8);
    if (local_4010 + 2 == pbVar10) {
      pbVar10 = pbVar10 + -2;
    }
    *param_4 = (int)pbVar10 - (int)param_3;
    return;
  }
  do {
    *pbVar8 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    local_4018 = local_4018 >> 1;
    pbVar9 = pbVar8;
    while( true ) {
      pbVar8 = pbVar9 + 1;
      sVar1 = sVar1 + 1;
      sVar3 = sVar3 + -1;
      if (sVar3 == 0) {
        pbVar10 = pbVar8;
        if (sVar1 == 0x10) {
          local_4010[1] = (byte)(local_4018 >> 8);
          *local_4010 = (byte)local_4018;
          sVar1 = 0;
          local_4018 = 0;
          pbVar10 = pbVar9 + 3;
          local_4010 = pbVar8;
        }
        goto LAB_360fdcd3;
      }
LAB_360fdd6d:
      bVar2 = *pbVar7;
      uVar6 = (int)((((uint)bVar2 << 4 ^ (uint)pbVar7[1]) << 4 ^ (uint)pbVar7[2]) * 0x9e5f) >> 4 &
              0xfff;
      pbVar10 = (byte *)auStack_4000[uVar6];
      auStack_4000[uVar6] = pbVar7;
      uVar6 = (int)pbVar7 - (int)pbVar10;
      if ((((0xfff < uVar6) || (pbVar10 < param_1)) || (uVar6 == 0)) || (*pbVar10 != bVar2)) break;
      if (pbVar10[1] != pbVar7[1]) break;
      if (pbVar10[2] != pbVar7[2]) break;
      pbVar4 = pbVar7 + 4;
      if (pbVar10[3] == pbVar7[3]) {
        bVar2 = *pbVar4;
        pbVar4 = pbVar7 + 5;
        if (pbVar10[4] == bVar2) {
          bVar2 = *pbVar4;
          pbVar4 = pbVar7 + 6;
          if (pbVar10[5] == bVar2) {
            bVar2 = *pbVar4;
            pbVar4 = pbVar7 + 7;
            if (pbVar10[6] == bVar2) {
              bVar2 = *pbVar4;
              pbVar4 = pbVar7 + 8;
              if (pbVar10[7] == bVar2) {
                bVar2 = *pbVar4;
                pbVar4 = pbVar7 + 9;
                if (pbVar10[8] == bVar2) {
                  bVar2 = *pbVar4;
                  pbVar4 = pbVar7 + 10;
                  if (pbVar10[9] == bVar2) {
                    bVar2 = *pbVar4;
                    pbVar4 = pbVar7 + 0xb;
                    if (pbVar10[10] == bVar2) {
                      bVar2 = *pbVar4;
                      pbVar4 = pbVar7 + 0xc;
                      if (pbVar10[0xb] == bVar2) {
                        bVar2 = *pbVar4;
                        pbVar4 = pbVar7 + 0xd;
                        if (pbVar10[0xc] == bVar2) {
                          bVar2 = *pbVar4;
                          pbVar4 = pbVar7 + 0xe;
                          if (((pbVar10[0xd] == bVar2) &&
                              (bVar2 = *pbVar4, pbVar4 = pbVar7 + 0xf, pbVar10[0xe] == bVar2)) &&
                             (bVar2 = *pbVar4, pbVar4 = pbVar7 + 0x10, pbVar10[0xf] == bVar2)) {
                            pbVar4 = pbVar7 + 0x11;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *pbVar8 = (((byte)(uVar6 >> 4) & 0xf0) + (char)(pbVar4 + (-1 - (int)pbVar7))) - 1;
      pbVar9 = pbVar8 + 1;
      *pbVar9 = (byte)uVar6;
      pbVar7 = pbVar7 + ((uint)(pbVar4 + (-1 - (int)pbVar7)) & 0xffff);
      local_4018 = local_4018 >> 1 | 0x8000;
    }
  } while( true );
}

