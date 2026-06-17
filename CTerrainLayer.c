
/* public: __thiscall CTerrainLayer::CTerrainLayer(void) */

CTerrainLayer * __thiscall CTerrainLayer::CTerrainLayer(CTerrainLayer *this)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x179ac0  269  ??0CTerrainLayer@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a966;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 8) = pcVar1;
  local_4 = 0;
  iVar2 = FUN_361bf99c(0x3c);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_36179e00(iVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)this = uVar3;
  uVar3 = FUN_36176bb0();
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 0x54) = 0x3e800000;
  *(undefined4 *)(this + 0x5c) = 0x3e800000;
  *(undefined4 *)(this + 0x58) = 0x3e800000;
  *(undefined4 *)(this + 0x60) = 0x3e800000;
  *(undefined4 *)(this + 0x7c) = 0x3e800000;
  *(undefined4 *)(this + 0x84) = 0x3e800000;
  *(undefined4 *)(this + 0x80) = 0x3e800000;
  *(undefined4 *)(this + 0x88) = 0x3e800000;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x70) = 1;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0x3f000000;
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  ExceptionList = local_c;
  return this;
}

