
/* private: unsigned int __thiscall Xenesis::xFileManager::accumulating(class
   Xenesis::xBasicDeviceFile<class Xenesis::xWindowFileTrait> &,unsigned int *,unsigned int) */

uint __thiscall
Xenesis::xFileManager::accumulating
          (xFileManager *this,xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_1,
          uint *param_2,uint param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  
                    /* 0x1a51e0  4130
                       ?accumulating@xFileManager@Xenesis@@AAEIAAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@2@PAII@Z
                        */
  bVar2 = FUN_361a2fa0(param_1,param_2,param_3 * 4);
  if (!bVar2) {
    return 0;
  }
  puVar1 = param_2 + param_3;
  uVar3 = 0;
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    uVar3 = uVar3 + *param_2;
  }
  return uVar3;
}

