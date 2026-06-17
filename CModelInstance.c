
/* public: __thiscall CModelInstance::CModelInstance(void) */

CModelInstance * __thiscall CModelInstance::CModelInstance(CModelInstance *this)

{
  char *pcVar1;
  int iVar2;
  CModelInstance *pCVar3;
  char *local_20;
  CModelInstance *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15ee00  150  ??0CModelInstance@@QAE@XZ */
  puStack_8 = &LAB_3621a399;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  local_4 = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x10;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  local_1c = this;
  FUN_360e7270((undefined4 *)(this + 0x34));
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  FUN_36160f30((undefined4 *)(this + 0x4c));
  local_4._0_1_ = 7;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xb4) = pcVar1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0x10;
  local_4._0_1_ = 9;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xf4) = pcVar1;
  *(undefined4 *)(this + 0xf8) = 0;
  local_4._0_1_ = 10;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x10c) = pcVar1;
  DAT_362fdef8 = DAT_362fdef8 + 1;
  *(undefined4 *)(this + 0x90) = 0x3f800000;
  *(undefined4 *)(this + 0x94) = 0x3f800000;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined4 *)(this + 200) = 1;
  *(undefined4 *)(this + 0x58) = 1;
  local_4._0_1_ = 0xb;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xec) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 0x3f800000;
  *(undefined4 *)(this + 0xfc) = 0;
  pCVar3 = this + 0x60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined4 *)(this + 0x74) = 0x3f800000;
  *(undefined4 *)(this + 0x88) = 0x3f800000;
  *(undefined4 *)(this + 0x114) = 0xbf800000;
  *(undefined4 *)(this + 0x118) = 0xbf800000;
  *(undefined4 *)(this + 0x9c) = 0xbf000000;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0xbf000000;
  local_18 = 0x3f000000;
  *(undefined4 *)(this + 0xa8) = 0x3f000000;
  local_14 = 0x40000000;
  local_10 = 0x3f000000;
  *(undefined4 *)(this + 0xac) = 0x40000000;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = 0x3f000000;
  local_20 = StringDuplicate(&DAT_3623cbd8);
  local_4._0_1_ = 0xc;
  SetName(this,(CTString *)&local_20);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  StringFree(local_20);
  local_20 = &stack0xffffffcc;
  pcVar1 = StringDuplicate(&DAT_3623cbd9);
  FUN_36032d10(this + 0x9c,pcVar1);
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

