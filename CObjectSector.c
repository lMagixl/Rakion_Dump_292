
/* public: __thiscall CObjectSector::CObjectSector(void) */

CObjectSector * __thiscall CObjectSector::CObjectSector(CObjectSector *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x53dd0  183  ??0CObjectSector@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211bc7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360542c0((CListHead *)this);
  local_4 = 0;
  FUN_360542e0((CListHead *)(this + 0x14));
  local_4._0_1_ = 1;
  FUN_36054310((CListHead *)(this + 0x28));
  local_4._0_1_ = 2;
  FUN_36054360((CListHead *)(this + 0x3c));
  local_4._0_1_ = 3;
  FUN_360543d0((CListHead *)(this + 0x50));
  local_4._0_1_ = 4;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  pcVar1 = StringDuplicate(&DAT_3622808c);
  *(char **)(this + 0x80) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_360e05c0((undefined4 *)(this + 0x84));
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  ExceptionList = local_c;
  return this;
}

