
/* public: void __thiscall CModelObject::SetData_t(class CTFileName const &) */

void __thiscall CModelObject::SetData_t(CModelObject *this,CTFileName *param_1)

{
  int iVar1;
  CModelData *pCVar2;
  
                    /* 0xb96a0  3431  ?SetData_t@CModelObject@@QAEXABVCTFileName@@@Z */
  iVar1 = CTString::operator==((CTString *)param_1,&DAT_36231d26);
  if (iVar1 != 0) {
    SetData(this,(CModelData *)0x0);
    return;
  }
  pCVar2 = CStock_CModelData::Obtain_t(_pModelStock,param_1);
  SetData(this,pCVar2);
  CStock_CModelData::Release(_pModelStock,pCVar2);
  return;
}

