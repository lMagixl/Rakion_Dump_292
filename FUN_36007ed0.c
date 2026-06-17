
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36007ed0(void)

{
  char *pcVar1;
  char *_Source;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_118;
  undefined4 uStack_117;
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  _DAT_362b8af0 = s_T__SeriousSam_xbe_36222754._0_4_;
  _DAT_362b8af4 = s_T__SeriousSam_xbe_36222754._4_4_;
  _DAT_362b8afc = s_T__SeriousSam_xbe_36222754._12_4_;
  _DAT_362b8b00 = s_T__SeriousSam_xbe_36222754._16_2_;
  _local_118 = _local_118 & 0xff00;
  puVar3 = &uStack_117;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  _DAT_362b8bf8 = 0x5c3a54;
  _DAT_362b8af8 = s_T__SeriousSam_xbe_36222754._8_4_;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_362b8af0,0x103);
  strncpy(&local_118,&DAT_362b8af0,0x103);
  DAT_362b8cfb = 0;
  FUN_36007e90(&local_118);
  pcVar1 = strchr(&local_118,0x5c);
  if (pcVar1 == (char *)0x0) {
    _local_118 = 0x5c;
    pcVar1 = &local_118;
  }
  iVar2 = _strnicmp(pcVar1,s__gubed_3622276c,6);
  if (iVar2 == 0) {
    pcVar1 = pcVar1 + 6;
  }
  *pcVar1 = '\\';
  pcVar1 = pcVar1 + 1;
  _Source = strchr(pcVar1,0x5c);
  if (_Source == (char *)0x0) {
    pcVar1[0] = '\\';
    pcVar1[1] = '\0';
    _Source = pcVar1;
  }
  FUN_36007e90(_Source);
  strncpy(&DAT_362b8bf8,_Source,0x103);
  DAT_362b8cfb = 0;
  return;
}

