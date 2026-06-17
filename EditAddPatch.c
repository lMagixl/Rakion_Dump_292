
/* public: int __thiscall CEditModel::EditAddPatch(class CTFileName,class Vector<long,2>,long &) */

int __thiscall
CEditModel::EditAddPatch
          (CEditModel *this,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          long *param_6)

{
  CTString *this_00;
  long *plVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xaf2f0  1550
                       ?EditAddPatch@CEditModel@@QAEHVCTFileName@@V?$Vector@J$01@@AAJ@Z */
  plVar1 = param_6;
  puStack_c = &LAB_36213a28;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = GetFirstEmptyPatchIndex(this,param_6);
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    StringFree(param_2);
    ExceptionList = local_10;
    return 0;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  CTextureObject::SetData_t
            ((CTextureObject *)(this + *plVar1 * 0x28 + 0xcfc),(CTFileName *)&param_2);
  iVar2 = *plVar1;
  *(undefined4 *)(this + iVar2 * 0x28 + 0xd14) = param_4;
  *(undefined4 *)(this + iVar2 * 0x28 + 0xd18) = param_5;
  *(undefined4 *)(this + *plVar1 * 0x28 + 0xd1c) = 0x3f800000;
  this_00 = (CTString *)(*plVar1 * 5 + 0x19f);
  local_8 = 0;
  CTString::PrintF(this_00,(char *)(this + (int)this_00 * 8),s_Patch_02d_362317b4,*plVar1);
  CalculatePatchesPerPolygon(this);
  local_8 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_10;
  return 1;
}

