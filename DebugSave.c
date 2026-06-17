
/* public: void __thiscall CNetworkLibrary::DebugSave(void) */

void __thiscall CNetworkLibrary::DebugSave(CNetworkLibrary *this)

{
  char *pcVar1;
  char *local_24;
  undefined4 local_20;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf48a0  1452  ?DebugSave@CNetworkLibrary@@QAEXXZ */
  puStack_c = &LAB_362166fd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  pcVar1 = StringDuplicate(s_Save_Debug_sav_36234d2c);
  local_8._0_1_ = 1;
  local_18 = pcVar1;
  local_24 = StringDuplicate(pcVar1);
  local_20 = 0;
  local_8._0_1_ = 2;
  Save_t(this,(CTFileName *)&local_24);
  local_8._0_1_ = 1;
  StringFree(local_24);
  local_8 = (uint)local_8._1_3_ << 8;
  StringFree(pcVar1);
  ExceptionList = local_10;
  return;
}

