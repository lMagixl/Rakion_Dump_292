
/* public: void __thiscall CModelObject::SetTextureData(class CTextureData *) */

void __thiscall CModelObject::SetTextureData(CModelObject *this,CTextureData *param_1)

{
                    /* 0xb4b40  3611  ?SetTextureData@CModelObject@@QAEXPAVCTextureData@@@Z */
  CAnimObject::SetData((CAnimObject *)(this + 0x24),(CAnimData *)param_1);
  return;
}

