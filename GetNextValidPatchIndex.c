
/* public: void __thiscall CEditModel::GetNextValidPatchIndex(long &) */

void __thiscall CEditModel::GetNextValidPatchIndex(CEditModel *this,long *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa8870  2016  ?GetNextValidPatchIndex@CEditModel@@QAEXAAJ@Z */
  plVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362134b4;
  local_c = ExceptionList;
  uVar4 = *param_1 + 1;
  ExceptionList = &local_c;
  if ((int)uVar4 < *param_1 + 0x20) {
    while( true ) {
      uVar3 = uVar4 & 0x8000001f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
      }
      param_1 = (long *)StringDuplicate(*(char **)(this + (uVar3 * 5 + 0x19f) * 8));
      local_4 = 0;
      iVar2 = CTString::operator!=((CTString *)&param_1,&DAT_362317b1);
      local_4 = 0xffffffff;
      if (iVar2 != 0) break;
      StringFree((char *)param_1);
      uVar4 = uVar4 + 1;
      if (*plVar1 + 0x20 <= (int)uVar4) {
        ExceptionList = local_c;
        return;
      }
    }
    *plVar1 = uVar3;
    StringFree((char *)param_1);
  }
  ExceptionList = local_c;
  return;
}

