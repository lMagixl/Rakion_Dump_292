
/* private: bool __thiscall Xenesis::xFileManager::importing(class Xenesis::xBasicDeviceFile<class
   Xenesis::xWindowFileTrait> &,void *,unsigned int,class Xenesis::xFile *) */

bool __thiscall
Xenesis::xFileManager::importing
          (xFileManager *this,xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_1,
          void *param_2,uint param_3,xFile *param_4)

{
  bool bVar1;
  uint uVar2;
  
                    /* 0x1a50d0  4217
                       ?importing@xFileManager@Xenesis@@AAE_NAAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@2@PAXIPAVxFile@2@@Z
                        */
  bVar1 = FUN_361a2fa0(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  uVar2 = xFile::save(param_4,param_2,param_3);
  return (bool)('\x01' - (uVar2 != param_3));
}

