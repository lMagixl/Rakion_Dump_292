
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall CQMSLog::Initalize(class CTString,class CTString) */

bool __thiscall CQMSLog::Initalize(CQMSLog *this,char *param_2,char *param_3)

{
  CTString *this_00;
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  char *local_224;
  _SYSTEMTIME local_220;
  char local_210;
  undefined4 local_20f;
  char local_110;
  undefined4 local_10f;
  undefined1 local_10b;
  char local_10a;
  undefined1 local_109;
  char local_108;
  undefined1 local_107;
  char local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1a1570  2328  ?Initalize@CQMSLog@@QAE_NVCTString@@0@Z */
  puStack_8 = &LAB_3621b73b;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_4 = 1;
  ExceptionList = &local_c;
  this[8] = (CQMSLog)0x1;
  pcVar1 = StringDuplicate(param_3);
  StringFree(*(char **)(this + 0xc));
  *(char **)(this + 0xc) = pcVar1;
  GetLocalTime(&local_220);
  local_210 = '\0';
  puVar4 = &local_20f;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_110 = '\0';
  puVar4 = &local_10f;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  sprintf(&local_210,&DAT_362430f8,(uint)local_220.wYear);
  local_110 = local_20f._1_1_;
  local_10f._0_1_ = local_20f._2_1_;
  sprintf(&local_210,s__0_2d_362430fc,(uint)local_220.wMonth);
  local_10f._1_1_ = local_210;
  local_10f._2_1_ = (undefined1)local_20f;
  sprintf(&local_210,s__0_2d_36243104,(uint)local_220.wDay);
  local_10f._3_1_ = local_210;
  local_10b = (undefined1)local_20f;
  sprintf(&local_210,s__0_2d_3624310c,(uint)local_220.wHour);
  local_10a = local_210;
  local_109 = (undefined1)local_20f;
  sprintf(&local_210,s__0_2d_36243114,(uint)local_220.wMinute);
  local_108 = local_210;
  local_107 = (undefined1)local_20f;
  sprintf(&local_210,s__0_2d_3624311c,(uint)local_220.wSecond);
  local_106 = local_210;
  local_105 = (undefined1)local_20f;
  local_104 = 0;
  pcVar1 = StringDuplicate(&local_110);
  StringFree(*(char **)(this + 0x20));
  *(char **)(this + 0x20) = pcVar1;
  this_00 = (CTString *)(this + 0x1c);
  pcVar1 = StringDuplicate(param_2);
  StringFree(*(char **)this_00);
  *(char **)this_00 = pcVar1;
  local_224 = StringDuplicate(&DAT_36243124);
  local_4._0_1_ = 2;
  lVar2 = CTString::FindSubstr(this_00,(CTString *)&local_224);
  lVar2 = CTString::TrimLeft(this_00,lVar2 + 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  StringFree(local_224);
  CTString::TrimRight((CTString *)&param_2,lVar2 + -1);
  pcVar1 = StringDuplicate(param_2);
  StringFree(*(char **)(this + 4));
  *(char **)(this + 4) = pcVar1;
  iVar3 = InternetOpenA(s_RakionClient_36243128,0,0,0,0x10000000);
  *(int *)this = iVar3;
  if (iVar3 != 0) {
    InternetSetStatusCallback(iVar3,&DAT_361a1560);
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(param_2);
  local_4 = 0xffffffff;
  StringFree(param_3);
  ExceptionList = local_c;
  return true;
}

