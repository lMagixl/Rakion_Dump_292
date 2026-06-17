
/* public: __thiscall CAOTimeInfo::CAOTimeInfo(unsigned long,unsigned long,int,class CTString) */

CAOTimeInfo * __thiscall
CAOTimeInfo::CAOTimeInfo
          (CAOTimeInfo *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_5)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x19e960  9  ??0CAOTimeInfo@@QAE@KKHVCTString@@@Z */
  puStack_8 = &LAB_3621b4d0;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x10) = param_3;
  pcVar1 = StringDuplicate(param_5);
  *(char **)(this + 0x14) = pcVar1;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = 0;
  local_4 = 0xffffffff;
  StringFree(param_5);
  ExceptionList = local_c;
  return this;
}

