
/* unsigned long __cdecl GetFileCRC32_t(class CTFileName const &) */

ulong __cdecl GetFileCRC32_t(CTFileName *param_1)

{
  int iVar1;
  ulong uVar2;
  CTFileStream local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x42ef0  1865  ?GetFileCRC32_t@@YAKABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362110d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_360469f0((CTString *)param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_36046a50(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  CTFileStream::Open_t(local_80,param_1,1);
  uVar2 = CTFileStream::GetStreamCRC32_t(local_80);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return uVar2;
}

