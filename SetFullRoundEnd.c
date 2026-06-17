
/* public: void __thiscall FieldInfo::SetFullRoundEnd(void) */

void __thiscall FieldInfo::SetFullRoundEnd(FieldInfo *this)

{
  int *piVar1;
  FieldInfo *pFVar2;
  int *piVar3;
  FieldInfo *local_8;
  int local_4;
  
                    /* 0x19a700  3478  ?SetFullRoundEnd@FieldInfo@@QAEXXZ */
  local_8 = this + 0x48a4;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x48f4) = 0;
  pFVar2 = this + 0x504;
  local_4 = 0x14;
  do {
    if (pFVar2[-0x358] == (FieldInfo)0x3) {
      *(int *)(pFVar2 + -0x10) = 0;
      *(int *)(pFVar2 + -0xc) = 0;
      *(int *)(pFVar2 + -8) = -1;
      piVar1 = *(int **)pFVar2;
      piVar3 = (int *)*piVar1;
      *piVar1 = (int)piVar1;
      *(int *)(*(int *)pFVar2 + 4) = *(int *)pFVar2;
      *(int *)(pFVar2 + 4) = 0;
      if (piVar3 != *(int **)pFVar2) {
        do {
          piVar1 = (int *)*piVar3;
          FUN_3600b530((int)piVar3);
          operator_delete(piVar3);
          piVar3 = piVar1;
        } while (piVar1 != (int *)*(int *)pFVar2);
      }
      piVar1 = *(int **)(pFVar2 + 0xc);
      piVar3 = (int *)*piVar1;
      *piVar1 = (int)piVar1;
      *(int *)(*(int *)(pFVar2 + 0xc) + 4) = *(int *)(pFVar2 + 0xc);
      *(int *)(pFVar2 + 0x10) = 0;
      if (piVar3 != *(int **)(pFVar2 + 0xc)) {
        do {
          piVar1 = (int *)*piVar3;
          FUN_3600b530((int)piVar3);
          operator_delete(piVar3);
          piVar3 = piVar1;
        } while (piVar1 != (int *)*(int *)(pFVar2 + 0xc));
      }
      pFVar2[-0x358] = (FieldInfo)0x1;
      *(undefined4 *)local_8 = 0;
    }
    local_8 = local_8 + 4;
    pFVar2 = pFVar2 + 0x37c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

