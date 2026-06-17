
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class Xenesis2::Foundation::Memory::xEncryptMemory & __cdecl
   Xenesis2::Foundation::Memory::theEncryptMemory(void) */

xEncryptMemory * __cdecl Xenesis2::Foundation::Memory::theEncryptMemory(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x19d7a0  4427
                       ?theEncryptMemory@Memory@Foundation@Xenesis2@@YAAAVxEncryptMemory@123@XZ */
  puStack_8 = &LAB_3621b42e;
  local_c = ExceptionList;
  if ((_DAT_36381c5c & 1) == 0) {
    _DAT_36381c5c = _DAT_36381c5c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_3619d4c0((undefined4 *)&DAT_36381c08);
    _atexit((_func_4879 *)&LAB_362213f0);
  }
  ExceptionList = local_c;
  return (xEncryptMemory *)&DAT_36381c08;
}

