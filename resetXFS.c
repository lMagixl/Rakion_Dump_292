
/* private: bool __thiscall Xenesis::xFileManager::resetXFS(class Xenesis::xBasicDeviceFile<class
   Xenesis::xWindowFileTrait> &,struct Xenesis::xFileManager::XFSHeader &,struct
   Xenesis::xFileManager::xFolder &,class xUnorderedMap<class std::basic_string<char,struct
   Xenesis::Private::xaichar_traits,class Xenesis::xAllocator<char> >,struct
   Xenesis::xFileManager::xFolder *,struct std::less<class std::basic_string<char,struct
   Xenesis::Private::xaichar_traits,class Xenesis::xAllocator<char> > >,class
   stdext::hash_compare<class std::basic_string<char,struct Xenesis::Private::xaichar_traits,class
   Xenesis::xAllocator<char> >,struct std::less<class std::basic_string<char,struct
   Xenesis::Private::xaichar_traits,class Xenesis::xAllocator<char> > > > > *) */

bool __thiscall
Xenesis::xFileManager::resetXFS
          (xFileManager *this,xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_1,
          XFSHeader *param_2,xFolder *param_3,
          xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
          *param_4)

{
  xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *this_00;
  xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *pxVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  XFSHeader *pXVar5;
  uint *puVar6;
  uint *local_24;
  uint *local_20;
  DWORD local_1c;
  DWORD local_18;
  uint local_14;
  XFSHeader *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a5a10  4283
                       ?resetXFS@xFileManager@Xenesis@@AAE_NAAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@2@AAUXFSHeader@12@AAUxFolder@12@PAV?$xUnorderedMap@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@PAUxFolder@xFileManager@Xenesis@@U?$less@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@@2@V?$hash_compare@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@U?$less@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@@2@@stdext@@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b9cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = getChecksum(this);
  pXVar5 = param_2;
  *(uint *)(param_2 + 0xc) = uVar3;
  local_10 = param_2 + 0x10;
  bVar2 = FUN_361a2f10(param_1,*(LONG *)(param_2 + 0x10),*(LONG *)(param_2 + 0x14));
  if (!bVar2) {
    ExceptionList = local_c;
    return false;
  }
  uVar3 = getFileCount(this,param_3);
  *(uint *)(pXVar5 + 8) = uVar3;
  local_1c = 0x80;
  FUN_361a4b10(&local_24,0x40);
  puVar6 = local_24;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(uint *)pXVar5;
    pXVar5 = pXVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  local_4 = 0;
  if (this[0x10ec] == (xFileManager)0x1) {
    FUN_361a3cb0(this + 0xa4,local_24,0x40);
  }
  FUN_361a4b10(&param_2,local_1c);
  pXVar5 = param_2;
  local_4._0_1_ = 1;
  iVar4 = FUN_36149a00(param_2,&local_1c,(int)local_24,0x40);
  this_00 = param_1;
  if (iVar4 == 0) {
    bVar2 = FUN_361a2fe0(param_1,&local_1c,1);
    if (bVar2) {
      bVar2 = FUN_361a2fe0(this_00,pXVar5,local_1c);
      if (bVar2) {
        iVar4 = *(int *)(this + 8);
        FUN_361a4b10(&local_20,iVar4 * 0x59);
        local_4 = CONCAT31(local_4._1_3_,2);
        local_14 = storeFileFolder(this,param_3,(uchar *)local_20);
        if (this[0x10ec] == (xFileManager)0x1) {
          FUN_361a3cb0(this + 0xa4,local_20,local_14);
        }
        local_18 = iVar4 * 0xb2;
        FUN_361a4b10(&param_1,iVar4 * 0x164);
        pxVar1 = param_1;
        local_4 = CONCAT31(local_4._1_3_,3);
        iVar4 = FUN_36149a00(param_1,&local_18,(int)local_20,local_14);
        if (iVar4 == 0) {
          bVar2 = FUN_361a2fe0(this_00,&local_14,3);
          if (bVar2) {
            bVar2 = FUN_361a2fe0(this_00,&local_18,3);
            if (bVar2) {
              bVar2 = FUN_361a2fe0(this_00,pxVar1,local_18);
              if (bVar2) {
                FUN_361a3020((undefined4 *)this_00);
                bVar2 = FUN_361a2f10(this_00,0,0);
                if (bVar2) {
                  bVar2 = FUN_361a2fe0(this_00,local_10,6);
                  if (bVar2) {
                    FUN_361a84c0((int)param_3);
                    FUN_361a2ee0((undefined4 *)this_00);
                    if (param_4 !=
                        (xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
                         *)0x0) {
                      FUN_361a82e0((int)param_4);
                    }
                    this[0x10ee] = (xFileManager)0x0;
                    this[0x10ec] = (xFileManager)0x0;
                    local_4._0_1_ = 2;
                    FUN_36018d70(&param_1);
                    local_4._0_1_ = 1;
                    FUN_36018d70(&local_20);
                    local_4 = (uint)local_4._1_3_ << 8;
                    FUN_36018d70(&param_2);
                    local_4 = 0xffffffff;
                    FUN_36018d70(&local_24);
                    ExceptionList = local_c;
                    return true;
                  }
                }
              }
            }
          }
        }
        local_4._0_1_ = 2;
        FUN_36018d70(&param_1);
        local_4._0_1_ = 1;
        FUN_36018d70(&local_20);
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_36018d70(&param_2);
  local_4 = 0xffffffff;
  FUN_36018d70(&local_24);
  ExceptionList = local_c;
  return false;
}

