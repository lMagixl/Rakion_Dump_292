
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CModelObject::AutoSetAttachments(void) */

void __thiscall CModelObject::AutoSetAttachments(CModelObject *this)

{
  CModelObject *this_00;
  int iVar1;
  int iVar2;
  CTString *this_01;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  CAttachmentModelObject *pCVar6;
  int iVar7;
  CTFileStream local_f8 [20];
  int *local_e4;
  undefined1 local_79;
  char *local_78;
  char *local_70 [2];
  char *local_68;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  long local_54;
  undefined4 local_4d;
  undefined1 local_49;
  int local_48;
  undefined1 local_44;
  char *local_40;
  undefined4 local_3c;
  char *local_38;
  char *local_34;
  CModelObject *local_30;
  int local_2c;
  int local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xb96f0  1072  ?AutoSetAttachments@CModelObject@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36214035;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffef8;
  local_18 = DAT_362abd90;
  ExceptionList = &local_10;
  local_30 = this;
  GetName(this);
  local_8 = 0;
  RemoveAllAttachmentModels(this);
  local_8._0_1_ = 1;
  local_34 = StringDuplicate(&DAT_36231d54);
  local_8._0_1_ = 2;
  this_01 = (CTString *)CTFileName::NoExt((CTFileName *)local_70);
  local_8._0_1_ = 3;
  puVar3 = (undefined4 *)CTString::operator+(this_01,(CTString *)&local_58);
  local_8._0_1_ = 4;
  local_60 = StringDuplicate((char *)*puVar3);
  local_5c = 0;
  local_8._0_1_ = 8;
  StringFree(local_58);
  local_8._0_1_ = 7;
  StringFree(local_78);
  local_8._0_1_ = 6;
  StringFree(local_34);
  CTFileStream::CTFileStream(local_f8);
  local_8 = CONCAT31(local_8._1_3_,9);
  CTFileStream::Open_t(local_f8,(CTFileName *)&local_60,1);
  local_54 = CTStream::GetStreamSize((CTStream *)local_f8);
  while( true ) {
    lVar4 = CTStream::GetPos_t((CTStream *)local_f8);
    if (local_54 + -4 <= lVar4) break;
    CTStream::PeekID_t((CTStream *)local_f8);
    local_44 = DAT_36231d60;
    if (local_20 == DAT_36231d5c) {
      CTStream::GetID_t((CTStream *)local_f8);
      local_48 = *local_e4;
      local_e4 = local_e4 + 1;
      for (local_2c = 0; iVar7 = 0, local_2c < local_48; local_2c = local_2c + 1) {
        local_38 = StringDuplicate(&DAT_36222fa0);
        local_8._0_1_ = 10;
        local_40 = StringDuplicate(&DAT_36222fa0);
        local_3c = 0;
        local_8._0_1_ = 0xb;
        local_68 = StringDuplicate(&DAT_36222fa0);
        local_64 = 0;
        iVar1 = *local_e4;
        local_e4 = local_e4 + 1;
        local_8 = CONCAT31(local_8._1_3_,0xc);
        ::operator>>((CTStream *)local_f8,(CTString *)&local_38);
        ::operator>>((CTStream *)local_f8,(CTFileName *)&local_40);
        iVar2 = DAT_36231d64;
        local_79 = DAT_36231d68;
        piVar5 = (int *)CTStream::PeekID_t((CTStream *)local_f8);
        if (*piVar5 == iVar2) {
          local_49 = DAT_36231d70;
          local_4d = DAT_36231d6c;
          CTStream::ExpectID_t((CTStream *)local_f8,(CChunkID *)&local_4d);
          iVar7 = *local_e4;
          local_e4 = local_e4 + 1;
        }
        else {
          ::operator>>((CTStream *)local_f8,(CTFileName *)&local_68);
        }
        if (iVar1 != 0) {
          pCVar6 = AddAttachmentModel(local_30,local_2c);
          this_00 = (CModelObject *)(pCVar6 + 0x24);
          SetData_t(this_00,(CTFileName *)&local_40);
          AutoSetTextures(this_00);
          CAnimObject::StartAnim((CAnimObject *)this_00,iVar7);
        }
        local_8._0_1_ = 0xb;
        StringFree(local_68);
        local_8._0_1_ = 10;
        StringFree(local_40);
        local_8 = CONCAT31(local_8._1_3_,9);
        StringFree(local_38);
      }
    }
    else {
      CTStream::Seek_t((CTStream *)local_f8,1,1);
    }
  }
  local_8._0_1_ = 6;
  CTFileStream::~CTFileStream(local_f8);
  local_8 = CONCAT31(local_8._1_3_,1);
  StringFree(local_60);
  piVar5 = *(int **)(local_30 + 0x9c);
  local_8 = 0;
  for (; *piVar5 != 0; piVar5 = (int *)*piVar5) {
    AutoSetAttachments((CModelObject *)(piVar5 + 9));
  }
  local_8 = 0xffffffff;
  StringFree(local_70[0]);
  ExceptionList = local_10;
  return;
}

