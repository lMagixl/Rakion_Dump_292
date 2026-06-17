
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl SetProgressDescription(class CTString const &) */

void __cdecl SetProgressDescription(CTString *param_1)

{
  char *pcVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x31a10  3564  ?SetProgressDescription@@YAXABVCTString@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fa3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_36031720(param_1);
  _DAT_362be3a8 = 0xffffffff;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362be3a4,1);
  local_4 = 0;
  pcVar1 = StringDuplicate(*(char **)param_1);
  StringFree(DAT_362be3ac);
  local_4 = 0xffffffff;
  DAT_362be3ac = pcVar1;
  CTSingleLock::~CTSingleLock(local_18);
  FUN_36031970(2);
  ExceptionList = local_c;
  return;
}

