
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CModelObject::AutoSetTextures(void) */

void __thiscall CModelObject::AutoSetTextures(CModelObject *this)

{
  CTString *this_00;
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  CTFileStream local_100 [20];
  int local_ec;
  char *local_8c;
  char *local_84 [2];
  char *local_7c;
  CModelObject *local_78;
  char *local_74;
  undefined4 local_70;
  char *local_6c;
  undefined4 local_68;
  char *local_64;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  char *local_50;
  undefined4 local_4c;
  undefined1 local_41;
  int local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xb5d10  1073  ?AutoSetTextures@CModelObject@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36213eb5;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeec;
  local_18 = DAT_362abd90;
  ExceptionList = &local_10;
  local_78 = this;
  GetName(this);
  local_8 = 0;
  local_60 = StringDuplicate(&DAT_36222fa0);
  local_5c = 0;
  local_8._0_1_ = 1;
  local_58 = StringDuplicate(&DAT_36222fa0);
  local_54 = 0;
  local_8._0_1_ = 2;
  local_6c = StringDuplicate(&DAT_36222fa0);
  local_68 = 0;
  local_8._0_1_ = 3;
  local_50 = StringDuplicate(&DAT_36222fa0);
  local_4c = 0;
  local_8._0_1_ = 5;
  local_64 = StringDuplicate(&DAT_36231d28);
  local_8._0_1_ = 6;
  this_00 = (CTString *)CTFileName::NoExt((CTFileName *)local_84);
  local_8._0_1_ = 7;
  puVar1 = (undefined4 *)CTString::operator+(this_00,(CTString *)&local_7c);
  local_8._0_1_ = 8;
  local_74 = StringDuplicate((char *)*puVar1);
  local_70 = 0;
  local_8._0_1_ = 0xc;
  StringFree(local_7c);
  local_8._0_1_ = 0xb;
  StringFree(local_8c);
  local_8._0_1_ = 10;
  StringFree(local_64);
  CTFileStream::CTFileStream(local_100);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  CTFileStream::Open_t(local_100,(CTFileName *)&local_74,1);
  lVar2 = CTStream::GetStreamSize((CTStream *)local_100);
  while( true ) {
    lVar3 = CTStream::GetPos_t((CTStream *)local_100);
    if (lVar2 + -4 <= lVar3) break;
    CTStream::PeekID_t((CTStream *)local_100);
    local_41 = DAT_36231d34;
    if (local_20 == DAT_36231d30) {
      CTStream::GetID_t((CTStream *)local_100);
      local_ec = local_ec + 4;
      ::operator>>((CTStream *)local_100,(CTFileName *)&local_60);
    }
    else {
      local_41 = DAT_36231d3c;
      if (local_20 == DAT_36231d38) {
        CTStream::GetID_t((CTStream *)local_100);
        ::operator>>((CTStream *)local_100,(CTFileName *)&local_58);
      }
      else {
        local_41 = DAT_36231d44;
        if (local_20 == DAT_36231d40) {
          CTStream::GetID_t((CTStream *)local_100);
          ::operator>>((CTStream *)local_100,(CTFileName *)&local_6c);
        }
        else {
          local_41 = DAT_36231d4c;
          if (local_20 == DAT_36231d48) {
            CTStream::GetID_t((CTStream *)local_100);
            ::operator>>((CTStream *)local_100,(CTFileName *)&local_50);
          }
          else {
            CTStream::Seek_t((CTStream *)local_100,1,1);
          }
        }
      }
    }
  }
  local_8._0_1_ = 10;
  CTFileStream::~CTFileStream(local_100);
  local_8 = CONCAT31(local_8._1_3_,5);
  StringFree(local_74);
  local_8 = 0xf;
  iVar4 = CTString::operator!=((CTString *)&local_60,&DAT_36231d4d);
  if (iVar4 != 0) {
    CTextureObject::SetData_t((CTextureObject *)(this + 0x24),(CTFileName *)&local_60);
  }
  iVar4 = CTString::operator!=((CTString *)&local_58,&DAT_36231d4e);
  if (iVar4 != 0) {
    CTextureObject::SetData_t((CTextureObject *)(this + 0x3c),(CTFileName *)&local_58);
  }
  iVar4 = CTString::operator!=((CTString *)&local_6c,&DAT_36231d4f);
  if (iVar4 != 0) {
    CTextureObject::SetData_t((CTextureObject *)(this + 0x54),(CTFileName *)&local_6c);
  }
  iVar4 = CTString::operator!=((CTString *)&local_50,&DAT_36231d50);
  if (iVar4 != 0) {
    CTextureObject::SetData_t((CTextureObject *)(this + 0x6c),(CTFileName *)&local_50);
  }
  local_8 = 3;
  StringFree(local_50);
  local_8._0_1_ = 2;
  StringFree(local_6c);
  local_8._0_1_ = 1;
  StringFree(local_58);
  local_8 = (uint)local_8._1_3_ << 8;
  StringFree(local_60);
  local_8 = 0xffffffff;
  StringFree(local_84[0]);
  ExceptionList = local_10;
  return;
}

