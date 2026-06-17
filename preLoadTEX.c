
/* public: void __thiscall PreLoadMng::preLoadTEX(class CTString const &) */

void __thiscall PreLoadMng::preLoadTEX(PreLoadMng *this,CTString *param_1)

{
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2f060  4266  ?preLoadTEX@PreLoadMng@@QAEXABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f79d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(*(char **)param_1);
  local_10 = 0;
  local_4 = 0;
  param_1 = (CTString *)CStock_CTextureData::Obtain_t(_pTextureStock,(CTFileName *)&local_14);
  local_4 = 0xffffffff;
  StringFree(local_14);
  FUN_3602f4d0(this + 0x18,&local_14,(uint *)&param_1);
  ExceptionList = local_c;
  return;
}

