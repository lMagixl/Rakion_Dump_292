
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Xenesis::xFileManager::changeFolder(char const *) */

void __thiscall Xenesis::xFileManager::changeFolder(xFileManager *this,char *param_1)

{
  xFileManager *pxVar1;
  uint uVar2;
  int iVar3;
  uint unaff_ESI;
  xFolder *local_2c;
  void *local_28;
  int local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1bf50  4133  ?changeFolder@xFileManager@Xenesis@@QAEXPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e7c8;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  pxVar1 = this + 0x78;
  ExceptionList = &local_c;
  parseFolder(this,&local_2c,(char *)pxVar1);
  local_4 = 0;
  if (local_18 != 0) {
    uVar2 = FUN_3600e4d0(&local_2c,0,local_18,0x362239f4,(char *)0x2,unaff_ESI);
    if (uVar2 == 0) {
      iVar3 = *(int *)(*(int *)pxVar1 + 4);
    }
    else {
      iVar3 = FUN_36019bf0(*(void **)pxVar1,&local_2c);
    }
    if (iVar3 != 0) {
      *(int *)pxVar1 = iVar3;
    }
  }
  local_4 = 0xffffffff;
  if (0xf < local_14) {
    FUN_36018c30();
    operator_delete(local_28);
  }
  ExceptionList = local_c;
  return;
}

