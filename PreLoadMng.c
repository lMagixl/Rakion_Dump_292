
/* public: __thiscall PreLoadMng::PreLoadMng(class PreLoadMng const &) */

PreLoadMng * __thiscall PreLoadMng::PreLoadMng(PreLoadMng *this,PreLoadMng *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2ff40  359  ??0PreLoadMng@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f85e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_3602fa70(this,(int)param_1);
  local_4 = 0;
  FUN_3602fb60(this + 0xc,(int)(param_1 + 0xc));
  local_4._0_1_ = 1;
  FUN_3602fc50(this + 0x18,(int)(param_1 + 0x18));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_3602fd40(this + 0x24,(int)(param_1 + 0x24));
  ExceptionList = local_c;
  return this;
}

