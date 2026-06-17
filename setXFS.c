
/* private: bool __thiscall Xenesis::xFileManager::setXFS(char const *,class
   Xenesis::xBasicDeviceFile<class Xenesis::xWindowFileTrait> &,struct
   Xenesis::xFileManager::XFSHeader &,struct Xenesis::xFileManager::xFolder &,class
   xUnorderedMap<class std::basic_string<char,struct Xenesis::Private::xaichar_traits,class
   Xenesis::xAllocator<char> >,struct Xenesis::xFileManager::xFolder *,struct std::less<class
   std::basic_string<char,struct Xenesis::Private::xaichar_traits,class Xenesis::xAllocator<char> >
   >,class stdext::hash_compare<class std::basic_string<char,struct
   Xenesis::Private::xaichar_traits,class Xenesis::xAllocator<char> >,struct std::less<class
   std::basic_string<char,struct Xenesis::Private::xaichar_traits,class Xenesis::xAllocator<char> >
   > > > *) */

bool __thiscall
Xenesis::xFileManager::setXFS
          (xFileManager *this,char *param_1,
          xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_2,XFSHeader *param_3,
          xFolder *param_4,
          xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
          *param_5)

{
  xFileManager xVar1;
  uint *puVar2;
  LPVOID pvVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  XFSHeader *pXVar8;
  undefined4 in_stack_ffffff48;
  void *in_stack_ffffff4c;
  LPVOID local_8c;
  DWORD local_88;
  DWORD local_84;
  uint local_80;
  uint *local_7c;
  LPVOID local_78;
  undefined4 local_74;
  uint *local_70;
  LONG local_6c;
  LONG local_68;
  undefined1 local_64 [28];
  xFolder local_48 [28];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a61b0  4298
                       ?setXFS@xFileManager@Xenesis@@AAE_NPBDAAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@2@AAUXFSHeader@12@AAUxFolder@12@PAV?$xUnorderedMap@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@PAUxFolder@xFileManager@Xenesis@@U?$less@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@@2@V?$hash_compare@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@U?$less@V?$basic_string@DUxaichar_traits@Private@Xenesis@@V?$xAllocator@D@3@@std@@@2@@stdext@@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ba93;
  local_c = ExceptionList;
  xVar1 = this[0x10ef];
  local_78 = (LPVOID)CONCAT31(local_78._1_3_,xVar1 == (xFileManager)0x0);
  local_7c = (uint *)CONCAT31(local_7c._1_3_,xVar1);
  ExceptionList = &local_c;
  bVar4 = FUN_361a2e60(param_2,param_1,(char)xVar1,xVar1 == (xFileManager)0x0,'\0');
  if ((bVar4) && (bVar4 = FUN_361a2f10(param_2,0,0), bVar4)) {
    local_6c = 0;
    local_68 = 0;
    bVar4 = FUN_361a2fa0(param_2,&local_6c,6);
    if (!bVar4) {
      *(int *)param_3 = DAT_362435f0;
      *(undefined4 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 8) = 0;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(undefined4 *)(param_3 + 0x10) = 6;
      *(undefined4 *)(param_3 + 0x14) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0x20000;
      pcVar7 = s_5_6Xenesis_File_System_ver_01_01_362435f9 + 3;
      pXVar8 = param_3 + 0x1c;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pXVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pXVar8 = pXVar8 + 4;
      }
      FUN_361a2fe0(param_2,param_3 + 0x10,6);
      FUN_361a84c0((int)(this + 0x48));
      *(undefined4 *)(this + 0x60) = 0;
      *(undefined4 *)(this + 100) = 0;
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined4 *)(this + 0x6c) = 0;
      this[0x70] = (xFileManager)0x0;
      this[0x71] = (xFileManager)0x0;
LAB_361a64bd:
      if (param_5 !=
          (xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
           *)0x0) {
        FUN_3601e510(local_64,(_String_base *)&DAT_36243671);
        local_70 = (uint *)&stack0xffffff48;
        local_4 = 3;
        FUN_3601e510(&stack0xffffff48,(_String_base *)&DAT_36243670);
        puVar6 = FUN_361a7b90(local_2c,param_5,in_stack_ffffff48,in_stack_ffffff4c);
        local_4._0_1_ = 4;
        FUN_361a8c40(this + 0x48,local_64,puVar6);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_361a7920((int)local_2c);
        local_4 = 0xffffffff;
        FUN_3601b750((int)local_64);
      }
      this[0x10ee] = (xFileManager)0x0;
      ExceptionList = local_c;
      return true;
    }
    bVar4 = FUN_361a2f10(param_2,local_6c,local_68);
    if (bVar4) {
      local_88 = 0;
      bVar4 = FUN_361a2fa0(param_2,&local_88,1);
      if (bVar4) {
        FUN_361a4b10(&local_8c,local_88);
        local_4 = 0;
        bVar4 = FUN_361a2fa0(param_2,local_8c,local_88);
        if (bVar4) {
          local_74 = 0x40;
          iVar5 = FUN_36152040(param_3,&local_74,(int)local_8c,local_88);
          if (iVar5 == 0) {
            if (this[0x10ec] == (xFileManager)0x1) {
              FUN_361a3cf0(this + 0xa4,(uint *)param_3,0x40);
            }
            if ((*(int *)param_3 == DAT_362435f0) && (*(int *)(param_3 + 0x18) == 0x20000)) {
              local_80 = 0;
              bVar4 = FUN_361a2fa0(param_2,&local_80,3);
              if (bVar4) {
                local_84 = 0;
                bVar4 = FUN_361a2fa0(param_2,&local_84,3);
                if (bVar4) {
                  FUN_361a4b10(&local_78,local_84);
                  pvVar3 = local_78;
                  local_4._0_1_ = 1;
                  bVar4 = FUN_361a2fa0(param_2,local_78,local_84);
                  if (bVar4) {
                    FUN_361a4b10(&local_7c,local_80);
                    puVar2 = local_7c;
                    local_4._0_1_ = 2;
                    iVar5 = FUN_36152040(local_7c,&local_80,(int)pvVar3,local_84);
                    if (iVar5 == 0) {
                      if (this[0x10ec] == (xFileManager)0x1) {
                        FUN_361a3cf0(this + 0xa4,puVar2,local_80);
                      }
                      FUN_361a84c0((int)param_4);
                      local_70 = local_7c;
                      buildFileFolder(this,local_48,(uchar **)param_4);
                      FUN_3601b750((int)local_48);
                      FUN_361a2f50(param_2,(uint *)(param_3 + 0x10));
                      local_4._0_1_ = 1;
                      FUN_36018d70(&local_7c);
                      local_4 = (uint)local_4._1_3_ << 8;
                      FUN_36018d70(&local_78);
                      local_4 = 0xffffffff;
                      FUN_36018d70(&local_8c);
                      goto LAB_361a64bd;
                    }
                    local_4._0_1_ = 1;
                    FUN_36018d70(&local_7c);
                  }
                  local_4 = (uint)local_4._1_3_ << 8;
                  FUN_36018d70(&local_78);
                }
              }
            }
          }
        }
        local_4 = 0xffffffff;
        FUN_36018d70(&local_8c);
      }
    }
  }
  ExceptionList = local_c;
  return false;
}

