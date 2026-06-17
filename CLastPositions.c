
/* public: __thiscall CLastPositions::CLastPositions(class CLastPositions const &) */

CLastPositions * __thiscall
CLastPositions::CLastPositions(CLastPositions *this,CLastPositions *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x133900  122  ??0CLastPositions@@QAE@ABV0@@Z */
  puStack_8 = &LAB_36218f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  local_4 = 0;
  FUN_360fb1f0(this,(undefined4 *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = local_c;
  return this;
}

