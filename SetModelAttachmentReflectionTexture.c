
/* public: void __thiscall CEntity::SetModelAttachmentReflectionTexture(long,long) */

void __thiscall
CEntity::SetModelAttachmentReflectionTexture(CEntity *this,long param_1,long param_2)

{
  CAttachmentModelObject *pCVar1;
  CEntityComponent *pCVar2;
  
                    /* 0x1256b0  3520  ?SetModelAttachmentReflectionTexture@CEntity@@QAEXJJ@Z */
  pCVar1 = CModelObject::GetAttachmentModel(*(CModelObject **)(this + 0x7c),param_1);
  pCVar2 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),1,param_2);
  CAnimObject::SetData((CAnimObject *)(pCVar1 + 0x60),*(CAnimData **)(pCVar2 + 0x14));
  return;
}

