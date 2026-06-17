
/* public: unsigned int __thiscall Xenesis::xFileManager::getFileRealSize(char const *) */

uint __thiscall Xenesis::xFileManager::getFileRealSize(xFileManager *this,char *param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1eae0  4187  ?getFileRealSize@xFileManager@Xenesis@@QAEIPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620eb58;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_3601df80(local_28,(_String_base *)param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_36018b10(this + 0x7c,&param_1,local_28);
  pvVar2 = local_24;
  local_4 = 0xffffffff;
  if (0xf < local_10) {
    FUN_36018c30();
    operator_delete(pvVar2);
  }
  if (param_1 == *(char **)(this + 0x84)) {
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return *(uint *)(*(int *)(param_1 + 0x24) + 0x20);
}

