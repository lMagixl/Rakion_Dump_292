
/* public: void __thiscall CEntity::SetModelAttachmentSpecularTexture(long,long) */

void __thiscall CEntity::SetModelAttachmentSpecularTexture(CEntity *this,long param_1,long param_2)

{
  CAttachmentModelObject *pCVar1;
  CEntityComponent *pCVar2;
  
                    /* 0x1256f0  3521  ?SetModelAttachmentSpecularTexture@CEntity@@QAEXJJ@Z */
  pCVar1 = CModelObject::GetAttachmentModel(*(CModelObject **)(this + 0x7c),param_1);
  pCVar2 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),1,param_2);
  CAnimObject::SetData((CAnimObject *)(pCVar1 + 0x78),*(CAnimData **)(pCVar2 + 0x14));
  return;
}

