
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_3603b410(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  HANDLE unaff_ESI;
  undefined4 *puVar4;
  void *local_128;
  ulong local_124;
  int local_120;
  ulong local_11c;
  char local_118;
  undefined4 local_117;
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  FUN_3603af50(unaff_ESI,s_manual_stack_frame_walk_begin__36226828);
  FUN_3603af50(unaff_ESI,&DAT_3622684c);
  FUN_3603af50(unaff_ESI,s_Address_Frame_Logical_addr_Modul_36226850);
  local_128 = *(void **)(param_1 + 0xb8);
  local_120 = 0;
  puVar3 = *(undefined4 **)(param_1 + 0xb4);
  do {
    local_118 = '\0';
    puVar4 = &local_117;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    local_124 = 0;
    local_11c = 0;
    FUN_3603af50(unaff_ESI,s__08X__08X_3622687c);
    GetLogicalAddress(local_128,&local_118,0x104,&local_124,&local_11c);
    FUN_3603af50(unaff_ESI,s__adr___s__04X__08X_36226888);
    FUN_3603af50(unaff_ESI,&DAT_3622689c);
    local_128 = (void *)puVar3[1];
    puVar4 = (undefined4 *)*puVar3;
  } while ((((((uint)puVar4 & 3) == 0) && (puVar3 < puVar4)) &&
           (BVar1 = IsBadWritePtr(puVar4,8), BVar1 == 0)) &&
          (local_120 = local_120 + 1, puVar3 = puVar4, local_120 < 100));
  FUN_3603af50(unaff_ESI,s_manual_stack_frame_walk_end__362268a0);
  return;
}

