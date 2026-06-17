
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class std::auto_ptr<class Xenesis::xFile> __thiscall Xenesis::xFileManager::open(char
   const *,bool,bool,bool,bool) */

char * __thiscall
Xenesis::xFileManager::open
          (xFileManager *this,char *param_1,bool param_2,bool param_3,bool param_4,bool param_5)

{
  char ******ppppppcVar1;
  xFolder *pxVar2;
  undefined4 uVar3;
  xFile *this_00;
  undefined3 in_stack_00000009;
  bool in_stack_00000018;
  bool bVar4;
  bool bVar5;
  xFileManager *pxVar6;
  xFileManager *pxVar7;
  xFolder *local_34;
  undefined4 local_30;
  xFolder *local_2c;
  char *****local_28 [5];
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1a65c0  4257
                       ?open@xFileManager@Xenesis@@QAE?AV?$auto_ptr@VxFile@Xenesis@@@std@@PBD_N111@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bad4;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_30 = 0;
  if (param_4) {
    ExceptionList = &local_c;
    parseFolder(this,&local_2c,(char *)&local_34);
    local_4 = 1;
    ppppppcVar1 = (char ******)local_28[0];
    if (local_14 < 0x10) {
      ppppppcVar1 = local_28;
    }
    pxVar2 = getinfo(this,local_34,(char *)ppppppcVar1);
    if (pxVar2 == (xFolder *)0x0) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      local_4 = local_4 & 0xffffff00;
      local_30 = 1;
      if (local_14 < 0x10) {
        ExceptionList = local_c;
        return param_1;
      }
      FUN_36018c30();
      operator_delete(local_28[0]);
      ExceptionList = local_c;
      return param_1;
    }
    local_34 = (xFolder *)FUN_361bf99c(0x38);
    local_4._0_1_ = 2;
    if (local_34 == (xFolder *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = xFile::xFile((xFile *)local_34,
                           (xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)(this + 0x40),
                           (XFSFileInfo *)(pxVar2 + 0x18),param_4,param_3,(xBlowFish *)(this + 0xa4)
                           ,(xBasicDeviceSection<class_Xenesis::xWindowSectionTrait> *)
                            (this + 0x10f0));
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
      FUN_36018c30();
      operator_delete(local_28[0]);
      *(undefined4 *)param_1 = uVar3;
      ExceptionList = local_c;
      return param_1;
    }
  }
  else {
    if ((this[0x10ed] != (xFileManager)0x0) || (this[0x10ef] != (xFileManager)0x0)) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      return param_1;
    }
    ExceptionList = &local_c;
    this[0x10ed] = (xFileManager)0x1;
    this[0x10ee] = (xFileManager)0x1;
    this_00 = (xFile *)FUN_361bf99c(0x38);
    local_4 = 3;
    if (this_00 != (xFile *)0x0) {
      pxVar7 = this + 0x10f0;
      pxVar6 = this + 0xa4;
      bVar5 = true;
      bVar4 = false;
      local_34 = (xFolder *)this_00;
      pxVar2 = insertFile(this,_param_2,param_5,in_stack_00000018);
      uVar3 = xFile::xFile(this_00,(xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)
                                   (this + 0x40),(XFSFileInfo *)(pxVar2 + 0x18),bVar4,bVar5,
                           (xBlowFish *)pxVar6,
                           (xBasicDeviceSection<class_Xenesis::xWindowSectionTrait> *)pxVar7);
      *(undefined4 *)param_1 = uVar3;
      ExceptionList = local_c;
      return param_1;
    }
    uVar3 = 0;
  }
  *(undefined4 *)param_1 = uVar3;
  ExceptionList = local_c;
  return param_1;
}

