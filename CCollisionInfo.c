
/* public: __thiscall CCollisionInfo::CCollisionInfo(class CCollisionInfo const &) */

CCollisionInfo * __thiscall
CCollisionInfo::CCollisionInfo(CCollisionInfo *this,CCollisionInfo *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12bef0  63  ??0CCollisionInfo@@QAE@ABV0@@Z */
  puStack_8 = &LAB_36218b0a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  local_4 = 0;
  *(undefined4 *)(this + 0x18) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x20) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x24) = 0xff61b1e6;
  *(undefined4 *)(this + 0x28) = 0xff61b1e6;
  *(undefined4 *)(this + 0x2c) = 0xff61b1e6;
  FUN_360d1960(this,(undefined4 *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  ExceptionList = local_c;
  return this;
}

