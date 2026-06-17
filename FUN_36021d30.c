
void __fastcall FUN_36021d30(CTCriticalSection *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620ee08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1 != (CTCriticalSection *)0x0) {
    ExceptionList = &local_c;
    if (*(FILE **)(param_1 + 0x28) != (FILE *)0x0) {
      ExceptionList = &local_c;
      fclose(*(FILE **)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      FreeMemory(*(void **)(param_1 + 8));
    }
    if (*(void **)(param_1 + 0x14) != (void *)0x0) {
      FreeMemory(*(void **)(param_1 + 0x14));
    }
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      FreeMemory(*(void **)(param_1 + 0x20));
    }
  }
  local_4 = 0xffffffff;
  CTCriticalSection::~CTCriticalSection(param_1);
  ExceptionList = local_c;
  return;
}

