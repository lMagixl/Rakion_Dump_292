
/* public: __thiscall CBrushSector::CBrushSector(void) */

CBrushSector * __thiscall CBrushSector::CBrushSector(CBrushSector *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* 0x13cf00  47  ??0CBrushSector@@QAE@XZ */
  puStack_8 = &LAB_362197ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x60) = 0xff61b1e6;
  *(undefined4 *)(this + 0x58) = 0x7f61b1e6;
  *(undefined4 *)(this + 100) = 0xff61b1e6;
  *(undefined4 *)(this + 0x5c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x68) = 0xff61b1e6;
  *(undefined4 *)(this + 0x6c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x78) = 0xff61b1e6;
  *(undefined4 *)(this + 0x70) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x7c) = 0xff61b1e6;
  *(undefined4 *)(this + 0x74) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x80) = 0xff61b1e6;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  local_4 = 7;
  uStack_3 = 0;
  puVar1 = (undefined4 *)FUN_361bf99c(0xc);
  local_4 = 8;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_360e05c0(puVar1);
  }
  local_4 = 7;
  *(undefined4 *)(this + 0x8c) = uVar2;
  CRelationDst::CRelationDst((CRelationDst *)(this + 0x90));
  local_4 = 9;
  CRelationSrc::CRelationSrc((CRelationSrc *)(this + 0x9c));
  _local_4 = CONCAT31(uStack_3,10);
  pcVar3 = StringDuplicate(&DAT_36238a84);
  *(char **)(this + 0xa8) = pcVar3;
  ExceptionList = local_c;
  return this;
}

