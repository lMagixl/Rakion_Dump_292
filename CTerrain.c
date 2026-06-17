
/* public: __thiscall CTerrain::CTerrain(void) */

CTerrain * __thiscall CTerrain::CTerrain(CTerrain *this)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x171800  265  ??0CTerrain@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a6c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  CListHead::Clear((CListHead *)(this + 0xc));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  puVar1 = (undefined4 *)FUN_361bf99c(0x120);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_36173990(puVar1);
  }
  *(undefined4 **)(this + 0x2c) = puVar1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  CListHead::AddTail((CListHead *)(_pGfx + 0xb24),(CListNode *)(this + 0x20));
  ExceptionList = local_c;
  return this;
}

