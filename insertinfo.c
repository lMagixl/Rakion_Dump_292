
/* private: struct Xenesis::xFileManager::xFolder * __thiscall
   Xenesis::xFileManager::insertinfo(struct Xenesis::xFileManager::xFolder *,char const *,struct
   Xenesis::xFile::XFSFileInfo const &) */

xFolder * __thiscall
Xenesis::xFileManager::insertinfo
          (xFileManager *this,xFolder *param_1,char *param_2,XFSFileInfo *param_3)

{
  char cVar1;
  void *pvVar2;
  xFolder *pxVar3;
  char *pcVar4;
  _String_base local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1ef70  4223
                       ?insertinfo@xFileManager@Xenesis@@AAEPAUxFolder@12@PAU312@PBDABUXFSFileInfo@xFile@2@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ebb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)FUN_361bf99c(0x30);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pxVar3 = (xFolder *)0x0;
  }
  else {
    pxVar3 = (xFolder *)FUN_361a5d20(pvVar2,(undefined4 *)param_3);
  }
  local_4 = 0xffffffff;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_3601df80(local_28,(_String_base *)param_2,(int)pcVar4 - (int)(param_2 + 1));
  local_4 = 1;
  FUN_3601ee60(param_1,local_28,(int)pxVar3);
  pvVar2 = local_24;
  local_4 = 0xffffffff;
  if (0xf < local_10) {
    FUN_36018c30();
    operator_delete(pvVar2);
  }
  ExceptionList = local_c;
  return pxVar3;
}

