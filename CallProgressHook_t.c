
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl CallProgressHook_t(float) */

void __cdecl CallProgressHook_t(float param_1)

{
  CTSingleLock local_c [12];
  
                    /* 0x31b50  1141  ?CallProgressHook_t@@YAXM@Z */
  _DAT_362be3a8 = 0xffffffff;
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362be3a4,1);
  _DAT_362be3b0 = param_1;
  CTSingleLock::~CTSingleLock(local_c);
  FUN_36031970(1);
  FUN_36031840();
  return;
}

