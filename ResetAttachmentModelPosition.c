
/* public: void __thiscall CModelObject::ResetAttachmentModelPosition(long) */

void __thiscall CModelObject::ResetAttachmentModelPosition(CModelObject *this,long param_1)

{
  int *piVar1;
  CModelData *pCVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0xb6100  3161  ?ResetAttachmentModelPosition@CModelObject@@QAEXJ@Z */
  piVar1 = *(int **)(this + 0x9c);
  do {
    piVar4 = piVar1;
    if ((int *)*piVar4 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)*piVar4;
  } while (piVar4[2] != param_1);
  pCVar2 = GetData(this);
  iVar3 = FUN_360b0e50(pCVar2 + 0x12a8,param_1);
  piVar4[3] = *(int *)(iVar3 + 0xc);
  piVar4[4] = *(int *)(iVar3 + 0x10);
  piVar4[5] = *(int *)(iVar3 + 0x14);
  piVar4[6] = *(int *)(iVar3 + 0x18);
  piVar4[7] = *(int *)(iVar3 + 0x1c);
  piVar4[8] = *(int *)(iVar3 + 0x20);
  return;
}

