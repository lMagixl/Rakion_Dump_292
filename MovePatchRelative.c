
/* public: void __thiscall CEditModel::MovePatchRelative(long,class Vector<long,2>) */

void __thiscall CEditModel::MovePatchRelative(CEditModel *this,int param_1,int param_3,int param_4)

{
  CTFileName *pCVar1;
  int iVar2;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xaf180  2656  ?MovePatchRelative@CEditModel@@QAEXJV?$Vector@J$01@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213a04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = CTextureObject::GetName((CTextureObject *)(this + param_1 * 0x28 + 0xcfc));
  local_14 = StringDuplicate(*(char **)pCVar1);
  local_10 = *(undefined4 *)(pCVar1 + 4);
  local_4 = 0;
  iVar2 = CTString::operator==((CTString *)&local_14,&DAT_362317b2);
  if (iVar2 == 0) {
    *(int *)(this + param_1 * 0x28 + 0xd14) = *(int *)(this + param_1 * 0x28 + 0xd14) + param_3;
    *(int *)(this + param_1 * 0x28 + 0xd18) = *(int *)(this + param_1 * 0x28 + 0xd18) + param_4;
    CalculatePatchesPerPolygon(this);
  }
  local_4 = 0xffffffff;
  StringFree(local_14);
  ExceptionList = local_c;
  return;
}

