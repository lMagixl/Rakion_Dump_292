
/* public: void __thiscall CAttachedModel::SetModel_t(class CTFileName) */

void __thiscall CAttachedModel::SetModel_t(CAttachedModel *this,char *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa81e0  3529  ?SetModel_t@CAttachedModel@@QAEXVCTFileName@@@Z */
  puStack_8 = &LAB_362133f0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CModelObject::SetData_t((CModelObject *)(this + 4),(CTFileName *)&param_2);
  CModelObject::AutoSetTextures((CModelObject *)(this + 4));
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

