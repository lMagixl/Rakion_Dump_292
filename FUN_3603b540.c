
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_3603b540(HANDLE param_1)

{
  int iVar1;
  int *unaff_EBX;
  ulong local_1b0;
  ulong local_1ac;
  char local_1a8 [80];
  char local_158 [80];
  char local_108 [260];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  FUN_3603af50(param_1,s__________________________________362268c0);
  _strtime(local_1a8);
  _strdate(local_158);
  FUN_3603af50(param_1,s_Crashed_at___s__s_362268fc);
  FUN_3603af50(param_1,s_Version___d__d_s_s_36226918);
  iVar1 = *unaff_EBX;
  FUN_3603afc0();
  FUN_3603af50(param_1,s_Exception_code___08X__s_3622692c);
  GetLogicalAddress(*(void **)(iVar1 + 0xc),local_108,0x104,&local_1ac,&local_1b0);
  FUN_3603af50(param_1,s_Fault_address___08X__02X__08X__s_36226948);
  iVar1 = unaff_EBX[1];
  FUN_3603af50(param_1,s_Registers__3622696c);
  FUN_3603af50(param_1,s_EAX__08X_EBX__08X_ECX__08X_EDX___3622697c);
  FUN_3603af50(param_1,s_CS_EIP__04X__08X_362269b4);
  FUN_3603af50(param_1,s_SS_ESP__04X__08X_EBP__08X_362269c8);
  FUN_3603af50(param_1,s_DS__04X_ES__04X_FS__04X_GS__04X_362269e4);
  FUN_3603af50(param_1,s_Flags__08X_36226a08);
  FUN_3603b410(iVar1);
  FUN_3603af50(param_1,&DAT_36226a14);
  return;
}

