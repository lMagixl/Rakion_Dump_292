
/* public: void __thiscall PreLoadMng::preLoadMDL(class CTString const &) */

void __thiscall PreLoadMng::preLoadMDL(PreLoadMng *this,CTString *param_1)

{
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2efd0  4263  ?preLoadMDL@PreLoadMng@@QAEXABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f78b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(*(char **)param_1);
  local_10 = 0;
  local_4 = 0;
  param_1 = (CTString *)CStock_CModelData::Obtain_t(_pModelStock,(CTFileName *)&local_14);
  local_4 = 0xffffffff;
  StringFree(local_14);
  FUN_3602f3e0(this + 0xc,&local_14,(uint *)&param_1);
  ExceptionList = local_c;
  return;
}

