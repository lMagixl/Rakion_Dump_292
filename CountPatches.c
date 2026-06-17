
/* public: long __thiscall CEditModel::CountPatches(void) */

long __thiscall CEditModel::CountPatches(CEditModel *this)

{
  CTFileName *this_00;
  int iVar1;
  long lVar2;
  CEditModel *this_01;
  int iVar3;
  char *pcVar4;
  
                    /* 0xa8940  1407  ?CountPatches@CEditModel@@QAEJXZ */
  lVar2 = 0;
  this_01 = this + 0xcfc;
  iVar3 = 0x20;
  do {
    pcVar4 = &DAT_362317be;
    this_00 = CTextureObject::GetName((CTextureObject *)this_01);
    iVar1 = CTString::operator!=((CTString *)this_00,pcVar4);
    if (iVar1 != 0) {
      lVar2 = lVar2 + 1;
    }
    this_01 = this_01 + 0x28;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return lVar2;
}

