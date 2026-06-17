
/* public: unsigned long __thiscall CEditModel::GetExistingPatchesMask(void) */

ulong __thiscall CEditModel::GetExistingPatchesMask(CEditModel *this)

{
  CTFileName *this_00;
  int iVar1;
  ulong uVar2;
  int iVar3;
  CEditModel *this_01;
  char *pcVar4;
  
                    /* 0xa8980  1860  ?GetExistingPatchesMask@CEditModel@@QAEKXZ */
  uVar2 = 0;
  iVar3 = 0;
  this_01 = this + 0xcfc;
  do {
    pcVar4 = &DAT_362317bf;
    this_00 = CTextureObject::GetName((CTextureObject *)this_01);
    iVar1 = CTString::operator!=((CTString *)this_00,pcVar4);
    if (iVar1 != 0) {
      uVar2 = uVar2 | 1 << ((byte)iVar3 & 0x1f);
    }
    iVar3 = iVar3 + 1;
    this_01 = this_01 + 0x28;
  } while (iVar3 < 0x20);
  return uVar2;
}

