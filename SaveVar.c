
/* public: void __thiscall CTString::SaveVar(class CTFileName const &) */

void __thiscall CTString::SaveVar(CTString *this,CTFileName *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x23f60  3200  ?SaveVar@CTString@@QAEXABVCTFileName@@@Z */
  puStack_c = &LAB_3620ef08;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  Save_t(this,param_1);
  ExceptionList = local_10;
  return;
}

