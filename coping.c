
/* private: bool __thiscall Xenesis::xFileManager::coping(class Xenesis::xBasicDeviceFile<class
   Xenesis::xWindowFileTrait> &,class Xenesis::xBasicDeviceFile<class Xenesis::xWindowFileTrait>
   &,void *,unsigned int) */

bool __thiscall
Xenesis::xFileManager::coping
          (xFileManager *this,xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_1,
          xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_2,void *param_3,uint param_4)

{
  bool bVar1;
  
                    /* 0x1a51b0  4148
                       ?coping@xFileManager@Xenesis@@AAE_NAAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@2@0PAXI@Z
                        */
  bVar1 = FUN_361a2fa0(param_2,param_3,param_4);
  if (!bVar1) {
    return false;
  }
  bVar1 = FUN_361a2fe0(param_1,param_3,param_4);
  return bVar1;
}

