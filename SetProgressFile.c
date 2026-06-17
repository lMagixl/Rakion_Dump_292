
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl SetProgressFile(class CTFileName const &) */

void __cdecl SetProgressFile(CTFileName *param_1)

{
  char *pcVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x31ab0  3565  ?SetProgressFile@@YAXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fa4e;
  local_c = ExceptionList;
  _DAT_362be3a8 = 0xffffffff;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362be3a4,1);
  local_4 = 0;
  pcVar1 = StringDuplicate(*(char **)param_1);
  StringFree(DAT_362be3b4);
  _DAT_362be3b8 = *(undefined4 *)(param_1 + 4);
  local_4 = 0xffffffff;
  DAT_362be3b4 = pcVar1;
  CTSingleLock::~CTSingleLock(local_18);
  FUN_36031970(3);
  ExceptionList = local_c;
  return;
}

