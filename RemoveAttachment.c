
/* public: void __thiscall CEntity::RemoveAttachment(long) */

void __thiscall CEntity::RemoveAttachment(CEntity *this,long param_1)

{
                    /* 0x125bd0  3123  ?RemoveAttachment@CEntity@@QAEXJ@Z */
  CModelObject::RemoveAttachmentModel(*(CModelObject **)(this + 0x7c),param_1);
  return;
}

