
CAttachmentModelObject * __thiscall FUN_360bbd80(void *this,byte param_1)

{
  CAttachmentModelObject::~CAttachmentModelObject(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

