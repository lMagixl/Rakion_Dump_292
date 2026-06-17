
facet * __cdecl FUN_3600aa90(locale *param_1)

{
  code *pcVar1;
  facet *this;
  uint uVar2;
  facet *local_24;
  _Lockit local_20 [4];
  _Lockit local_1c [4];
  bad_cast local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::_Lockit::_Lockit(local_1c,0);
  pcVar1 = id_exref;
  local_24 = DAT_362b8df8;
  local_4 = 0;
  if (*(int *)id_exref == 0) {
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)pcVar1 == 0) {
      *(int *)_Id_cnt_exref = *(int *)_Id_cnt_exref + 1;
      *(undefined4 *)pcVar1 = *(undefined4 *)_Id_cnt_exref;
    }
    std::_Lockit::~_Lockit(local_20);
  }
  this = std::locale::_Getfacet(param_1,*(uint *)pcVar1);
  if ((this == (facet *)0x0) && (this = local_24, local_24 == (facet *)0x0)) {
    uVar2 = std::ctype<char>::_Getcat(&local_24);
    this = local_24;
    if (uVar2 == 0xffffffff) {
      bad_cast::bad_cast(local_18,s_bad_cast_36223454);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_18,(ThrowInfo *)&DAT_3624d780);
    }
    DAT_362b8df8 = local_24;
    std::locale::facet::_Incref(local_24);
    std::locale::facet::_Register(this);
  }
  local_4 = 0xffffffff;
  std::_Lockit::~_Lockit(local_1c);
  ExceptionList = local_c;
  return this;
}

