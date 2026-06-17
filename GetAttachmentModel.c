
/* public: class CAttachmentModelObject * __thiscall CModelObject::GetAttachmentModel(long) */

CAttachmentModelObject * __thiscall
CModelObject::GetAttachmentModel(CModelObject *this,long param_1)

{
  CAttachmentModelObject *pCVar1;
  CAttachmentModelObject *pCVar2;
  
                    /* 0xb6090  1714
                       ?GetAttachmentModel@CModelObject@@QAEPAVCAttachmentModelObject@@J@Z */
  pCVar1 = *(CAttachmentModelObject **)(this + 0x9c);
  do {
    pCVar2 = pCVar1;
    if (*(CAttachmentModelObject **)pCVar2 == (CAttachmentModelObject *)0x0) {
      return (CAttachmentModelObject *)0x0;
    }
    pCVar1 = *(CAttachmentModelObject **)pCVar2;
  } while (*(int *)(pCVar2 + 8) != param_1);
  return pCVar2;
}

