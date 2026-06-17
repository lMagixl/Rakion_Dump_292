
/* class CModelInstance * __cdecl ParseSmcFile_t(class CTString const &) */

CModelInstance * __cdecl ParseSmcFile_t(CTString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x15fb10  2741  ?ParseSmcFile_t@@YAPAVCModelInstance@@ABVCTString@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621a3fe;
  local_10 = ExceptionList;
  DAT_362fdef4 = (CModelInstance *)0x0;
  ExceptionList = &local_10;
  StringDuplicate(&DAT_3623cca3);
  DAT_362fdef4 = CreateModelInstance();
  local_8 = 0;
  ParseSmcFile_t(DAT_362fdef4,param_1);
  ExceptionList = local_10;
  return DAT_362fdef4;
}

