
/* public: void __thiscall CEditModel::SetPatchStretch(long,float) */

void __thiscall CEditModel::SetPatchStretch(CEditModel *this,long param_1,float param_2)

{
  CTFileName *pCVar1;
  int iVar2;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xaf240  3546  ?SetPatchStretch@CEditModel@@QAEXJM@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213a16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = CTextureObject::GetName((CTextureObject *)(this + param_1 * 0x28 + 0xcfc));
  local_14 = StringDuplicate(*(char **)pCVar1);
  local_10 = *(undefined4 *)(pCVar1 + 4);
  local_4 = 0;
  iVar2 = CTString::operator==((CTString *)&local_14,&DAT_362317b3);
  if (iVar2 == 0) {
    *(float *)(this + param_1 * 0x28 + 0xd1c) = param_2;
    CalculatePatchesPerPolygon(this);
  }
  local_4 = 0xffffffff;
  StringFree(local_14);
  ExceptionList = local_c;
  return;
}

