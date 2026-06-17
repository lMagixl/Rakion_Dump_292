
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36115210(int param_1)

{
  int iVar1;
  CRelationSrc *pCVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  float10 fVar6;
  float local_88;
  float local_84;
  float fStack_80;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [40];
  undefined4 local_44 [16];
  
  puVar5 = *(undefined1 **)(param_1 + 0xd8c);
  iVar3 = *(int *)(param_1 + 0xd90);
  if (DAT_362cce78 != 0) {
    DAT_362a4190 = 1;
  }
  if ((*(byte *)(*(int *)(puVar5 + 0x668) + 0x10) & 2) != 0) {
    *(undefined4 *)(param_1 + 0xd64) = 0;
    if (((DAT_362fcbdc != 0) && (DAT_362a4190 != 0)) &&
       (iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x38) + 0x14) + 0x668) + 0xbc))
                          (*(uint *)(iVar3 + 0x44) >> 0xc & 0xf,local_44), iVar1 != 0)) {
      if (DAT_362c3b14 == 0) {
        FUN_360722f0(local_44,(float *)(*(int *)(puVar5 + 0x664) + 0x40),
                     (float *)(*(int *)(puVar5 + 0x664) + 0xf8));
      }
      *(undefined4 *)(param_1 + 0xd64) = 1;
    }
    *(undefined4 *)(param_1 + 0xd68) = 0;
    if ((DAT_362fcbe0 != 0) && (DAT_362a4190 != 0)) {
      iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x38) + 0x14) + 0x664);
      local_88 = -*(float *)(iVar1 + 0x110);
      local_84 = -*(float *)(iVar1 + 0x114);
      fStack_80 = -*(float *)(iVar1 + 0x118);
      iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x38) + 0x14) + 0x668) + 0xc4))
                        (*(uint *)(iVar3 + 0x44) >> 8 & 0xf,auStack_7c,&local_88);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0xd6c) == 0) {
          fVar6 = FUN_360e0680(*(int *)(iVar3 + 0x8c),(double *)(param_1 + 0x698),_DAT_36237340);
          if (fVar6 < (float10)_DAT_3622376c) {
            if (*(int *)(param_1 + 0x34) != 0) {
              for (piVar4 = *(int **)(*(int *)(param_1 + 0x34) + 0xac); puVar5 = &stack0xfffffffc,
                  *piVar4 != 0; piVar4 = (int *)*piVar4) {
                pCVar2 = CRelationLnk::GetSrc((CRelationLnk *)(piVar4 + -4));
                iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(pCVar2 + -100) + 0x14) + 0x668) +
                                    0xc4))(*(uint *)(pCVar2 + -0x58) >> 8 & 0xf,auStack_6c);
                if ((iVar3 != 0) &&
                   (fVar6 = FUN_360e0680(*(int *)(pCVar2 + -0x10),(double *)(param_1 + 0x698),
                                         _DAT_36237340), (float10)_DAT_3622376c <= fVar6)) {
                  *(undefined4 *)(param_1 + 0xd6c) = 1;
                  puVar5 = &stack0xfffffffc;
                  break;
                }
              }
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xd6c) = 1;
          }
        }
        if ((*(int *)(param_1 + 0xd6c) != 0) || (((uint)local_88 & 1) != 0)) {
          if (DAT_362c3b48 == 0) {
            FUN_36071ff0(&local_88,(undefined4 *)(*(int *)(puVar5 + 0x664) + 0x40),
                         *(int *)(puVar5 + 0x664) + 0xf8);
          }
          *(undefined4 *)(param_1 + 0xd68) = 1;
        }
      }
    }
  }
  return;
}

