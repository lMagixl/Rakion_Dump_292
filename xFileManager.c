
/* public: __thiscall Xenesis::xFileManager::xFileManager(void) */

xFileManager * __thiscall Xenesis::xFileManager::xFileManager(xFileManager *this)

{
  undefined1 local_11;
  xFileManager *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a5d60  371  ??0xFileManager@Xenesis@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b9f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_361a4e80((undefined4 *)(this + 0x40));
  local_4 = 0;
  FUN_361a5d00((undefined4 *)(this + 0x48));
  local_4._0_1_ = 1;
  FUN_361a8130(this + 0x7c,&local_11);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_361a32f0((undefined4 *)(this + 0xa4));
  this[0x10ec] = (xFileManager)0x0;
  this[0x10ed] = (xFileManager)0x0;
  this[0x10ee] = (xFileManager)0x0;
  this[0x10ef] = (xFileManager)0x1;
  FUN_361a3200((LPCRITICAL_SECTION)(this + 0x10f0));
  *(xFileManager **)(this + 0x78) = this + 0x48;
  *(undefined4 *)(this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

