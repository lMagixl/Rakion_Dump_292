
CTString * __cdecl FUN_36037e50(CTString *param_1,CTString *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  CTString local_18 [4];
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621025e;
  local_c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_c;
  CTString::CTString(local_18,param_2);
  local_4 = 1;
  pcVar2 = CTString::operator_char_const_(local_18);
  uVar5 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_10 = (int)pcVar3 - (int)(pcVar2 + 1);
  if (local_10 != 0) {
    do {
      iVar4 = toupper((int)pcVar2[uVar5]);
      pcVar2[uVar5] = (char)iVar4;
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    } while (uVar5 < (uint)((int)pcVar3 - (int)(pcVar2 + 1)));
  }
  CTString::CTString(param_1,local_18);
  local_14 = 1;
  local_4 = local_4 & 0xffffff00;
  CTString::~CTString(local_18);
  ExceptionList = local_c;
  return param_1;
}

