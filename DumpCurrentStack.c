
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl DumpCurrentStack(class CTFileStream *) */

void __cdecl DumpCurrentStack(CTFileStream *param_1)

{
  CTFileStream *lp;
  CTFileStream *lp_00;
  BOOL BVar1;
  int iVar2;
  int iVar3;
  CTFileStream *local_19c;
  ulong local_198;
  undefined4 auStack_194 [32];
  char local_114 [12];
  char local_108 [260];
  undefined4 local_4;
  
                    /* 0x3b2f0  1546  ?DumpCurrentStack@@YAXPAVCTFileStream@@@Z */
  local_4 = DAT_362abd90;
  _strtime(local_114);
  FUN_36037460((char *)param_1,&DAT_36226a1c);
  FUN_36037460((char *)param_1,s_Dumping_stack_at__s_36226a20);
  local_19c = param_1;
  iVar3 = 0;
  lp_00 = param_1;
  while( true ) {
    lp = *(CTFileStream **)lp_00;
    auStack_194[iVar3] = *(undefined4 *)(lp_00 + 4);
    if ((((uint)lp_00 & 3) != 0) || (lp <= lp_00)) break;
    BVar1 = IsBadWritePtr(lp_00,4);
    if (BVar1 != 0) break;
    BVar1 = IsBadWritePtr(lp,4);
    if ((BVar1 != 0) || (iVar3 = iVar3 + 1, lp_00 = lp, 0x1f < iVar3)) break;
  }
  iVar3 = 0;
  do {
    if ((void *)auStack_194[iVar3] == (void *)0x0) break;
    local_19c = (CTFileStream *)0x0;
    local_198 = 0;
    iVar2 = GetLogicalAddress((void *)auStack_194[iVar3],local_108,0x104,(ulong *)&local_19c,
                              &local_198);
    if (iVar2 != 0) {
      FUN_36037460((char *)param_1,s__adr___s__04X__08X_36226a38);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  FUN_36037460((char *)param_1,&DAT_36226a4c);
  return;
}

