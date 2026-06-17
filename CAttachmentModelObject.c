
/* public: __thiscall CAttachmentModelObject::CAttachmentModelObject(void) */

CAttachmentModelObject * __thiscall
CAttachmentModelObject::CAttachmentModelObject(CAttachmentModelObject *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x361d0  25  ??0CAttachmentModelObject@@QAE@XZ */
  puStack_8 = &LAB_3620ffd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  local_4 = 0;
  CModelObject::CModelObject((CModelObject *)(this + 0x24));
  ExceptionList = local_c;
  return this;
}

