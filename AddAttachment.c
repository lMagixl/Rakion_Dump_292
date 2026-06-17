
/* public: void __thiscall CEntity::AddAttachment(long,unsigned long,unsigned long) */

void __thiscall CEntity::AddAttachment(CEntity *this,long param_1,ulong param_2,ulong param_3)

{
  CAttachmentModelObject *pCVar1;
  CEntityComponent *pCVar2;
  
                    /* 0x126d30  954  ?AddAttachment@CEntity@@QAEXJKK@Z */
  pCVar1 = CModelObject::AddAttachmentModel(*(CModelObject **)(this + 0x7c),param_1);
  pCVar2 = ComponentForTypeAndID(this,2,param_2);
  CModelObject::SetData((CModelObject *)(pCVar1 + 0x24),*(CModelData **)(pCVar2 + 0x14));
  pCVar2 = ComponentForTypeAndID(this,1,param_3);
  CModelObject::SetTextureData((CModelObject *)(pCVar1 + 0x24),*(CTextureData **)(pCVar2 + 0x14));
  return;
}

