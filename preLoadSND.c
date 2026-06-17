
/* public: void __thiscall PreLoadMng::preLoadSND(class CTString const &) */

void __thiscall PreLoadMng::preLoadSND(PreLoadMng *this,CTString *param_1)

{
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2f0f0  4265  ?preLoadSND@PreLoadMng@@QAEXABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f7af;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(*(char **)param_1);
  local_10 = 0;
  local_4 = 0;
  param_1 = (CTString *)CStock_CSoundData::Obtain_t(_pSoundStock,(CTFileName *)&local_14);
  local_4 = 0xffffffff;
  StringFree(local_14);
  FUN_3602f5c0(this + 0x24,&local_14,(uint *)&param_1);
  ExceptionList = local_c;
  return;
}

