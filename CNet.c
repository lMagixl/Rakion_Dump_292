
/* public: __thiscall CNet::CNet(void) */

CNet * __thiscall CNet::CNet(CNet *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x104260  165  ??0CNet@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217741;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_361a2740(this + 0x2c);
  local_4 = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 1;
  puVar1 = (undefined4 *)FUN_361bf99c(8);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_36105dd0(puVar1);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)(this + 8) = uVar2;
  puVar1 = (undefined4 *)thunk_FUN_361bf99c(0xa4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 0x14;
    _eh_vector_constructor_iterator_(puVar3,8,0x14,FUN_36105dd0,thunk_FUN_36105ea0);
  }
  *(undefined4 **)(this + 0xc) = puVar3;
  *(undefined2 *)(this + 0x10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  ExceptionList = local_c;
  return this;
}

