
/* public: void __thiscall CModelObject::SetData(class CModelData *) */

void __thiscall CModelObject::SetData(CModelObject *this,CModelData *param_1)

{
                    /* 0xb91a0  3429  ?SetData@CModelObject@@QAEXPAVCModelData@@@Z */
  RemoveAllAttachmentModels(this);
  CAnimObject::SetData((CAnimObject *)this,(CAnimData *)param_1);
  return;
}

