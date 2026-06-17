
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CGfxLibrary::~CGfxLibrary(void) */

void __thiscall CGfxLibrary::~CGfxLibrary(CGfxLibrary *this)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8a0d0  425  ??1CGfxLibrary@@QAE@XZ */
  puStack_8 = &LAB_3621270f;
  pvStack_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  FUN_36084650();
  iVar1 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
  if (iVar1 != 0) {
    operator_delete__(DAT_362c54dc);
    _DAT_362c54d8 = 0;
    DAT_362c54dc = (void *)0x0;
    DAT_362c54e0 = 0;
  }
  iVar1 = FUN_36084100((undefined4 *)&DAT_362c54e8);
  if (iVar1 != 0) {
    operator_delete__(DAT_362c54ec);
    _DAT_362c54e8 = 0;
    DAT_362c54ec = (void *)0x0;
    _DAT_362c54f0 = 0;
  }
  iVar1 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
  if (iVar1 != 0) {
    operator_delete__(DAT_362c54fc);
    _DAT_362c54f8 = 0;
    DAT_362c54fc = (void *)0x0;
    DAT_362c5500 = 0;
  }
  puVar2 = &DAT_362c550c;
  do {
    iVar1 = FUN_36061fd0(puVar2 + -1);
    if (iVar1 != 0) {
      operator_delete__((void *)*puVar2);
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    puVar2 = puVar2 + 4;
  } while ((int)puVar2 < 0x362c554c);
  iVar1 = FUN_3600bda0((undefined4 *)&DAT_362c5558);
  if (iVar1 != 0) {
    operator_delete__(DAT_362c555c);
    _DAT_362c5558 = 0;
    DAT_362c555c = (void *)0x0;
    DAT_362c5560 = 0;
  }
  iVar1 = FUN_3600bda0((undefined4 *)&DAT_362c5548);
  if (iVar1 != 0) {
    operator_delete__(DAT_362c554c);
    _DAT_362c5548 = 0;
    DAT_362c554c = (void *)0x0;
    DAT_362c5550 = 0;
  }
  StopDisplayMode(this);
  *(undefined4 *)(_ptdFlat + 0x60) = 0;
  (*(code *)**(undefined4 **)_ptdFlat)(1);
  _ptdFlat = (CTextureData *)0x0;
  puStack_8._0_1_ = 2;
  StringFree(*(char **)(this + 0xad0));
  puStack_8._0_1_ = 1;
  StringFree(*(char **)(this + 0xacc));
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  StringFree(*(char **)(this + 0xac8));
  puStack_8 = (undefined1 *)0xffffffff;
  _eh_vector_destructor_iterator_(this,0x518,2,(_func_void_void_ptr *)&LAB_3600d020);
  ExceptionList = this;
  return;
}

