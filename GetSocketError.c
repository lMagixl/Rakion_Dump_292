
/* public: class CTString __thiscall CCommunicationInterface::GetSocketError(long) */

long __thiscall CCommunicationInterface::GetSocketError(CCommunicationInterface *this,long param_1)

{
  char *pcVar1;
  char *pcVar2;
  long in_stack_00000008;
  undefined4 uVar3;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xfb630  2128  ?GetSocketError@CCommunicationInterface@@QAE?AVCTString@@J@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217133;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  pcVar1 = ErrorDescription((ErrorTable *)&DAT_362a62fc,in_stack_00000008);
  uVar3 = *(undefined4 *)(this + 0x88);
  pcVar2 = Translate(s_ETRSSocket__d__Error__d___s__362357f4,4);
  CTString::PrintF((CTString *)&local_14,(char *)&local_14,pcVar2,uVar3,in_stack_00000008,pcVar1);
  pcVar1 = StringDuplicate(local_14);
  *(char **)param_1 = pcVar1;
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  StringFree(local_14);
  ExceptionList = local_c;
  return param_1;
}

