
/* private: __thiscall Xenesis::xFile::xFile(class Xenesis::xBasicDeviceFile<class
   Xenesis::xWindowFileTrait> &,struct Xenesis::xFile::XFSFileInfo &,bool,bool,class
   Xenesis::xBlowFish &,class Xenesis::xBasicDeviceSection<class Xenesis::xWindowSectionTrait> &) */

xFile * __thiscall
Xenesis::xFile::xFile
          (xFile *this,xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_1,
          XFSFileInfo *param_2,bool param_3,bool param_4,xBlowFish *param_5,
          xBasicDeviceSection<class_Xenesis::xWindowSectionTrait> *param_6)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1a4a20  369
                       ??0xFile@Xenesis@@AAE@AAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@1@AAUXFSFileInfo@01@_N2AAVxBlowFish@1@AAV?$xBasicDeviceSection@VxWindowSectionTrait@Xenesis@@@1@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b8b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_2;
  uVar1 = *(undefined4 *)(param_2 + 4);
  this[0x16] = (xFile)param_4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (xFile)param_3;
  this[0x15] = (xFile)0x0;
  FUN_361a4b10(this + 0x18,(-(uint)param_4 & 0x1ffff) + 1);
  *(xBasicDeviceFile<class_Xenesis::xWindowFileTrait> **)(this + 0x1c) = param_1;
  local_4 = 0;
  *(XFSFileInfo **)(this + 0x20) = param_2;
  *(xBlowFish **)(this + 0x24) = param_5;
  *(xBasicDeviceSection<class_Xenesis::xWindowSectionTrait> **)(this + 0x30) = param_6;
  if ((this[0x16] == (xFile)0x1) && (this[0x14] != (xFile)0x0)) {
    loadBlock(this,*(uchar **)(this + 0x18));
  }
  ExceptionList = local_c;
  return this;
}

