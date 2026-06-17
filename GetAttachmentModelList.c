
/* public: class CAttachmentModelObject * __cdecl CModelObject::GetAttachmentModelList(long,...) */

CAttachmentModelObject * __thiscall
CModelObject::GetAttachmentModelList(CModelObject *this,long param_1,...)

{
  CAttachmentModelObject *pCVar1;
  undefined4 *puVar2;
  int in_stack_00000008;
  
                    /* 0xb60c0  1715
                       ?GetAttachmentModelList@CModelObject@@QAAPAVCAttachmentModelObject@@JZZ */
  if (-1 < in_stack_00000008) {
    puVar2 = &stack0x00000008;
    while (pCVar1 = GetAttachmentModel((CModelObject *)param_1,in_stack_00000008),
          pCVar1 != (CAttachmentModelObject *)0x0) {
      in_stack_00000008 = puVar2[1];
      puVar2 = puVar2 + 1;
      param_1 = (long)(pCVar1 + 0x24);
      if (in_stack_00000008 < 0) {
        return pCVar1;
      }
    }
  }
  return (CAttachmentModelObject *)0x0;
}

