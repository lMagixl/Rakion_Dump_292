
/* public: __thiscall CEntityClass::CEntityClass(class CDLLEntityClass *) */

CEntityClass * __thiscall CEntityClass::CEntityClass(CEntityClass *this,CDLLEntityClass *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12ff80  86  ??0CEntityClass@@QAE@PAVCDLLEntityClass@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSerial::CSerial((CSerial *)this);
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x14) = pcVar1;
  *(undefined4 *)(this + 0x18) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(CDLLEntityClass **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  StringFree(*(char **)(this + 0x14));
  *(char **)(this + 0x14) = pcVar1;
  ExceptionList = local_c;
  return this;
}

