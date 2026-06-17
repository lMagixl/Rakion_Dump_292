
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Xenesis::xFileManager::removeFolder(char const *) */

void __thiscall Xenesis::xFileManager::removeFolder(xFileManager *this,char *param_1)

{
  int iVar1;
  char ****ppppcVar2;
  xFolder *local_30;
  xFolder *local_2c;
  char ***local_28 [5];
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1f350  4281  ?removeFolder@xFileManager@Xenesis@@QAEXPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ec28;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  parseFolder(this,&local_2c,(char *)&local_30);
  local_4 = 0;
  iVar1 = FUN_36019bf0(local_30,&local_2c);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_36019bf0(local_30,&local_2c),
     *(int *)(iVar1 + 0x18) == 0 && *(int *)(iVar1 + 0x1c) == 0)) {
    ppppcVar2 = (char ****)local_28[0];
    if (local_14 < 0x10) {
      ppppcVar2 = local_28;
    }
    deleteFile(this,local_30,(char *)ppppcVar2);
    this[0x10ee] = (xFileManager)0x1;
  }
  local_4 = 0xffffffff;
  if (0xf < local_14) {
    FUN_36018c30();
    operator_delete(local_28[0]);
  }
  ExceptionList = local_c;
  return;
}

