
/* private: bool __thiscall Xenesis::xFileManager::moving(class Xenesis::xBasicDeviceFile<class
   Xenesis::xWindowFileTrait> &,void *,unsigned __int64,unsigned __int64,unsigned int) */

bool __thiscall
Xenesis::xFileManager::moving
          (xFileManager *this,xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_1,
          void *param_2,__uint64 param_3,__uint64 param_4,uint param_5)

{
  bool bVar1;
  
                    /* 0x1a5140  4244
                       ?moving@xFileManager@Xenesis@@AAE_NAAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@2@PAX_K2I@Z
                        */
  bVar1 = FUN_361a2f10(param_1,(LONG)param_3,param_3._4_4_);
  if (!bVar1) {
    return false;
  }
  bVar1 = FUN_361a2fa0(param_1,param_2,param_5);
  if (bVar1) {
    bVar1 = FUN_361a2f10(param_1,(LONG)param_4,param_4._4_4_);
    if (bVar1) {
      bVar1 = FUN_361a2fe0(param_1,param_2,param_5);
      return bVar1;
    }
  }
  return false;
}

