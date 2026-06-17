
/* public: class CAttachmentModelObject * __thiscall CModelObject::AddAttachmentModel(long) */

CAttachmentModelObject * __thiscall
CModelObject::AddAttachmentModel(CModelObject *this,long param_1)

{
  CModelData *pCVar1;
  int iVar2;
  CAttachmentModelObject *this_00;
  CListNode *pCVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb8580  956
                       ?AddAttachmentModel@CModelObject@@QAEPAVCAttachmentModelObject@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213fa4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = GetData(this);
  pCVar1 = pCVar1 + 0x12a8;
  iVar2 = FUN_360b0e60((int)pCVar1);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return (CAttachmentModelObject *)0x0;
  }
  iVar2 = FUN_360b0e60((int)pCVar1);
  pCVar3 = (CListNode *)0x0;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (iVar2 + -1 < param_1) {
    param_1 = iVar2 + -1;
  }
  this_00 = (CAttachmentModelObject *)FUN_361bf99c(0xd4);
  local_4 = 0;
  if (this_00 != (CAttachmentModelObject *)0x0) {
    pCVar3 = (CListNode *)CAttachmentModelObject::CAttachmentModelObject(this_00);
  }
  local_4 = 0xffffffff;
  CListHead::AddTail((CListHead *)(this + 0x9c),pCVar3);
  *(long *)(pCVar3 + 8) = param_1;
  iVar2 = FUN_360b0e50(pCVar1,param_1);
  *(undefined4 *)(pCVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(pCVar3 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(pCVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(pCVar3 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(pCVar3 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(pCVar3 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  ExceptionList = local_c;
  return (CAttachmentModelObject *)pCVar3;
}

