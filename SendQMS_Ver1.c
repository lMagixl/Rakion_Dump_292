
/* public: void __thiscall CQMSLog::SendQMS_Ver1(class CTString,class CTString,class CTString) */

void __thiscall CQMSLog::SendQMS_Ver1(CQMSLog *this,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a1830  3353  ?SendQMS_Ver1@CQMSLog@@QAEXVCTString@@00@Z */
  puStack_8 = &LAB_3621b75d;
  local_c = ExceptionList;
  local_4 = 2;
  if (this[8] == (CQMSLog)0x0) {
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    ExceptionList = &local_c;
    StringFree(param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(param_3);
    local_4 = 0xffffffff;
    StringFree(param_4);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar2 = rand();
  if ((int)(uint)*(ushort *)(this + 0x24) < iVar2 % 100 + 1) {
    local_4._0_1_ = 1;
    StringFree(param_2);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(param_3);
    local_4 = 0xffffffff;
    StringFree(param_4);
    ExceptionList = local_c;
    return;
  }
  pcVar3 = param_4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_10 = (int)pcVar3 - (int)(param_4 + 1);
  if (local_10 == 0) {
    pcVar3 = StringDuplicate(*(char **)(this + 0x10));
    StringFree(param_4);
    param_4 = pcVar3;
  }
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_10 = (int)pcVar3 - (int)(param_3 + 1);
  pcVar3 = param_3;
  if (local_10 == 0) {
    pcVar3 = StringDuplicate(*(char **)(this + 0x14));
    StringFree(param_3);
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_10 = (int)pcVar4 - (int)(param_2 + 1);
  pcVar4 = param_2;
  if (local_10 == 0) {
    pcVar4 = StringDuplicate(*(char **)(this + 0x18));
    StringFree(param_2);
  }
  CTString::CTString(*(CTString **)(this + 4),(long)&local_14,(char *)0x1,
                     s__s__s__SS__s__s_SV__s_MT__s_MV___36243138,*(CTString **)(this + 4),
                     *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                     *(undefined4 *)(this + 0xc),param_4,pcVar3,pcVar4);
  InternetOpenUrlA(*(undefined4 *)this,local_14,0,0,0,1);
  StringFree(local_14);
  local_4._0_1_ = 1;
  StringFree(pcVar4);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(pcVar3);
  local_4 = 0xffffffff;
  StringFree(param_4);
  ExceptionList = local_c;
  return;
}

