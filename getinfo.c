
/* private: struct Xenesis::xFileManager::xFolder * __thiscall Xenesis::xFileManager::getinfo(struct
   Xenesis::xFileManager::xFolder *,char const *)const  */

xFolder * __thiscall
Xenesis::xFileManager::getinfo(xFileManager *this,xFolder *param_1,char *param_2)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  xFolder *pxVar4;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1ea40  4214  ?getinfo@xFileManager@Xenesis@@ABEPAUxFolder@12@PAU312@PBD@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620eb38;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_3601df80(local_28,(_String_base *)param_2,(int)pcVar3 - (int)(param_2 + 1));
  local_4 = 0;
  pxVar4 = (xFolder *)FUN_36019bf0(param_1,local_28);
  pvVar2 = local_24;
  local_4 = 0xffffffff;
  if (0xf < local_10) {
    FUN_36018c30();
    operator_delete(pvVar2);
  }
  ExceptionList = local_c;
  return pxVar4;
}

