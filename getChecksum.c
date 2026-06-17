
/* private: unsigned int __thiscall Xenesis::xFileManager::getChecksum(void) */

uint __thiscall Xenesis::xFileManager::getChecksum(xFileManager *this)

{
  xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *this_00;
  uint uVar1;
  int iVar2;
  uint *local_18;
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a5300  4176  ?getChecksum@xFileManager@Xenesis@@AAEIXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b928;
  local_c = ExceptionList;
  this_00 = (xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)(this + 0x40);
  iVar2 = 0;
  ExceptionList = &local_c;
  FUN_361a2f50(this_00,&local_14);
  FUN_361a70f0(&local_18,0x8000);
  local_4 = 0;
  for (; (local_10 != 0 || (0x80000 < local_14)); local_14 = local_14 - 0x80000) {
    uVar1 = accumulating(this,this_00,local_18,0x8000);
    iVar2 = iVar2 + uVar1;
    local_10 = local_10 + -1 + (uint)(0x7ffff < local_14);
  }
  uVar1 = accumulating(this,this_00,local_18,local_14 >> 2);
  local_4 = 0xffffffff;
  FUN_361a7120(&local_18);
  ExceptionList = local_c;
  return uVar1 + iVar2;
}

