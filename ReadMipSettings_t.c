
/* public: void __thiscall CEditModel::ReadMipSettings_t(class CTStream *,long) */

void __thiscall CEditModel::ReadMipSettings_t(CEditModel *this,CTStream *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  MappingSurface *this_00;
  int iVar3;
  int local_8c;
  undefined4 local_81;
  undefined1 local_7d;
  MappingSurface local_7c [48];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa90a0  2969  ?ReadMipSettings_t@CEditModel@@QAEXPAVCTStream@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621354c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MappingSurface::MappingSurface(local_7c);
  local_7d = DAT_362317d0;
  local_4 = 0;
  local_81 = DAT_362317cc;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_81);
  local_8c = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < local_8c) {
    do {
      MappingSurface::ReadSettings_t(local_7c,param_1);
      iVar3 = 0;
      iVar1 = FUN_3600c0e0((undefined4 *)(this + param_2 * 0x60 + 0x110));
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          this_00 = (MappingSurface *)(*(int *)(this + param_2 * 0x60 + 0x114) + iVar1);
          iVar2 = MappingSurface::operator==(this_00,local_7c);
          if (iVar2 != 0) {
            *(undefined4 *)(this_00 + 0x4c) = local_30;
            *(undefined4 *)(this_00 + 0x50) = local_2c;
            *(undefined4 *)(this_00 + 0x48) = local_34;
            *(undefined4 *)(this_00 + 0x30) = local_4c;
            *(undefined4 *)(this_00 + 0x34) = local_48;
            *(undefined4 *)(this_00 + 0x38) = local_44;
            *(undefined4 *)(this_00 + 0x3c) = local_40;
            *(undefined4 *)(this_00 + 0x40) = local_3c;
            *(undefined4 *)(this_00 + 0x44) = local_38;
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x70;
          iVar2 = FUN_3600c0e0((undefined4 *)(this + param_2 * 0x60 + 0x110));
        } while (iVar3 < iVar2);
      }
      local_8c = local_8c + -1;
    } while (local_8c != 0);
  }
  local_4 = 0xffffffff;
  MappingSurface::~MappingSurface(local_7c);
  ExceptionList = local_c;
  return;
}

