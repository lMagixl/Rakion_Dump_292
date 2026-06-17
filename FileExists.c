
/* int __cdecl FileExists(class CTFileName const &) */

int __cdecl FileExists(CTFileName *param_1)

{
  int iVar1;
  CTFileStream local_88 [116];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x42e50  1613  ?FileExists@@YAHABVCTFileName@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_362110c1;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff68;
  ExceptionList = &local_10;
  iVar1 = CTString::operator==((CTString *)param_1,&DAT_36227498);
  if (iVar1 == 0) {
    local_8 = 0;
    CTFileStream::CTFileStream(local_88);
    local_8._0_1_ = 1;
    CTFileStream::Open_t(local_88,param_1,1);
    local_8 = (uint)local_8._1_3_ << 8;
    CTFileStream::~CTFileStream(local_88);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

