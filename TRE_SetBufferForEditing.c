
/* void __cdecl TRE_SetBufferForEditing(class CTerrain *,unsigned short *,class CTRect,enum
   BufferType,long) */

void __cdecl
TRE_SetBufferForEditing
          (CTerrain *param_1,short *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int local_5c;
  float local_30 [12];
  
                    /* 0x175180  3717
                       ?TRE_SetBufferForEditing@@YAXPAVCTerrain@@PAGVCTRect@@W4BufferType@@J@Z */
  psVar7 = param_2;
  piVar2 = *(int **)(param_1 + 0x2c);
  iVar3 = piVar2[7];
  param_5 = param_5 - param_3;
  local_5c = param_6 - param_4;
  iVar5 = iVar3 + -1;
  iVar6 = piVar2[6];
  iVar1 = iVar6 + -1;
  if (param_7 == 1) {
    iVar1 = *piVar2;
    if (0 < local_5c) {
      param_2 = (short *)param_4;
      param_4 = iVar6 * param_4;
      do {
        if (((int)param_2 < 0) || (iVar3 <= (int)param_2)) {
          psVar7 = psVar7 + param_5;
        }
        else {
          iVar5 = param_3;
          param_7 = param_5;
          if (0 < param_5) {
            do {
              if ((-1 < iVar5) && (iVar5 < iVar6)) {
                *(short *)(iVar1 + (param_4 + iVar5) * 2) = *psVar7;
              }
              psVar7 = psVar7 + 1;
              param_7 = param_7 + -1;
              iVar5 = iVar5 + 1;
            } while (param_7 != 0);
          }
        }
        param_4 = param_4 + iVar6;
        param_2 = (short *)((int)param_2 + 1);
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      TR_GetMatrixFromEntity(local_30,param_1);
      TR_UpdateShadowMap(param_1,local_30,0x7f61b1e6,0x7f61b1e6,0x7f61b1e6,0xff61b1e6,0xff61b1e6,
                         0xff61b1e6,1);
    }
    FUN_36174ed0(9);
    return;
  }
  if (param_7 != 2) {
    if (param_7 == 3) {
      iVar3 = piVar2[2];
      if (0 < local_5c) {
        iVar6 = iVar1 * param_4;
        param_7 = local_5c;
        do {
          if ((param_4 < 0) || (iVar5 <= param_4)) {
            param_2 = param_2 + param_5;
          }
          else {
            iVar4 = param_3;
            iVar8 = param_5;
            if (0 < param_5) {
              do {
                if ((-1 < iVar4) && (iVar4 < iVar1)) {
                  *(char *)(iVar6 + iVar4 + iVar3) = (*param_2 == 0) + -1;
                }
                param_2 = param_2 + 1;
                iVar8 = iVar8 + -1;
                iVar4 = iVar4 + 1;
              } while (iVar8 != 0);
            }
          }
          iVar6 = iVar6 + iVar1;
          param_4 = param_4 + 1;
          param_7 = param_7 + -1;
        } while (param_7 != 0);
      }
      FUN_361731d0((byte *)param_1,1);
      TR_UpdateTopMap(param_1);
    }
    return;
  }
  iVar3 = *(int *)(*(int *)(piVar2[0x43] + param_8 * 0x94) + 0x30);
  if (0 < local_5c) {
    iVar6 = iVar1 * param_4;
    param_7 = local_5c;
    do {
      if ((param_4 < 0) || (iVar5 <= param_4)) {
        param_2 = param_2 + param_5;
      }
      else {
        iVar4 = param_3;
        iVar8 = param_5;
        if (0 < param_5) {
          do {
            if ((-1 < iVar4) && (iVar4 < iVar1)) {
              *(undefined1 *)(iVar6 + iVar4 + iVar3) = *(undefined1 *)((int)param_2 + 1);
            }
            param_2 = param_2 + 1;
            iVar8 = iVar8 + -1;
            iVar4 = iVar4 + 1;
          } while (iVar8 != 0);
        }
      }
      iVar6 = iVar6 + iVar1;
      param_4 = param_4 + 1;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  FUN_361733b0((byte *)param_1,param_8,1);
  TR_UpdateTopMap(param_1);
  return;
}

