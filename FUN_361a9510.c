
void __thiscall FUN_361a9510(void *this,DWORD param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bd3d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)((int)this + 8) == '\x01') {
    ExceptionList = &pvStack_c;
    FUN_361a3220((LPCRITICAL_SECTION)((int)this + 0x10));
    local_4 = 0;
    if (*(char *)((int)this + 8) == '\x01') {
      *(undefined1 *)((int)this + 8) = 0;
      FUN_361a3080((void *)((int)this + 0x28),0);
    }
    local_4 = 0xffffffff;
    FUN_361a3230((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  FUN_361a3280((void *)((int)this + 0xc),param_1);
  ExceptionList = pvStack_c;
  return;
}

