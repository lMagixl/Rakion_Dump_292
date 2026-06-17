
/* void __cdecl SaveIntVar(class CTFileName const &,long &) */

void __cdecl SaveIntVar(CTFileName *param_1,long *param_2)

{
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x24bf0  3195  ?SaveIntVar@@YAXABVCTFileName@@AAJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f036;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  CTString::PrintF((CTString *)*param_2,(char *)&local_10,&DAT_362240b0,(CTString *)*param_2);
  CTString::SaveVar((CTString *)&local_10,param_1);
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return;
}

