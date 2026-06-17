
/* public: int __thiscall CEditModel::GetFirstEmptyPatchIndex(long &) */

int __thiscall CEditModel::GetFirstEmptyPatchIndex(CEditModel *this,long *param_1)

{
  int iVar1;
  CEditModel *pCVar2;
  
                    /* 0xa8740  1867  ?GetFirstEmptyPatchIndex@CEditModel@@QAEHAAJ@Z */
  iVar1 = 0;
  *param_1 = 0;
  pCVar2 = this + 0xd10;
  do {
    if (*(int *)pCVar2 == 0) {
      *param_1 = iVar1;
      return 1;
    }
    iVar1 = iVar1 + 1;
    pCVar2 = pCVar2 + 0x28;
  } while (iVar1 < 0x20);
  return 0;
}

