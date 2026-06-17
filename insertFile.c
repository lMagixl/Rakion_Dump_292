
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: struct Xenesis::xFileManager::xFolder * __thiscall
   Xenesis::xFileManager::insertFile(char const *,bool,bool) */

xFolder * __thiscall
Xenesis::xFileManager::insertFile(xFileManager *this,char *param_1,bool param_2,bool param_3)

{
  xFolder *pxVar1;
  char ***pppcVar2;
  xFolder *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  xFolder *local_2c;
  char **local_28 [5];
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a6080  4221  ?insertFile@xFileManager@Xenesis@@AAEPAUxFolder@12@PBD_N1@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ba5e;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  parseFolder(this,&local_2c,(char *)&local_48);
  local_4 = 0;
  pppcVar2 = (char ***)local_28[0];
  if (local_14 < 0x10) {
    pppcVar2 = local_28;
  }
  pxVar1 = getinfo(this,local_48,(char *)pppcVar2);
  if (pxVar1 == (xFolder *)0x0) {
    local_40 = *(undefined4 *)(this + 0x14);
    local_44 = *(undefined4 *)(this + 0x10);
    local_34 = !param_2;
    local_33 = param_3;
    local_38 = 0;
    local_3c = 0;
    pppcVar2 = (char ***)local_28[0];
    if (local_14 < 0x10) {
      pppcVar2 = local_28;
    }
    pxVar1 = insertinfo(this,local_48,(char *)pppcVar2,(XFSFileInfo *)&local_44);
  }
  else {
    *(undefined4 *)(pxVar1 + 0x18) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(pxVar1 + 0x1c) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(pxVar1 + 0x24) = 0;
    *(undefined4 *)(pxVar1 + 0x20) = 0;
    pxVar1[0x28] = (xFolder)!param_2;
    pxVar1[0x29] = (xFolder)param_3;
  }
  local_4 = 0xffffffff;
  if (0xf < local_14) {
    FUN_36018c30();
    operator_delete(local_28[0]);
  }
  ExceptionList = local_c;
  return pxVar1;
}

