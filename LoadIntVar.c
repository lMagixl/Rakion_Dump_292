
/* void __cdecl LoadIntVar(class CTFileName const &,long &) */

void __cdecl LoadIntVar(CTFileName *param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  CTString *extraout_ECX;
  CTString *this;
  CTString *pCVar3;
  char *local_14;
  char *local_10;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x24700  2548  ?LoadIntVar@@YAXABVCTFileName@@AAJ@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_3620efcf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  CTString::LoadVar((CTString *)&stack0xffffffe8,param_1);
  iVar2 = CTString::operator!=
                    ((CTString *)&stack0xffffffe8,s_ETRSCannot_save_variable_to___s__3622407c + 0x26
                    );
  if (iVar2 != 0) {
    local_14 = StringDuplicate(pcVar1);
    local_4._0_1_ = 1;
    pcVar1 = StringDuplicate(&DAT_362240a4);
    local_4._0_1_ = 2;
    local_10 = pcVar1;
    iVar2 = CTString::RemovePrefix((CTString *)&local_14,(CTString *)&local_10);
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(pcVar1);
    if (iVar2 == 0) {
      pCVar3 = (CTString *)&stack0xffffffe8;
      this = extraout_ECX;
    }
    else {
      this = (CTString *)&local_14;
      pCVar3 = this;
    }
    CTString::ScanF(this,(char *)pCVar3);
    StringFree(local_10);
  }
  StringFree(local_14);
  ExceptionList = local_8;
  return;
}

