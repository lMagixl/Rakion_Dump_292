
/* private: bool __thiscall Xenesis::xFileManager::exporting(class Xenesis::xBasicDeviceFile<class
   Xenesis::xWindowFileTrait> &,void *,unsigned int,class Xenesis::xFile *) */

bool __thiscall
Xenesis::xFileManager::exporting
          (xFileManager *this,xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *param_1,
          void *param_2,uint param_3,xFile *param_4)

{
  bool bVar1;
  
                    /* 0x1a5110  4163
                       ?exporting@xFileManager@Xenesis@@AAE_NAAV?$xBasicDeviceFile@VxWindowFileTrait@Xenesis@@@2@PAXIPAVxFile@2@@Z
                        */
  xFile::load(param_4,param_2,param_3);
  bVar1 = FUN_361a2fe0(param_1,param_2,param_3);
  return bVar1;
}

